
/*  A Bison parser, made from tiger.grm
 by  GNU Bison version 1.25
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	ID	258
#define	STRING	259
#define	INT	260
#define	COMMA	261
#define	COLON	262
#define	SEMICOLON	263
#define	LPAREN	264
#define	RPAREN	265
#define	LBRACK	266
#define	RBRACK	267
#define	LBRACE	268
#define	RBRACE	269
#define	DOT	270
#define	PLUS	271
#define	MINUS	272
#define	TIMES	273
#define	DIVIDE	274
#define	EQ	275
#define	NEQ	276
#define	LT	277
#define	LE	278
#define	GT	279
#define	GE	280
#define	AND	281
#define	OR	282
#define	ASSIGN	283
#define	ARRAY	284
#define	IF	285
#define	THEN	286
#define	ELSE	287
#define	WHILE	288
#define	FOR	289
#define	TO	290
#define	DO	291
#define	LET	292
#define	IN	293
#define	END	294
#define	OF	295
#define	BREAK	296
#define	NIL	297
#define	FUNCTION	298
#define	VAR	299
#define	TYPE	300
#define	UMINUS	301

#line 1 "tiger.grm"

#include <stdio.h>
#include "util.h"
#include "errormsg.h"

int yylex(void); /* function prototype */

void yyerror(char *s)
{
 EM_error(EM_tokPos, "%s", s);
}

#line 15 "tiger.grm"
typedef union {
	int pos;
	int ival;
	string sval;
	} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		148
#define	YYFLAG		-32768
#define	YYNTBASE	47

#define YYTRANSLATE(x) ((unsigned)(x) <= 301 ? yytranslate[x] : 63)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     5,     6,     7,    10,    12,    14,    16,    21,
    23,    27,    31,    32,    37,    43,    44,    49,    56,    64,
    74,    76,    80,    85,    87,    89,    93,    97,   101,   105,
   108,   112,   116,   120,   124,   128,   132,   136,   140,   144,
   146,   150,   152,   158,   160,   164,   168,   174,   177,   182,
   189,   194,   203,   211,   215,   222,   227,   231,   232,   238,
   239,   243,   244,   247
};

static const short yyrhs[] = {    58,
     0,    50,    49,     0,     0,     0,    50,    49,     0,    51,
     0,    55,     0,    56,     0,    45,     3,    20,    52,     0,
     3,     0,    13,    53,    14,     0,    29,    40,     3,     0,
     0,     3,     7,     3,    54,     0,     6,     3,     7,     3,
    54,     0,     0,    44,     3,    28,    58,     0,    44,     3,
     7,     3,    28,    58,     0,    43,     3,     9,    53,    10,
    20,    58,     0,    43,     3,     9,    53,    10,     7,     3,
    20,    58,     0,     3,     0,    57,    15,     3,     0,    57,
    11,    58,    12,     0,     5,     0,    42,     0,    58,    16,
    58,     0,    58,    17,    58,     0,    58,    18,    58,     0,
    58,    19,    58,     0,    17,    58,     0,    58,    20,    58,
     0,    58,    21,    58,     0,    58,    22,    58,     0,    58,
    23,    58,     0,    58,    24,    58,     0,    58,    25,    58,
     0,    58,    26,    58,     0,    58,    27,    58,     0,     3,
    28,    58,     0,    41,     0,     9,    62,    10,     0,     4,
     0,    37,    48,    38,    62,    39,     0,    57,     0,    57,
    28,    58,     0,     3,     9,    10,     0,     3,     9,    58,
    59,    10,     0,     9,    10,     0,    30,    58,    31,    58,
     0,    30,    58,    31,    58,    32,    58,     0,    33,    58,
    36,    58,     0,    34,     3,    28,    58,    35,    58,    36,
    58,     0,     3,    13,     3,    20,    58,    60,    14,     0,
     3,    13,    14,     0,     3,    11,    58,    12,    40,    58,
     0,     3,    11,    58,    12,     0,     6,    58,    59,     0,
     0,     6,     3,    20,    58,    60,     0,     0,     8,    58,
    61,     0,     0,    58,    61,     0,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    46,    48,    49,    51,    52,    54,    55,    56,    58,    60,
    61,    62,    64,    65,    67,    68,    70,    71,    73,    74,
    76,    77,    78,    80,    81,    82,    83,    84,    85,    86,
    87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
    97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
   107,   108,   109,   110,   111,   112,   114,   115,   117,   118,
   120,   121,   123,   124
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","ID","STRING",
"INT","COMMA","COLON","SEMICOLON","LPAREN","RPAREN","LBRACK","RBRACK","LBRACE",
"RBRACE","DOT","PLUS","MINUS","TIMES","DIVIDE","EQ","NEQ","LT","LE","GT","GE",
"AND","OR","ASSIGN","ARRAY","IF","THEN","ELSE","WHILE","FOR","TO","DO","LET",
"IN","END","OF","BREAK","NIL","FUNCTION","VAR","TYPE","UMINUS","program","decs",
"decs_ext","dec","tydec","ty","tyfields","tyfields_ext","vardec","fundec","lvalue",
"exp","exp_com","exp_comeq","exp_ext","expseq", NULL
};
#endif

