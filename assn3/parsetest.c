#include <stdio.h>
#include <stdlib.h>
#include "util.h"
#include "errormsg.h"

extern int yyparse(void);
extern FILE *yyin, *yyout;

void parse(string fname) 
{EM_reset(fname);
 if (yyparse() == 0) /* parsing worked */
   fprintf(stderr,"Parsing successful!\n");
 else fprintf(stderr,"Parsing failed\n");
}


int main(int argc, char **argv) {
 yyin = stdin; yyout = stdout;
 if (argc!=2) {fprintf(stderr,"usage: %s filename\n", argv[0]); exit(1);}
 parse(argv[1]);
 return 0;
}
