a.out: y.tab.c
	gcc -o $@ -g y.tab.c lex.yy.c parsetest.c errormsg.c util.c absyn.c symbol.c table.c prabsyn.c

y.tab.c: tiger.grm
	bison -y -dv tiger.grm

clean: 
	rm -f a.out y.tab.c y.tab.h y.output
