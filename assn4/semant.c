#include <stdio.h>
#include <string.h>
#include "util.h"
#include "errormsg.h"
#include "symbol.h"
#include "absyn.h"
#include "types.h"
#include "env.h"
#include "semant.h"

static Ty_ty actual_ty(Ty_ty ty);
static Ty_tyList makeFormalTyList(S_table tenv,A_fieldList list);
static bool helperfunctioncompare(Ty_ty type1,Ty_ty type2);


#define PRINT_VENV(venv) { printf("[%s] venv\n",__func__); S_dump(venv,showVEnvEntry); }
#define PRINT_TENV(tenv) { printf("[%s] tenv\n",__func__); S_dump(tenv,showTEnvEntry); }

static string getKindStr(const E_enventry entry) {
  assert(entry != NULL);
  if (entry->kind== E_varEntry)
    return "var";
  else if (entry->kind== E_funEntry)
    return "fun";
  assert(0);
}

void showVEnvEntry(S_symbol key,void *value) {
  S_symbol k= (S_symbol)key;
  E_enventry v= (E_enventry)value;

  printf("  k= %p,k->name= %s",k,S_name(k));
  printf(",v= %p",v);
  if (v != NULL) {
    printf(",v->kind= %s",getKindStr(v));
    if (v->kind== E_varEntry) {
      printf(",v->u.var.ty= ");
      Ty_print(v->u.var.ty);
      printf("\n");
    } else if (v->kind== E_funEntry) {
      printf(",v->u.fun.formals= ");
      TyList_print(v->u.fun.formals);
      printf(",v->u.fun.result= ");
      Ty_print(v->u.fun.result);
      printf("\n");
    } else {
      assert(0);
    }
  }
}

void showTEnvEntry(S_symbol key,void *value) {
  S_symbol k= (S_symbol)key;
  Ty_ty v= (Ty_ty)value;

  printf("  k= %p,k->name= %s",k,S_name(k));
  printf(",v= ");
  Ty_print(v);
  printf("\n");
}









struct expty expTy(Tr_exp exp,Ty_ty ty) {
  /* FIXME */
  struct expty e;
  e.exp= exp;
  e.ty= ty;
  return e;
}

