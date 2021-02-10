
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
#include "symbol.h" 
#include "errormsg.h"
#include "absyn.h"

int yylex(void); /* function prototype */

A_exp absyn_root;

void yyerror(char *s)
{
 EM_error(EM_tokPos, "%s", s);
}

#line 19 "tiger.grm"
typedef union {
	int pos;
	int ival;
	string sval;
	A_var var;
	A_exp exp;
	A_expList explist;
	A_decList declist;
	A_dec  dec;
	A_efieldList efieldlist;
	A_efield  efield;
	A_namety namety;
	A_nametyList nametylist;
	A_fieldList fieldlist;
	A_field field;
	A_fundecList fundeclist;
	A_fundec fundec;
	A_ty ty;
	} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		144
#define	YYFLAG		-32768
#define	YYNTBASE	47

#define YYTRANSLATE(x) ((unsigned)(x) <= 301 ? yytranslate[x] : 67)

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
     0,     2,     4,     5,     8,     9,    11,    13,    15,    20,
    22,    25,    27,    31,    35,    36,    38,    42,    48,    53,
    60,    62,    65,    73,    83,    85,    87,    89,    93,    98,
   102,   107,   109,   111,   115,   119,   123,   127,   130,   134,
   138,   142,   146,   150,   154,   158,   162,   164,   166,   172,
   174,   178,   183,   190,   195,   204,   211,   216,   220,   224,
   229,   232,   236,   240,   242,   246,   248,   252,   254
};

static const short yyrhs[] = {    48,
     0,    62,     0,     0,    49,    50,     0,     0,    52,     0,
    56,     0,    57,     0,    45,     3,    20,    53,     0,    51,
     0,    51,    52,     0,     3,     0,    13,    54,    14,     0,
    29,    40,     3,     0,     0,    55,     0,     3,     7,     3,
     0,     3,     7,     3,     6,    55,     0,    44,     3,    28,
    62,     0,    44,     3,     7,     3,    28,    62,     0,    58,
     0,    58,    57,     0,    43,     3,     9,    54,    10,    20,
    62,     0,    43,     3,     9,    54,    10,     7,     3,    20,
    62,     0,     3,     0,    60,     0,    61,     0,    60,    15,
     3,     0,    60,    11,    62,    12,     0,     3,    15,     3,
     0,     3,    11,    62,    12,     0,     5,     0,    42,     0,
    62,    16,    62,     0,    62,    17,    62,     0,    62,    18,
    62,     0,    62,    19,    62,     0,    17,    62,     0,    62,
    20,    62,     0,    62,    21,    62,     0,    62,    22,    62,
     0,    62,    23,    62,     0,    62,    24,    62,     0,    62,
    25,    62,     0,    62,    26,    62,     0,    62,    27,    62,
     0,    41,     0,     4,     0,    37,    49,    38,    66,    39,
     0,    59,     0,    59,    28,    62,     0,    30,    62,    31,
    62,     0,    30,    62,    31,    62,    32,    62,     0,    33,
    62,    36,    62,     0,    34,     3,    28,    62,    35,    62,
    36,    62,     0,     3,    11,    62,    12,    40,    62,     0,
     3,     9,    63,    10,     0,     3,     9,    10,     0,     3,
    13,    14,     0,     3,    13,    64,    14,     0,     9,    10,
     0,     9,    66,    10,     0,    62,     6,    63,     0,    62,
     0,    65,     6,    64,     0,    65,     0,     3,    20,    62,
     0,    62,     0,    66,     8,    62,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    78,    80,    81,    83,    84,    86,    87,    88,    90,    92,
    93,    95,    96,    97,    99,   100,   102,   103,   105,   106,
   108,   109,   111,   112,   114,   115,   117,   118,   119,   121,
   122,   124,   125,   126,   127,   128,   129,   130,   131,   132,
   133,   134,   135,   136,   137,   138,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   155,   157,   162,   163,   165,   166,   168,   170,   171
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","ID","STRING",
"INT","COMMA","COLON","SEMICOLON","LPAREN","RPAREN","LBRACK","RBRACK","LBRACE",
"RBRACE","DOT","PLUS","MINUS","TIMES","DIVIDE","EQ","NEQ","LT","LE","GT","GE",
"AND","OR","ASSIGN","ARRAY","IF","THEN","ELSE","WHILE","FOR","TO","DO","LET",
"IN","END","OF","BREAK","NIL","FUNCTION","VAR","TYPE","UMINUS","program","prg_check",
"decs","dec","tydec","tydec_ext","ty","tyfields","tyfields_ext","vardec","fundec_ext",
"fundec","lvalue","lvalue_ext","lvalue_extSING","exp","exp_com","exp_comeq",
"exp_comeq_ext","expseq", NULL
};
#endif