static const short yyr1[] = {     0,
    47,    48,    48,    49,    49,    50,    50,    50,    51,    52,
    52,    52,    53,    53,    54,    54,    55,    55,    56,    56,
    57,    57,    57,    58,    58,    58,    58,    58,    58,    58,
    58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
    58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
    58,    58,    58,    58,    58,    58,    59,    59,    60,    60,
    61,    61,    62,    62
};

static const short yyr2[] = {     0,
     1,     2,     0,     0,     2,     1,     1,     1,     4,     1,
     3,     3,     0,     4,     5,     0,     4,     6,     7,     9,
     1,     3,     4,     1,     1,     3,     3,     3,     3,     2,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
     3,     1,     5,     1,     3,     3,     5,     2,     4,     6,
     4,     8,     7,     3,     6,     4,     3,     0,     5,     0,
     3,     0,     2,     0
};

static const short yydefact[] = {     0,
    21,    42,    24,     0,     0,     0,     0,     0,     3,    40,
    25,    44,     1,     0,     0,     0,     0,    48,    62,     0,
    30,     0,     0,     0,     0,     0,     0,     0,     4,     6,
     7,     8,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    46,    58,     0,
     0,    54,    39,     0,    63,    41,     0,     0,     0,     0,
     0,     0,    64,     2,     4,     0,    22,    45,    26,    27,
    28,    29,    31,    32,    33,    34,    35,    36,    37,    38,
     0,     0,    56,     0,    62,    49,    51,     0,    13,     0,
     0,     0,     0,     5,    23,    58,    47,     0,    60,    61,
     0,     0,     0,     0,     0,    17,    10,    13,     0,     9,
    43,    57,    55,     0,     0,    50,     0,     0,     0,     0,
     0,     0,     0,    53,     0,    16,     0,     0,    18,    11,
    12,     0,    52,     0,    14,     0,    19,    60,     0,     0,
    59,     0,    20,    16,    15,     0,     0,     0
};

static const short yydefgoto[] = {   146,
    28,    64,    65,    30,   110,   104,   135,    31,    32,    12,
    19,    82,   115,    55,    20
};

static const short yypact[] = {   118,
    57,-32768,-32768,    46,   118,   118,   118,     7,   -19,-32768,
-32768,    -7,   316,   100,   118,     6,   118,-32768,   223,     8,
-32768,   272,   181,    -9,    19,    29,    31,    10,   -19,-32768,
-32768,-32768,   118,    49,   118,   118,   118,   118,   118,   118,
   118,   118,   118,   118,   118,   118,   118,-32768,   147,   288,
    33,-32768,-32768,   118,-32768,-32768,   118,   118,   118,    51,
    -5,    41,   118,-32768,   -19,   304,-32768,-32768,    -6,    -6,
-32768,-32768,    12,    12,    12,    12,    12,    12,   339,   328,
   118,    52,    24,   118,   223,   255,-32768,   235,    62,    64,
   118,    -2,    30,-32768,-32768,   147,-32768,   118,   169,-32768,
   118,   118,    65,    61,    45,   316,-32768,    62,    34,-32768,
-32768,-32768,   316,    72,    63,-32768,   202,    75,    -4,   118,
    68,    83,    69,-32768,   118,    84,    89,   118,   316,-32768,
-32768,   118,-32768,    90,-32768,    74,   316,   169,    88,   118,
-32768,    93,   316,    84,-32768,    97,    99,-32768
};