void SEM_transDec(S_table venv,S_table tenv,A_dec d) {
  printf("[%s] venv= %p,tenv= %p,d= %p\n",__func__,venv,tenv,d);
  PRINT_VENV(venv);
  PRINT_TENV(tenv);
  
	

	
	switch(d->kind) {

		case A_varDec: {
			// printf("i hate this omg here???");
			// struct expty e= SEM_transExp(venv,tenv,d->u.var.init);
			// S_enter(venv,d->u.var.var,E_VarEntry(e.ty));
			Ty_ty theType= NULL;
			Ty_ty tempty;
			struct expty toLookAt;
			A_exp init= d->u.var.init;
			if(d->u.var.typ) {
				theType= S_look(tenv,d->u.var.typ);
				tempty= actual_ty(theType);
				//pass;
			}
			toLookAt= SEM_transExp(venv,tenv,init);
			// printf("IT HERE!!!!!????????????");
			if(toLookAt.ty->kind== Ty_nil) {
				EM_error(d->pos,"typeerror");
				assert(0);
			}
			theType= toLookAt.ty;
			tempty= actual_ty(theType);
			toLookAt.ty= actual_ty(toLookAt.ty);
			switch(toLookAt.ty->kind){
				case Ty_array: {
					string iName= S_name(init->u.array.typ);
					string tName= S_name(d->u.var.typ);
					if(S_look(tenv,d->u.var.typ)){
						int hitf= 0;
						Ty_ty ty= S_look(tenv,d->u.var.init->u.array.typ);
						while(ty && ty->kind== Ty_name){
							//printf("did it come hereEEEEEEEEEEEEE");
							string name= S_name(ty->u.name.sym);
							string varName= S_name(d->u.var.typ);
							if(strcmp("string",name) &&strcmp("int",name) && strcmp(name,varName)==0){
								hitf= 1;
								break;
							}
							ty= ty->u.name.ty;
						}
						if(hitf) {
							break;
						}
						if(toLookAt.ty->kind== Ty_record){
							//printf("did it come hereEEEEEEEEEEEEE");
							Ty_ty vType= S_look(tenv,d->u.var.typ);
							Ty_ty ittType= S_look(tenv,d->u.var.init->u.array.typ);
							if(strcmp(S_name(vType->u.name.sym),S_name(ittType->u.name.sym))){
								EM_error(d->u.var.init->pos,"typemismatch");
								assert(0);
							}
						}
					}
				}
				
				case Ty_record: {
					// printf("OR IS IT HERE????????????");
					string iName= S_name(init->u.record.typ);
					string tName= S_name(d->u.var.typ);
					if(tName != "" && strcmp(iName,tName) != 0){
						EM_error(d->u.var.init->pos,"typemismatch");
						assert(0);
					};
					break;
				}
					
				break;
			}
			S_enter(venv,d->u.var.var,E_VarEntry(toLookAt.ty));
			break;
		}


		case A_functionDec: {
			A_fundecList theList= d->u.function;
			A_fundec i= NULL;
			while (theList) {
				A_fundec curFun= theList->head;
				Ty_tyList sett= makeFormalTyList(tenv,curFun->params);
				Ty_ty qq= S_look(tenv,curFun->result);
				S_enter(venv,curFun->name,E_FunEntry(sett,qq));
				i= theList->head;
				theList= theList->tail;
			}
			theList= d->u.function;
			// printf("here????????????");
			while (theList) {
				A_fundec curFun= theList->head;
				Ty_tyList sett= makeFormalTyList(tenv,curFun->params);
				S_beginScope(venv);
				A_fieldList parrs= curFun->params;
				Ty_tyList listty= sett;
				while (listty) {
					S_enter(venv,parrs->head->name,E_VarEntry(listty->head));
					parrs= parrs->tail;
					listty= listty->tail;
				}
				Ty_ty sendback= actual_ty(S_look(tenv,curFun->result));
				struct expty eemexp= SEM_transExp(venv,tenv,curFun->body);
				if(sendback->kind==Ty_void && eemexp.ty->kind != Ty_void){
					EM_error(curFun->body->pos,"return error");
					assert(0);
				}
				S_endScope(venv);
				theList= theList->tail;
			}

			break;
		}



		case A_typeDec: {
			// printf("here????????????");
			// A_nametyList theList= d->u.type;
			// while(theList){
			// }
			A_nametyList theList= d->u.type;
			while (theList){
				S_enter(tenv,theList->head->name,Ty_Name(theList->head->ty->u.name,NULL));
				theList= theList->tail;
			}
			A_nametyList temp= d->u.type;
			A_namety ittt= NULL;
			while (temp) {
				if(ittt && !strcmp(S_name(temp->head->name),S_name(ittt->name))) {
						EM_error(ittt->ty->pos,"type error");
						assert(0);
				}
				S_enter(tenv,temp->head->name,Ty_Name(temp->head->ty->u.name,NULL));
				ittt= temp->head;
				temp= temp->tail;
			}
			int loop= 1;
			theList= d->u.type;
			while (theList){
				Ty_ty giw= SEM_transTy(tenv,theList->head->ty);
				if(giw->kind== Ty_record){
					Ty_fieldList rec= giw->u.record;
					Ty_field rechead= rec->head;
					//print("%d",rechead && rec);
					//printf("did it come hereEEEEEEEEEEEEE");
					while (rec && rechead){
						int pos= theList->head->ty->pos-10;
						string name= S_name(theList->head->name);
						rechead= rec->head;
						rec= rec->tail;
					}
					loop= 0;
				}
				else if (loop) {
					string saveThN= S_name(giw->u.name.sym);
					if(giw->kind != Ty_name || !strcmp(saveThN,"string") || !strcmp(saveThN,"int")){
						loop= 0;
					}
				}
				Ty_ty send= S_look(tenv,theList->head->name);
				send->u.name.ty= giw;
				theList= theList->tail;
			}
			//printf("DOWN HEREEEEEEE here")
			if(loop){
						EM_error(d->u.type->head->ty->pos,"typerror");
						assert(0);
			}
			break;
		}
	}
  
  /*assert(0);*/
  
}

Ty_ty actual_ty(Ty_ty theTy){
	while(theTy->kind== Ty_name && theTy) {
		theTy= theTy->u.name.ty;
  	}
	return theTy;
}

Ty_tyList makeFormalTyList(S_table tenv,A_fieldList list){
	Ty_tyList h= NULL;
	Ty_tyList t= NULL;
	while(list){
		A_field cur= list->head;
		Ty_ty ty_ty= S_look(tenv,cur->typ);
		if(t){
			t->tail= Ty_TyList(ty_ty,NULL);
			t= t->tail;
		}
		else{
			t= Ty_TyList(ty_ty,NULL);
			h= t;
		}
		list= list->tail;
	}
	return h;
}


