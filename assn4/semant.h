#ifndef __SEMANT_H__
#define __SEMANT_H__

#include "types.h"

typedef void *Tr_exp;

struct expty { Tr_exp exp; Ty_ty ty; };
struct expty expTy(Tr_exp exp, Ty_ty ty);

void          SEM_transDec(S_table venv, S_table tenv, A_dec d);
struct expty  SEM_transExp(S_table venv, S_table tenv, A_exp a);
void          SEM_transProg(A_exp exp);
Ty_ty         SEM_transTy(S_table tenv, A_ty a);
struct expty  SEM_transVar(S_table venv, S_table tenv, A_var v);

#endif