static const short yypgoto[] = {-32768,
-32768,    35,    98,-32768,-32768,     3,   -38,-32768,-32768,-32768,
     0,    16,   -30,    28,    53
};


#define	YYLAST		364


static const short yytable[] = {    13,
   107,    90,   127,    33,    21,    22,    23,    34,    51,    24,
   108,    38,    39,    49,    50,   128,    53,    56,    59,    52,
    35,    60,    91,    25,    26,    27,   109,    36,    37,    38,
    39,    61,    66,    62,    68,    69,    70,    71,    72,    73,
    74,    75,    76,    77,    78,    79,    80,    63,     1,     2,
     3,    67,    84,    85,     4,    18,    86,    87,    88,    89,
    92,    97,     5,    98,   103,    14,   105,    15,   111,    16,
   119,   118,   120,   122,   123,     6,   124,   126,     7,     8,
    96,   130,     9,    99,    17,   131,    10,    11,   132,   134,
   106,   136,   139,   140,   142,   144,   147,   113,   148,    94,
   116,   117,     1,     2,     3,   145,    29,   141,     4,    48,
   121,   112,   100,     0,     0,    93,     5,     0,     0,   129,
     1,     2,     3,     0,   133,     0,     4,   137,     0,     6,
     0,   138,     7,     8,     5,     0,     9,     0,     0,   143,
    10,    11,     0,     0,     0,     0,     0,     6,     0,     0,
     7,     8,    81,     0,     9,     0,     0,     0,    10,    11,
     0,     0,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,   114,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,     0,     0,
     0,     0,     0,     0,     0,     0,    58,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,     0,
    54,     0,     0,     0,     0,     0,     0,   125,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,     0,     0,     0,     0,     0,     0,     0,   102,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,     0,     0,     0,     0,   101,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    83,
     0,     0,    57,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    95,     0,     0,     0,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    36,    37,    38,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    46,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45
};