struct expty SEM_transExp(S_table venv,S_table tenv,A_exp a) {
  printf("[%s] venv= %p,tenv= %p,a= %p\n",__func__,venv,tenv,a);
  PRINT_VENV(venv);
  PRINT_TENV(tenv);

  switch(a->kind){
  	case A_opExp: {
	  A_oper oper= a->u.op.oper;
	  /*printf("NATHAN NATHAN NATHAN");
	  printf("%d",oper== A_plusOp);
	  printf("NATHAN NATHAN NATHAN");*/
	  struct expty left= SEM_transExp(venv,tenv,a->u.op.left);
	  /*printf("WHY ARENT U HERE");*/
	  struct expty right= SEM_transExp(venv,tenv,a->u.op.right);
	  if (oper== A_plusOp || oper== A_minusOp || oper== A_timesOp || oper== A_divideOp){
	  	if (left.ty->kind!=Ty_int){
	  		EM_error(a->u.op.left->pos,"integer required");
			assert(0);
	  	}
	  	if (right.ty->kind!=Ty_int){
	  		/*printf("heHifafIBASIFPBPIfipbipdsfBIPASFPAIBFPIFBIADGHPFHNAPGPOre");*/
	  		EM_error(a->u.op.right->pos,"integer required");
			assert(0);
	  	}
	  	return expTy(NULL,Ty_Int());
	  }
	  else if (oper==A_eqOp || oper==A_neqOp || oper==A_ltOp || oper==A_leOp || oper==A_gtOp || oper==A_geOp){
	  	if (!helperfunctioncompare(left.ty,right.ty)){
	  		EM_error(a->u.op.right->pos,"incompatible type to compare");
			assert(0);
	  	}
	  	return expTy(NULL,Ty_Int());
	  }
	 }
	case A_letExp: {
		//printf("AT THE LET EXPRESSSIONNNNNNNNNNN");
	 	struct expty exp;
	 	A_decList d;
	 	S_beginScope(venv);
	 	S_beginScope(tenv);
	 	for(d= a->u.let.decs; d; d=d->tail){
	 		//printf("LET EXPRESSION FOR LOOPPPPPP");
	 		SEM_transDec(venv,tenv,d->head);
	 	}
	 	exp=SEM_transExp(venv,tenv,a->u.let.body);
	 	S_endScope(tenv);
	 	S_endScope(venv);
	 	//printf("AT THE ENDING OF LET EXPRESOIN PLEASE");
	 	return exp;
	}
	case A_intExp: {
		return expTy(NULL,Ty_Int());
	}
	case A_stringExp: {
		return expTy(NULL,Ty_String());
	}
	case A_varExp: {
		return SEM_transVar(venv,tenv,a->u.var);
	}
	case A_nilExp: {
		return expTy(NULL,Ty_Nil());
	}
	case A_breakExp: {
		return expTy(NULL,Ty_Void());
	}
	
	case A_assignExp: {
		struct expty var= SEM_transVar(venv,tenv,a->u.assign.var);
		struct expty exp= SEM_transExp(venv,tenv,a->u.assign.exp);
		//printf("DID IT GET HEREEEEEEEEEEEEEEEEEEEEEEEEEE");
		if(var.ty && !helperfunctioncompare(var.ty,exp.ty)){
			EM_error(a->pos,"match error");
			assert(0);
		}

		return expTy(NULL,Ty_Void());
	}
	case A_callExp: {
		// printf("NATHAN NATHAN NATHAN");
		E_enventry x= S_look(venv,a->u.call.func);
		if(!x || x->kind != E_funEntry){
			EM_error(a->pos,"unknown func");
			return expTy(NULL,Ty_Int());
		}
		Ty_tyList list1= x->u.fun.formals;
		A_expList list2= a->u.call.args;
		while(list1 && list2) {
			Ty_ty theName= SEM_transExp(venv,tenv,list2->head).ty;
			Ty_ty theAct= actual_ty(list1->head);
			if(list1->head->kind != theName->kind){
				if(theAct->kind== theName->kind || (list1->head->kind== Ty_record && theName->kind== Ty_nil)) {
					list1= list1->tail;
					list2= list2->tail;
					continue;
				}
				EM_error(list2->head->pos,"type mismatch");
				assert(0);
			}
			list1= list1->tail;
			list2= list2->tail;
		}
		//prinf("FINISH WHILE LOOP");


		
		if(list1) {
			EM_error(a->u.call.args->head->pos,"type mismatch");
			return expTy(NULL,Ty_Int());
		}
		if(list2) {
			EM_error(list2->head->pos-1-strlen(S_name(a->u.call.func)),"type mismatch");
			return expTy(NULL,Ty_Int());
		}
		if(x->u.fun.result->kind != Ty_void){
			return expTy(NULL,x->u.fun.result);
		}
		else{
			return expTy(NULL,Ty_Void());
		}
		
		EM_error(a->pos,"function never def");
		return expTy(NULL,Ty_Int());
	}
	case A_seqExp: {
		//prinf("SEQEXPPPPPPPPPPPPPP")
		A_expList x= a->u.seq;
		while(x->tail) {
			SEM_transExp(venv,tenv,x->head);
			x= x->tail;
		}
		if(x&&x->head){
			return SEM_transExp(venv,tenv,x->head);
		}
		else{
			return expTy(NULL,Ty_Void());
		}
	}
	

	
	case A_recordExp: {
		Ty_ty rec= actual_ty(S_look(tenv,a->u.record.typ));
		if(!rec || rec->kind != Ty_record) {
			EM_error(a->pos,"type error with record");
			return expTy(NULL,Ty_Int());
		}
		
		A_efieldList list1= a->u.record.fields;
		Ty_fieldList list2= rec->u.record;
		while(list1 && list2){
			// printf("NATHAN NATHAN NATHAN");

			A_efield ef= list1->head;
			Ty_field tf= list2->head;
			Ty_ty efty= SEM_transExp(venv,tenv,ef->exp).ty;
			if(tf->ty->kind != efty->kind){
				tf->ty= actual_ty(tf->ty);
				if(tf->ty->kind== Ty_record && efty->kind== Ty_nil || tf->ty->kind== efty->kind){
					list1= list1->tail;
					list2= list2->tail;
					continue;
				}
				else{
					EM_error(a->pos,"typemismatch");
					assert(0);
				}
			}
			list1= list1->tail;
			list2= list2->tail;
		}
		return expTy(NULL,rec);
	}
	
	
	case A_arrayExp: {
		// printf("NATHAN NATHAN NATHAN");
		Ty_ty ar= actual_ty(S_look(tenv,a->u.array.typ));
		if(!ar || ar->kind != Ty_array) {
			EM_error(a->pos,"not valid array");
			return expTy(NULL,ar);
		}
		struct expty siz= SEM_transExp(venv,tenv,a->u.array.size);
		if(siz.ty->kind != Ty_int) {
			EM_error(a->pos,"not valid array size");
			assert(0);
		}
		struct expty typ= SEM_transExp(venv,tenv,a->u.array.init);
		if(typ.ty->kind != actual_ty(ar->u.array)->kind){
			EM_error(a->u.array.init->pos,"typemismatch");
			assert(0);
		}
		return expTy(NULL,ar);
	}

	case A_forExp: {
		//printf("here????????????");
		struct expty begin= SEM_transExp(venv,tenv,a->u.forr.lo);
		struct expty end= SEM_transExp(venv,tenv,a->u.forr.hi);
		if(begin.ty->kind != Ty_int) {
			EM_error(a->u.forr.lo->pos,"int needed");
			assert(0);
		}
		if(end.ty->kind != Ty_int) {
			EM_error(a->u.forr.hi->pos,"int needed");
			assert(0);
		}
		S_enter(venv,a->u.forr.var,E_VarEntry(Ty_Int()));
		S_beginScope(venv);
		SEM_transExp(venv,tenv,a->u.forr.body);
		S_endScope(venv);
		return expTy(NULL,Ty_Void());
	}	
	
	case A_ifExp: {
		SEM_transExp(venv,tenv,a->u.iff.test);
		struct expty theThen= SEM_transExp(venv,tenv,a->u.iff.then);
		if(a->u.iff.elsee) {
			struct expty theElse= SEM_transExp(venv,tenv,a->u.iff.elsee);
			if((theThen.ty->kind != theElse.ty->kind) &&(theThen.ty->kind != Ty_nil && theElse.ty->kind != Ty_nil)) {
				EM_error(a->u.iff.elsee->pos,"typemismatch");
				assert(0);
			}
			return theThen;
		}
		else{
			if(theThen.ty->kind != Ty_void){
				EM_error(a->u.iff.then->pos,"incorrect ussaage of if");
				assert(0);
			}
			return expTy(NULL,Ty_Void());
		}
	}
	
	case A_whileExp: {
		// printf("here????????????");
		SEM_transExp(venv,tenv,a->u.whilee.test);
		struct expty temp= SEM_transExp(venv,tenv,a->u.whilee.body);
		if(temp.ty->kind== Ty_int){
			EM_error(a->u.whilee.body->pos,"incorrect usage of while");
			assert(0);
		}
		return expTy(NULL,Ty_Void());
	}
	
	

			
				
			
			
	
		
	
	
	
	
	
}
  /*assert(0);*/
}