static const short yyr1[] = {     0,
    47,    48,    48,    49,    49,    50,    50,    50,    51,    52,
    52,    53,    53,    53,    54,    54,    55,    55,    56,    56,
    57,    57,    58,    58,    59,    59,    60,    60,    60,    61,
    61,    62,    62,    62,    62,    62,    62,    62,    62,    62,
    62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
    62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
    62,    62,    63,    63,    64,    64,    65,    66,    66
};

static const short yyr2[] = {     0,
     1,     1,     0,     2,     0,     1,     1,     1,     4,     1,
     2,     1,     3,     3,     0,     1,     3,     5,     4,     6,
     1,     2,     7,     9,     1,     1,     1,     3,     4,     3,
     4,     1,     1,     3,     3,     3,     3,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     1,     1,     5,     1,
     3,     4,     6,     4,     8,     6,     4,     3,     3,     4,
     2,     3,     3,     1,     3,     1,     3,     1,     3
};

static const short yydefact[] = {     3,
    25,    48,    32,     0,     0,     0,     0,     0,     5,    47,
    33,     1,    50,    26,    27,     2,     0,     0,     0,     0,
    61,    68,     0,    38,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    58,    64,     0,     0,     0,    59,     0,
    66,    30,     0,    62,     0,     0,     0,     0,     0,     0,
     0,     4,    10,     6,     7,     8,    21,    51,     0,    28,
    34,    35,    36,    37,    39,    40,    41,    42,    43,    44,
    45,    46,     0,    57,    31,     0,    60,     0,    69,    52,
    54,     0,     0,     0,     0,     0,    11,    22,    29,    63,
     0,    67,    65,     0,     0,    49,    15,     0,     0,     0,
    56,    53,     0,     0,     0,    16,     0,    19,    12,    15,
     0,     9,     0,     0,     0,     0,     0,     0,    55,    17,
     0,     0,    20,    13,    14,     0,     0,    23,    18,     0,
    24,     0,     0,     0
};

static const short yydefgoto[] = {   142,
    12,    28,    62,    63,    64,   122,   115,   116,    65,    66,
    67,    13,    14,    15,    22,    46,    50,    51,    23
};

static const short yypact[] = {   108,
    13,-32768,-32768,    55,   108,   108,   108,    22,-32768,-32768,
-32768,-32768,     3,    -3,-32768,   272,    65,   108,     1,    47,
-32768,   272,    41,-32768,   228,   149,    24,   -24,   108,   108,
    51,   108,   108,   108,   108,   108,   108,   108,   108,   108,
   108,   108,   108,-32768,   137,    52,   244,    43,-32768,    53,
    60,-32768,   108,-32768,   108,   108,   108,   108,    58,    68,
    70,-32768,    31,-32768,-32768,-32768,    34,-32768,   260,-32768,
    -9,    -9,-32768,-32768,    29,    29,    29,    29,    29,    29,
   295,   284,   108,-32768,    38,   108,-32768,    76,   272,   211,
-32768,   191,     5,    71,    -5,    61,-32768,-32768,-32768,-32768,
   108,   272,-32768,   108,   108,-32768,    81,    84,   108,    -2,
   272,-32768,   170,    83,    90,-32768,    63,   272,-32768,    81,
    54,-32768,   108,   100,    -4,   108,    79,   105,-32768,   104,
   111,   108,   272,-32768,-32768,    81,    95,   272,-32768,   108,
   272,   116,   118,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,    56,-32768,     2,   -16,-32768,    57,
-32768,-32768,-32768,-32768,     0,    44,    33,-32768,    72
};


#define	YYLAST		320


static const short yytable[] = {    16,
   119,   108,   131,    48,    24,    25,    26,    30,    34,    35,
   120,    31,    53,    58,    49,   132,    45,    47,    59,    60,
    61,    17,   109,    18,    27,    19,   121,    20,    68,    69,
    29,    71,    72,    73,    74,    75,    76,    77,    78,    79,
    80,    81,    82,   106,    32,    33,    34,    35,    53,    52,
    54,    57,    89,    70,    90,    91,    92,     1,     2,     3,
    94,    84,    86,     4,    21,    88,    87,     1,     2,     3,
    95,     5,    96,     4,    44,    61,    59,   101,    48,   107,
   110,     5,    45,   114,     6,   102,   117,     7,     8,   124,
   126,     9,   134,   128,     6,    10,    11,     7,     8,   125,
   111,     9,   130,   112,   113,    10,    11,   135,   118,   136,
     1,     2,     3,   137,   140,   143,     4,   144,    97,   139,
   103,   127,   129,    98,     5,   133,   100,     0,     0,    93,
     0,   138,     0,     0,     0,     0,     0,     6,     0,   141,
     7,     8,    83,     0,     9,     0,     0,     0,    10,    11,
     0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,     0,     0,     0,     0,
     0,     0,     0,     0,    56,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,     0,     0,     0,
     0,     0,     0,     0,     0,   123,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,     0,     0,
     0,     0,     0,     0,     0,   105,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,     0,     0,
     0,     0,   104,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    85,     0,     0,    55,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    99,     0,     0,     0,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    42,    43,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41
};

