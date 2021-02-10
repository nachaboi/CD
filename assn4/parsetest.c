#include <stdio.h>
#include <stdlib.h>
#include "util.h"
#include "symbol.h"
#include "absyn.h"
#include "parse.h"
#include "prabsyn.h"
#include "semant.h"

extern FILE *yyin, *yyout;
extern int yydebug;

int main(int argc, char **argv) {
  yyin = stdin;
  yyout = stdout;
  yydebug = 1;

  if (argc!=2) {
    fprintf(stderr, "Usage: %s filename\n", argv[0]);
    exit(1);
  }

  fprintf(stderr, "INFO: parse(%s)\n", argv[1]);
  A_exp ast = parse(argv[1]);
  fprintf(stderr, "INFO: ast = %p\n", ast);

  if (ast != NULL) {
    // parsing
    pr_exp(stderr, ast, 2);
    fprintf(stderr, "\n");

    // type checking
    SEM_transProg(ast);
    fprintf(stderr, "INFO: Passed the type-checking phase!\n");
  } else {
    fprintf(stderr, "INFO: Parsing error!\n");
  }

  return 0;
}