bool helperfunctioncompare(Ty_ty type1,Ty_ty type2){
	if(type1== NULL && type2== NULL) {
	  	return 0;
  	}
  	else if(type1== Ty_record && type2== Ty_nil){
		return 1;
	}
	else if(type1== Ty_nil && type2== Ty_record){
    	return 1;
  	}
  	return(type1 == type2);
}

void SEM_transProg(A_exp exp) {
  /* FIXME */
  printf("[%s] exp= %p\n",__func__,exp);
  S_table venv= E_base_venv();
  S_table tenv= E_base_tenv();
  SEM_transExp(venv,tenv,exp);
}

struct expty SEM_transVar(S_table venv,S_table tenv,A_var v) {
  printf("[%s] venv= %p,tenv= %p,v= %p\n",__func__,venv,tenv,v);
  PRINT_VENV(venv);
  PRINT_TENV(tenv);

  switch(v->kind) {
  	case A_simpleVar: {
  		E_enventry x= S_look(venv,v->u.simple);
  		if (x && x->kind==E_varEntry){
  			/*return expTy(NULL,actual_ty(x->u.var.ty));*/
  			return expTy(NULL,x->u.var.ty);
  		}
  		else{
  			EM_error(v->pos,"undefined variable %s",S_name(v->u.simple));
  			return expTy(NULL,Ty_Int());
  		}
  		
  	}
  	case A_fieldVar: {
  		struct expty x= SEM_transVar(venv,tenv,v->u.field.var);
  		if(x.ty->kind != Ty_record) {
  			EM_error(v->u.field.var->pos,"type is not record");
			assert(0);
  		}
  		else {
  			Ty_fieldList f= x.ty->u.record;
  			while(f && f->head->name != v->u.field.sym) {
  				f= f->tail;
  			}
  			if(!f) {
  				EM_error(v->pos,"missing field");
  				return expTy(NULL,NULL);
  			}
  			else{
  				return expTy(NULL,actual_ty(f->head->ty));
  			}
  		}
  	}
  	case A_subscriptVar: {
  		struct expty var= SEM_transVar(venv,tenv,v->u.subscript.var);
  		struct expty exp= SEM_transExp(venv,tenv,v->u.subscript.exp);
  		if(var.ty->kind != Ty_array){
  			EM_error(v->pos,"not array");
			assert(0);
  		}
  		if(exp.ty->kind != Ty_int){
  			EM_error(v->pos,"not Integer");
  			return expTy(NULL,Ty_Int());
  		}
  		return expTy(NULL,actual_ty(var.ty->u.array));
  	}
  	return expTy(NULL,NULL);
  		
  }
  
  /*assert(0);*/
}

Ty_ty SEM_transTy(S_table tenv,A_ty a) {
  printf("[%s] tenv= %p,a= %p\n",__func__,tenv,a);
  PRINT_TENV(tenv);

  Ty_ty t2y;
  switch (a->kind){
  	case A_nameTy:{
  		return Ty_Name(a->u.name,S_look(tenv,a->u.name));
  	}
	case A_arrayTy:{
  		return Ty_Array(S_look(tenv,a->u.array));
  	}  
  	case A_recordTy:{
  		Ty_fieldList curlist= NULL;
  		A_fieldList serlist= a->u.record;
  		while (serlist){
  			S_symbol name= serlist->head->name;
  			S_symbol typ= serlist->head->typ;
  			Ty_ty t2y= S_look(tenv,typ);
  			curlist= Ty_FieldList(Ty_Field(name,t2y),curlist);
  			serlist= serlist->tail;
  		}
  		Ty_fieldList list2= NULL;
  		while(curlist){
  			list2= Ty_FieldList(curlist->head,list2);
  			curlist= curlist->tail;
  		}
  		return Ty_Record(list2);
  		
  	}
  	
  	
  	}
  /*assert(0);*/
}