static const short yycheck[] = {     0,
     3,     7,     7,     3,     5,     6,     7,    11,    18,    19,
    13,    15,     8,    38,    14,    20,    17,    18,    43,    44,
    45,     9,    28,    11,     3,    13,    29,    15,    29,    30,
    28,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    39,    16,    17,    18,    19,     8,     3,
    10,    28,    53,     3,    55,    56,    57,     3,     4,     5,
     3,    10,    20,     9,    10,     6,    14,     3,     4,     5,
     3,    17,     3,     9,    10,    45,    43,    40,     3,     9,
    20,    17,    83,     3,    30,    86,     3,    33,    34,     7,
    28,    37,    14,    40,    30,    41,    42,    33,    34,    10,
   101,    37,     3,   104,   105,    41,    42,     3,   109,     6,
     3,     4,     5,     3,    20,     0,     9,     0,    63,   136,
    88,   120,   123,    67,    17,   126,    83,    -1,    -1,    58,
    -1,   132,    -1,    -1,    -1,    -1,    -1,    30,    -1,   140,
    33,    34,     6,    -1,    37,    -1,    -1,    -1,    41,    42,
    -1,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    36,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    36,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    35,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
    -1,    -1,    32,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    12,    -1,    -1,    31,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    12,    -1,    -1,    -1,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25
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
#line 78 "tiger.grm"
{absyn_root=yyvsp[0].exp;;
    break;}
case 2:
#line 80 "tiger.grm"
{yyval.exp=yyvsp[0].exp;;
    break;}
case 3:
#line 81 "tiger.grm"
{yyval.exp = NULL;;
    break;}
case 4:
#line 83 "tiger.grm"
{yyval.declist = A_DecList(yyvsp[0].dec,yyvsp[-1].declist);;
    break;}
case 5:
#line 84 "tiger.grm"
{yyval.declist = NULL;;
    break;}
case 6:
#line 86 "tiger.grm"
{yyval.dec = yyvsp[0].dec;;
    break;}
case 7:
#line 87 "tiger.grm"
{yyval.dec = yyvsp[0].dec;;
    break;}
case 8:
#line 88 "tiger.grm"
{yyval.dec = yyvsp[0].dec;;
    break;}
case 9:
#line 90 "tiger.grm"
{yyval.namety = A_Namety(S_Symbol(yyvsp[-2].sval),yyvsp[0].ty);;
    break;}
case 10:
#line 92 "tiger.grm"
{yyval.dec = A_TypeDec(EM_tokPos,A_NametyList(yyvsp[0].namety,NULL));;
    break;}
case 11:
#line 93 "tiger.grm"
{yyval.dec = A_TypeDec(EM_tokPos, A_NametyList(yyvsp[-1].namety,yyvsp[0].dec->u.type));;
    break;}
case 12:
#line 95 "tiger.grm"
{yyval.ty = A_NameTy(EM_tokPos,S_Symbol(yyvsp[0].sval));;
    break;}
case 13:
#line 96 "tiger.grm"
{yyval.ty = A_RecordTy(EM_tokPos,yyvsp[-1].fieldlist);;
    break;}
case 14:
#line 97 "tiger.grm"
{yyval.ty = A_ArrayTy(EM_tokPos,S_Symbol(yyvsp[0].sval));;
    break;}
case 15:
#line 99 "tiger.grm"
{yyval.fieldlist = NULL;;
    break;}
case 16:
#line 100 "tiger.grm"
{yyval.fieldlist = yyvsp[0].fieldlist;;
    break;}
case 17:
#line 102 "tiger.grm"
{yyval.fieldlist = A_FieldList(A_Field(EM_tokPos,S_Symbol(yyvsp[-2].sval),S_Symbol(yyvsp[0].sval)),NULL);;
    break;}
case 18:
#line 103 "tiger.grm"
{yyval.fieldlist = A_FieldList(A_Field(EM_tokPos,S_Symbol(yyvsp[-4].sval),S_Symbol(yyvsp[-2].sval)),yyvsp[0].fieldlist);;
    break;}
case 19:
#line 105 "tiger.grm"
{yyval.dec = A_VarDec(EM_tokPos,S_Symbol(yyvsp[-2].sval),S_Symbol(""),yyvsp[0].exp);;
    break;}
case 20:
#line 106 "tiger.grm"
{yyval.dec = A_VarDec(EM_tokPos,S_Symbol(yyvsp[-4].sval),S_Symbol(yyvsp[-2].sval),yyvsp[0].exp);;
    break;}
case 21:
#line 108 "tiger.grm"
{yyval.dec = A_FunctionDec(EM_tokPos,A_FundecList(yyvsp[0].fundec, NULL));;
    break;}
case 22:
#line 109 "tiger.grm"
{yyval.dec = A_FunctionDec(EM_tokPos, A_FundecList(yyvsp[-1].fundec,yyvsp[0].dec->u.function));;
    break;}
case 23:
#line 111 "tiger.grm"
{yyval.fundec = A_Fundec(EM_tokPos,S_Symbol(yyvsp[-5].sval),yyvsp[-3].fieldlist,NULL,yyvsp[0].exp);;
    break;}
case 24:
#line 112 "tiger.grm"
{yyval.fundec = A_Fundec(EM_tokPos,S_Symbol(yyvsp[-7].sval),yyvsp[-5].fieldlist,S_Symbol(yyvsp[-2].sval),yyvsp[0].exp);;
    break;}
case 25:
#line 114 "tiger.grm"
{yyval.var = A_SimpleVar(EM_tokPos,S_Symbol(yyvsp[0].sval));;
    break;}
case 26:
#line 115 "tiger.grm"
{yyval.var = yyvsp[0].var;;
    break;}
case 27:
#line 117 "tiger.grm"
{yyval.var = yyvsp[0].var;;
    break;}
case 28:
#line 118 "tiger.grm"
{yyval.var = A_FieldVar(EM_tokPos,yyvsp[-2].var,S_Symbol(yyvsp[0].sval));;
    break;}
case 29:
#line 119 "tiger.grm"
{yyval.var = A_SubscriptVar(EM_tokPos,yyvsp[-3].var,yyvsp[-1].exp);;
    break;}
case 30:
#line 121 "tiger.grm"
{yyval.var = A_FieldVar(EM_tokPos,A_SimpleVar(EM_tokPos,S_Symbol(yyvsp[-2].sval)),S_Symbol(yyvsp[0].sval));;
    break;}
case 31:
#line 122 "tiger.grm"
{yyval.var = A_SubscriptVar(EM_tokPos,A_SimpleVar(EM_tokPos,S_Symbol(yyvsp[-3].sval)),yyvsp[-1].exp);;
    break;}
case 32:
#line 124 "tiger.grm"
{yyval.exp = A_IntExp(EM_tokPos,yyvsp[0].ival);;
    break;}
case 33:
#line 125 "tiger.grm"
{yyval.exp = A_NilExp(EM_tokPos);;
    break;}
case 34:
#line 126 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos,A_plusOp,yyvsp[-2].exp,yyvsp[0].exp);;
    break;}