static const short yycheck[] = {     0,
     3,     7,     7,    11,     5,     6,     7,    15,     3,     3,
    13,    18,    19,    14,    15,    20,    17,    10,    28,    14,
    28,     3,    28,    43,    44,    45,    29,    16,    17,    18,
    19,     3,    33,     3,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    38,     3,     4,
     5,     3,    20,    54,     9,    10,    57,    58,    59,     9,
    20,    10,    17,    40,     3,     9,     3,    11,    39,    13,
    10,     7,    28,    40,     3,    30,    14,     3,    33,    34,
    81,    14,    37,    84,    28,     3,    41,    42,    20,     6,
    91,     3,     3,    20,     7,     3,     0,    98,     0,    65,
   101,   102,     3,     4,     5,   144,     9,   138,     9,    10,
   108,    96,    85,    -1,    -1,    63,    17,    -1,    -1,   120,
     3,     4,     5,    -1,   125,    -1,     9,   128,    -1,    30,
    -1,   132,    33,    34,    17,    -1,    37,    -1,    -1,   140,
    41,    42,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
    33,    34,     6,    -1,    37,    -1,    -1,    -1,    41,    42,
    -1,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,     6,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    36,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
     8,    -1,    -1,    -1,    -1,    -1,    -1,    36,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    -1,    -1,    -1,    -1,    32,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    12,
    -1,    -1,    31,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    12,    -1,    -1,    -1,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/home/student/tools/bison-1.25/share/bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 196 "/home/student/tools/bison-1.25/share/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 46 "tiger.grm"
{;
    break;}
case 2:
#line 48 "tiger.grm"
{;
    break;}
case 3:
#line 49 "tiger.grm"
{;
    break;}
case 4:
#line 51 "tiger.grm"
{;
    break;}
case 5:
#line 52 "tiger.grm"
{;
    break;}
case 6:
#line 54 "tiger.grm"
{;
    break;}
case 7:
#line 55 "tiger.grm"
{;
    break;}
case 8:
#line 56 "tiger.grm"
{;
    break;}
case 9:
#line 58 "tiger.grm"
{;
    break;}
case 10:
#line 60 "tiger.grm"
{;
    break;}
case 11:
#line 61 "tiger.grm"
{;
    break;}
case 12:
#line 62 "tiger.grm"
{;
    break;}
case 13:
#line 64 "tiger.grm"
{;
    break;}
case 14:
#line 65 "tiger.grm"
{;
    break;}
case 15:
#line 67 "tiger.grm"
{;
    break;}
case 16:
#line 68 "tiger.grm"
{;
    break;}
case 17:
#line 70 "tiger.grm"
{;
    break;}
case 18:
#line 71 "tiger.grm"
{;
    break;}
case 19:
#line 73 "tiger.grm"
{;
    break;}
case 20:
#line 74 "tiger.grm"
{;
    break;}
case 21:
#line 76 "tiger.grm"
{;
    break;}
case 22:
#line 77 "tiger.grm"
{;
    break;}
case 23:
#line 78 "tiger.grm"
{;
    break;}
case 24:
#line 80 "tiger.grm"
{;
    break;}
case 25:
#line 81 "tiger.grm"
{;
    break;}
case 26:
#line 82 "tiger.grm"
{;
    break;}
case 27:
#line 83 "tiger.grm"
{;
    break;}
case 28:
#line 84 "tiger.grm"
{;
    break;}
case 29:
#line 85 "tiger.grm"
{;
    break;}
case 30:
#line 86 "tiger.grm"
{;
    break;}
case 31:
#line 87 "tiger.grm"
{;
    break;}
case 32:
#line 88 "tiger.grm"
{;
    break;}
case 33:
#line 89 "tiger.grm"
{;
    break;}
case 34:
#line 90 "tiger.grm"
{;
    break;}
case 35:
#line 91 "tiger.grm"
{;
    break;}
case 36:
#line 92 "tiger.grm"
{;
    break;}
case 37:
#line 93 "tiger.grm"
{;
    break;}
case 38:
#line 94 "tiger.grm"
{;
    break;}
case 39:
#line 95 "tiger.grm"
{;
    break;}
case 40:
#line 96 "tiger.grm"
{;
    break;}
case 41:
#line 97 "tiger.grm"
{;
    break;}
case 42:
#line 98 "tiger.grm"
{;
    break;}
case 43:
#line 99 "tiger.grm"
{;
    break;}
case 44:
#line 100 "tiger.grm"
{;
    break;}
case 45:
#line 101 "tiger.grm"
{;
    break;}
case 46:
#line 102 "tiger.grm"
{;
    break;}
case 47:
#line 103 "tiger.grm"
{;
    break;}
case 48:
#line 104 "tiger.grm"
{;
    break;}
case 49:
#line 105 "tiger.grm"
{;
    break;}
case 50:
#line 106 "tiger.grm"
{;
    break;}
case 51:
#line 107 "tiger.grm"
{;
    break;}
case 52:
#line 108 "tiger.grm"
{;
    break;}
case 53:
#line 109 "tiger.grm"
{;
    break;}
case 54:
#line 110 "tiger.grm"
{;
    break;}
case 55:
#line 111 "tiger.grm"
{;
    break;}
case 56:
#line 112 "tiger.grm"
{;
    break;}
case 57:
#line 114 "tiger.grm"
{;
    break;}
case 58:
#line 115 "tiger.grm"
{;
    break;}
case 59:
#line 117 "tiger.grm"
{;
    break;}
case 60:
#line 118 "tiger.grm"
{;
    break;}
case 61:
#line 120 "tiger.grm"
{;
    break;}
case 62:
#line 121 "tiger.grm"
{;
    break;}
case 63:
#line 123 "tiger.grm"
{;
    break;}
case 64:
#line 124 "tiger.grm"
{;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 498 "/home/student/tools/bison-1.25/share/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 128 "tiger.grm"
