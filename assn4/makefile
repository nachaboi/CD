parsetest:
	gcc -o $@ -g \
    lex.yy.c y.tab.c parsetest.c \
    util.c errormsg.c absyn.c parse.c symbol.c table.c prabsyn.c types.c env.c semant.c

clean: 
	rm -f parsetest