case 35:
#line 127 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos,A_minusOp,yyvsp[-2].exp,yyvsp[0].exp);;
    break;}
case 36:
#line 128 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos,A_timesOp,yyvsp[-2].exp,yyvsp[0].exp);;
    break;}
case 37:
#line 129 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos,A_divideOp,yyvsp[-2].exp,yyvsp[0].exp);;
    break;}
case 38:
#line 130 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos,A_minusOp,A_IntExp(EM_tokPos,0),yyvsp[0].exp);;
    break;}
case 39:
#line 131 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos,A_eqOp,yyvsp[-2].exp,yyvsp[0].exp);;
    break;}
case 40:
#line 132 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos,A_neqOp,yyvsp[-2].exp,yyvsp[0].exp);;
    break;}
case 41:
#line 133 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos,A_ltOp,yyvsp[-2].exp,yyvsp[0].exp);;
    break;}
case 42:
#line 134 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos,A_leOp,yyvsp[-2].exp,yyvsp[0].exp);;
    break;}
case 43:
#line 135 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos,A_gtOp,yyvsp[-2].exp,yyvsp[0].exp);;
    break;}
case 44:
#line 136 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos,A_geOp,yyvsp[-2].exp,yyvsp[0].exp);;
    break;}
case 45:
#line 137 "tiger.grm"
{yyval.exp = A_IfExp(EM_tokPos,yyvsp[-2].exp,yyvsp[0].exp,A_IntExp(EM_tokPos,0));;
    break;}
