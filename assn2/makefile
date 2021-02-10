a.out: parsetest.o y.tab.o lex.yy.o errormsg.o util.o
	gcc -g parsetest.o y.tab.o lex.yy.o errormsg.o util.o

parsetest.o: parsetest.c errormsg.h util.h
	gcc -g -c parsetest.c

y.tab.o: y.tab.c
	gcc -g -c y.tab.c

y.tab.c: tiger.grm
	bison -b y -dv tiger.grm

y.tab.h: y.tab.c
	echo "y.tab.h was created at the same time as y.tab.c"

errormsg.o: errormsg.c errormsg.h util.h
	gcc -g -c errormsg.c

lex.yy.o: lex.yy.c y.tab.h errormsg.h util.h
	gcc -g -c lex.yy.c

util.o: util.c util.h
	gcc -g -c util.c

clean: 
	rm -f a.out parsetest.o y.tab.o y.tab.c y.tab.h y.output errormsg.o lex.yy.o util.o