case 46:
#line 138 "tiger.grm"
{yyval.exp = A_IfExp(EM_tokPos,yyvsp[-2].exp,A_IntExp(EM_tokPos,1),yyvsp[0].exp);;
    break;}
case 47:
#line 140 "tiger.grm"
{yyval.exp = A_BreakExp(EM_tokPos);;
    break;}
case 48:
#line 141 "tiger.grm"
{yyval.exp = A_StringExp(EM_tokPos,yyvsp[0].sval);;
    break;}
case 49:
#line 142 "tiger.grm"
{yyval.exp = A_LetExp(EM_tokPos,yyvsp[-3].declist, A_SeqExp(EM_tokPos,yyvsp[-1].explist));;
    break;}
case 50:
#line 143 "tiger.grm"
{yyval.exp = A_VarExp(EM_tokPos,yyvsp[0].var);;
    break;}
case 51:
#line 144 "tiger.grm"
{yyval.exp = A_AssignExp(EM_tokPos,yyvsp[-2].var,yyvsp[0].exp);;
    break;}
case 52:
#line 145 "tiger.grm"
{yyval.exp = A_IfExp(EM_tokPos,yyvsp[-2].exp,yyvsp[0].exp,NULL);;
    break;}
case 53:
#line 146 "tiger.grm"
{yyval.exp = A_IfExp(EM_tokPos,yyvsp[-4].exp,yyvsp[-2].exp,yyvsp[0].exp);;
    break;}
case 54:
#line 147 "tiger.grm"
{yyval.exp = A_WhileExp(EM_tokPos,yyvsp[-2].exp,yyvsp[0].exp);;
    break;}
case 55:
#line 148 "tiger.grm"
{yyval.exp = A_ForExp(EM_tokPos,S_Symbol(yyvsp[-6].sval),yyvsp[-4].exp,yyvsp[-2].exp,yyvsp[0].exp);;
    break;}
case 56:
#line 149 "tiger.grm"
{yyval.exp = A_ArrayExp(EM_tokPos,S_Symbol(yyvsp[-5].sval),yyvsp[-3].exp,yyvsp[0].exp);;
    break;}
case 57:
#line 150 "tiger.grm"
{yyval.exp = A_CallExp(EM_tokPos,S_Symbol(yyvsp[-3].sval), yyvsp[-1].explist);;
    break;}
case 58:
#line 151 "tiger.grm"
{yyval.exp = A_CallExp(EM_tokPos,S_Symbol(yyvsp[-2].sval),NULL);;
    break;}
case 59:
#line 152 "tiger.grm"
{yyval.exp = A_RecordExp(EM_tokPos,S_Symbol(yyvsp[-2].sval),NULL);;
    break;}
case 60:
#line 153 "tiger.grm"
{yyval.exp = A_RecordExp(EM_tokPos,S_Symbol(yyvsp[-3].sval),yyvsp[-1].efieldlist);;
    break;}
case 61:
#line 155 "tiger.grm"
{yyval.exp = A_SeqExp(EM_tokPos,NULL);;
    break;}
case 62:
#line 157 "tiger.grm"
{yyval.exp = A_SeqExp(EM_tokPos,yyvsp[-1].explist);;
    break;}
case 63:
#line 162 "tiger.grm"
{yyval.explist = A_ExpList(yyvsp[-2].exp,yyvsp[0].explist);;
    break;}
case 64:
#line 163 "tiger.grm"
{yyval.explist = A_ExpList(yyvsp[0].exp,NULL);;
    break;}
case 65:
#line 165 "tiger.grm"
{yyval.efieldlist = A_EfieldList(yyvsp[-2].efield,yyvsp[0].efieldlist);;
    break;}
case 66:
#line 166 "tiger.grm"
{yyval.efieldlist = A_EfieldList(yyvsp[0].efield,NULL);;
    break;}
case 67:
#line 168 "tiger.grm"
{yyval.efield = A_Efield(S_Symbol(yyvsp[-2].sval),yyvsp[0].exp);;
    break;}
case 68:
#line 170 "tiger.grm"
{yyval.explist = A_ExpList(yyvsp[0].exp,NULL);;
    break;}
case 69:
#line 171 "tiger.grm"
{yyval.explist = A_ExpList(yyvsp[0].exp,yyvsp[-2].explist);;
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
#line 174 "tiger.grm"
