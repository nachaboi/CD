
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
#define	EXP	301
#define	FUNDEC	302
#define	UMINUS	303
#define	IFX	304

#line 1 "tiger.grm"

#include <stdio.h>
#include <stdlib.h>
#include "util.h"
#include "symbol.h" 
#include "errormsg.h"
#include "absyn.h"

int yylex(void); /* function prototype */

A_exp absyn_root;

void yyerror(char *s)
{
 EM_error(EM_tokPos, "%s", s);
 exit(1);
}

#line 21 "tiger.grm"
typedef union {
	int pos;
	int ival;
	string sval;
	A_var var;
	A_exp exp;
	/* et cetera */
    A_dec dec;
    A_ty ty;
    A_field field;
    A_fieldList fieldList;
    A_expList expList;
    A_fundec fundec;
    A_fundecList fundecList;
    A_decList decList;
    A_namety namety;
    A_nametyList nametyList;
    A_efield efield;
    A_efieldList efieldList;
	} YYSTYPE;
#ifndef YYDEBUG
#define YYDEBUG 1
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		153
#define	YYFLAG		-32768
#define	YYNTBASE	50

#define YYTRANSLATE(x) ((unsigned)(x) <= 304 ? yytranslate[x] : 79)

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
    46,    47,    48,    49
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     6,     8,    10,    12,    14,    16,    18,
    20,    22,    24,    26,    28,    30,    32,    35,    37,    39,
    41,    43,    46,    51,    53,    57,    61,    62,    64,    68,
    72,    77,    84,    86,    89,    97,   107,   109,   111,   113,
   115,   120,   124,   129,   136,   140,   143,   145,   149,   153,
   158,   160,   164,   168,   172,   176,   180,   183,   187,   191,
   195,   199,   203,   207,   211,   215,   219,   224,   226,   230,
   234,   238,   243,   250,   255,   264
};

static const short yyrhs[] = {    51,
     0,    52,     0,    74,     0,    76,     0,    77,     0,    41,
     0,    64,     0,    63,     0,    66,     0,    68,     0,    70,
     0,    71,     0,    65,     0,    78,     0,    75,     0,    54,
     0,    54,    53,     0,    55,     0,    60,     0,    61,     0,
    56,     0,    56,    55,     0,    45,     3,    20,    57,     0,
     3,     0,    13,    58,    14,     0,    29,    40,     3,     0,
     0,    59,     0,    59,     6,    58,     0,     3,     7,     3,
     0,    44,     3,    28,    51,     0,    44,     3,     7,     3,
    28,    51,     0,    62,     0,    62,    61,     0,    43,     3,
     9,    58,    10,    20,    51,     0,    43,     3,     9,    58,
    10,     7,     3,    20,    51,     0,     5,     0,     4,     0,
    42,     0,     3,     0,     3,    11,    51,    12,     0,    64,
    15,     3,     0,    64,    11,    51,    12,     0,     3,    11,
    51,    12,    40,    51,     0,     9,    67,    10,     0,     9,
    10,     0,    51,     0,    51,     8,    67,     0,     3,     9,
    10,     0,     3,     9,    69,    10,     0,    51,     0,    51,
     6,    69,     0,    52,    16,    52,     0,    52,    17,    52,
     0,    52,    18,    52,     0,    52,    19,    52,     0,    17,
    52,     0,    52,    20,    52,     0,    52,    21,    52,     0,
    52,    24,    52,     0,    52,    22,    52,     0,    52,    25,
    52,     0,    52,    23,    52,     0,    52,    26,    52,     0,
    52,    27,    52,     0,     3,    13,    14,     0,     3,    13,
    72,    14,     0,    73,     0,    73,     6,    72,     0,     3,
    20,    51,     0,    64,    28,    51,     0,    30,    52,    31,
    51,     0,    30,    52,    31,    51,    32,    51,     0,    33,
    51,    36,    51,     0,    34,     3,    28,    51,    35,    51,
    36,    51,     0,    37,    53,    38,    67,    39,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    86,    94,    95,    96,    97,    98,   100,   101,   102,   103,
   104,   105,   106,   107,   108,   112,   113,   115,   116,   117,
   119,   120,   122,   124,   125,   126,   128,   129,   130,   132,
   134,   135,   137,   138,   140,   141,   145,   146,   147,   149,
   151,   152,   153,   155,   157,   158,   160,   161,   163,   164,
   166,   167,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   186,   193,   194,   196,   197,   199,
   203,   205,   206,   208,   210,   212
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","ID","STRING",
"INT","COMMA","COLON","SEMICOLON","LPAREN","RPAREN","LBRACK","RBRACK","LBRACE",
"RBRACE","DOT","PLUS","MINUS","TIMES","DIVIDE","EQ","NEQ","LT","LE","GT","GE",
"AND","OR","ASSIGN","ARRAY","IF","THEN","ELSE","WHILE","FOR","TO","DO","LET",
"IN","END","OF","BREAK","NIL","FUNCTION","VAR","TYPE","EXP","FUNDEC","UMINUS",
"IFX","program","exp","valexp","decs","dec","tydecs","tydec","ty","tyfields",
"tyfield","vardec","fundecs","fundec","constexp","lvalue","arrayexp","seqlist",
"exps","callexp","funcargs","opexp","recexp","recfields","recfield","assignexp",
"ifexp","whileexp","forexp","letexp", NULL
};
#endif

static const short yyr1[] = {     0,
    50,    51,    51,    51,    51,    51,    52,    52,    52,    52,
    52,    52,    52,    52,    52,    53,    53,    54,    54,    54,
    55,    55,    56,    57,    57,    57,    58,    58,    58,    59,
    60,    60,    61,    61,    62,    62,    63,    63,    63,    64,
    64,    64,    64,    65,    66,    66,    67,    67,    68,    68,
    69,    69,    70,    70,    70,    70,    70,    70,    70,    70,
    70,    70,    70,    70,    70,    71,    71,    72,    72,    73,
    74,    75,    75,    76,    77,    78
};

static const short yyr2[] = {     0,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
     1,     2,     4,     1,     3,     3,     0,     1,     3,     3,
     4,     6,     1,     2,     7,     9,     1,     1,     1,     1,
     4,     3,     4,     6,     3,     2,     1,     3,     3,     4,
     1,     3,     3,     3,     3,     3,     2,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     4,     1,     3,     3,
     3,     4,     6,     4,     8,     5
};

static const short yydefact[] = {     0,
    40,    38,    37,     0,     0,     0,     0,     0,     0,     6,
    39,     1,     2,     8,     7,    13,     9,    10,    11,    12,
     3,    15,     4,     5,    14,     0,     0,     0,    46,    47,
     0,    57,     7,     0,     0,     0,     0,     0,     0,     0,
    16,    18,    21,    19,    20,    33,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    49,    51,     0,     0,     0,    66,     0,    68,     0,
    45,     0,     0,     0,     0,     0,     0,     0,    17,    22,
    34,    53,    54,    55,    56,    58,    59,    61,    63,    60,
    62,    64,    65,     0,    42,    71,     0,    50,    41,     0,
    67,     0,    48,    72,    74,     0,    27,     0,     0,     0,
     0,    43,    52,     0,    70,    69,     0,     0,     0,     0,
    28,     0,    31,    24,    27,     0,    23,    76,    44,    73,
     0,     0,     0,    27,     0,     0,     0,     0,    30,     0,
     0,    29,    32,    25,    26,    75,     0,    35,     0,    36,
     0,     0,     0
};

static const short yydefgoto[] = {   151,
    30,    13,    40,    41,    42,    43,   127,   120,   121,    44,
    45,    46,    14,    15,    16,    17,    31,    18,    64,    19,
    20,    68,    69,    21,    22,    23,    24,    25
};

static const short yypact[] = {   142,
     7,-32768,-32768,    86,   177,   177,   142,    12,    -8,-32768,
-32768,-32768,   204,-32768,    -6,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   127,   142,     9,-32768,     5,
    14,-32768,    10,   179,    -7,     4,    25,    37,    38,    17,
    -8,-32768,    -3,-32768,-32768,    13,   177,   177,   177,   177,
   177,   177,   177,   177,   177,   177,   177,   177,   142,    54,
   142,-32768,    52,    50,    75,    68,-32768,    78,    87,   142,
-32768,   142,   142,   142,    85,     3,    79,   142,-32768,-32768,
-32768,    20,    20,-32768,-32768,    46,    46,    46,    46,    46,
    46,   227,   216,    89,-32768,-32768,   142,-32768,    58,   142,
-32768,    99,-32768,    72,-32768,    70,   103,   104,   142,     1,
    69,-32768,-32768,   142,-32768,-32768,   142,   142,   105,   100,
   107,    83,-32768,-32768,   103,    81,-32768,-32768,-32768,-32768,
    88,   112,    -1,   103,   142,   108,   122,   142,-32768,   123,
   142,-32768,-32768,-32768,-32768,-32768,   109,-32768,   142,-32768,
   133,   134,-32768
};

static const short yypgoto[] = {-32768,
     0,    -4,    98,-32768,    97,-32768,-32768,  -117,-32768,-32768,
    96,-32768,-32768,    28,-32768,-32768,   -67,-32768,    51,-32768,
-32768,    41,-32768,-32768,-32768,-32768,-32768,-32768
};


#define	YYLAST		252


static const short yytable[] = {    12,
    32,    34,   103,   124,    59,   140,    35,   136,    60,   108,
   111,    66,    70,   125,    36,    26,   142,    27,   141,    28,
    59,    61,    67,    71,    60,    63,    65,    75,    73,   126,
   109,    74,    33,    33,    37,    38,    39,    49,    50,    76,
    77,    39,    82,    83,    84,    85,    86,    87,    88,    89,
    90,    91,    92,    93,    78,    37,    95,    97,    94,    98,
    96,    47,    48,    49,    50,-32768,-32768,-32768,-32768,-32768,
-32768,   104,   105,   106,    33,    33,    33,    33,    33,    33,
    33,    33,    33,    33,    33,    33,    99,   100,     1,     2,
     3,   101,   102,   107,     4,    29,    63,   114,   110,   115,
   112,    66,     5,   117,   118,   119,   122,   128,   123,   133,
   135,   132,   134,   129,   139,     6,   130,   131,     7,     8,
   137,   144,     9,   138,   145,   147,    10,    11,   149,     1,
     2,     3,   152,   153,   143,     4,    62,   146,    79,    80,
   148,    81,   116,     5,     1,     2,     3,   113,   150,     0,
     4,     0,     0,     0,     0,     0,     6,     0,     5,     7,
     8,     0,     0,     9,     0,     0,     0,    10,    11,     0,
     0,     6,     0,     0,     7,     8,     0,     0,     9,     1,
     2,     3,    10,    11,     0,     4,     0,     0,     0,     0,
     0,     0,     0,     5,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,     6,     0,     0,    72,
     0,     0,     0,     9,     0,     0,     0,     0,    11,    47,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56
};

static const short yycheck[] = {     0,
     5,     6,    70,     3,    11,     7,     7,   125,    15,     7,
    78,     3,     8,    13,     3,     9,   134,    11,    20,    13,
    11,    28,    14,    10,    15,    26,    27,     3,    36,    29,
    28,    28,     5,     6,    43,    44,    45,    18,    19,     3,
     3,    45,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    38,    43,     3,     6,    59,    10,
    61,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    72,    73,    74,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    12,    20,     3,     4,
     5,    14,     6,     9,     9,    10,    97,    40,    20,   100,
    12,     3,    17,    32,    35,     3,     3,    39,   109,    10,
    28,     7,     6,   114,     3,    30,   117,   118,    33,    34,
    40,    14,    37,    36,     3,     3,    41,    42,    20,     3,
     4,     5,     0,     0,   135,     9,    10,   138,    41,    43,
   141,    46,   102,    17,     3,     4,     5,    97,   149,    -1,
     9,    -1,    -1,    -1,    -1,    -1,    30,    -1,    17,    33,
    34,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,    -1,
    -1,    30,    -1,    -1,    33,    34,    -1,    -1,    37,     3,
     4,     5,    41,    42,    -1,     9,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    17,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    30,    -1,    -1,    31,
    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    42,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/home/youngsok/csi4104/tools/bison-1.25/share/bison.simple"

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

#line 196 "/home/youngsok/csi4104/tools/bison-1.25/share/bison.simple"

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
#line 86 "tiger.grm"
{absyn_root=yyvsp[0].exp;;
    break;}
case 2:
#line 94 "tiger.grm"
{yyval.exp = yyvsp[0].exp;;
    break;}
case 3:
#line 95 "tiger.grm"
{yyval.exp = yyvsp[0].exp;;
    break;}
case 4:
#line 96 "tiger.grm"
{yyval.exp = yyvsp[0].exp;;
    break;}
case 5:
#line 97 "tiger.grm"
{yyval.exp = yyvsp[0].exp;;
    break;}
case 6:
#line 98 "tiger.grm"
{yyval.exp = A_BreakExp(EM_tokPos);;
    break;}
case 7:
#line 100 "tiger.grm"
{yyval.exp = A_VarExp(EM_tokPos, yyvsp[0].var);;
    break;}
case 8:
#line 101 "tiger.grm"
{yyval.exp = yyvsp[0].exp;;
    break;}
case 9:
#line 102 "tiger.grm"
{yyval.exp = yyvsp[0].exp;;
    break;}
case 10:
#line 103 "tiger.grm"
{yyval.exp = yyvsp[0].exp;;
    break;}
case 11:
#line 104 "tiger.grm"
{yyval.exp = yyvsp[0].exp;;
    break;}
case 12:
#line 105 "tiger.grm"
{yyval.exp = yyvsp[0].exp;;
    break;}
case 13:
#line 106 "tiger.grm"
{yyval.exp = yyvsp[0].exp;;
    break;}
case 14:
#line 107 "tiger.grm"
{yyval.exp = yyvsp[0].exp;;
    break;}
case 15:
#line 108 "tiger.grm"
{yyval.exp = yyvsp[0].exp;;
    break;}
case 16:
#line 112 "tiger.grm"
{yyval.decList = A_DecList(yyvsp[0].dec, NULL);;
    break;}
case 17:
#line 113 "tiger.grm"
{yyval.decList = A_DecList(yyvsp[-1].dec, yyvsp[0].decList);;
    break;}
case 18:
#line 115 "tiger.grm"
{yyval.dec = A_TypeDec(EM_tokPos, yyvsp[0].nametyList);;
    break;}
case 19:
#line 116 "tiger.grm"
{yyval.dec = yyvsp[0].dec;;
    break;}
case 20:
#line 117 "tiger.grm"
{yyval.dec = A_FunctionDec(EM_tokPos, yyvsp[0].fundecList);;
    break;}
case 21:
#line 119 "tiger.grm"
{yyval.nametyList = A_NametyList(yyvsp[0].namety, NULL);;
    break;}
case 22:
#line 120 "tiger.grm"
{yyval.nametyList = A_NametyList(yyvsp[-1].namety, yyvsp[0].nametyList);;
    break;}
case 23:
#line 122 "tiger.grm"
{yyval.namety = A_Namety(S_Symbol(yyvsp[-2].sval), yyvsp[0].ty);;
    break;}
case 24:
#line 124 "tiger.grm"
{yyval.ty = A_NameTy(EM_tokPos, S_Symbol(yyvsp[0].sval));;
    break;}
case 25:
#line 125 "tiger.grm"
{yyval.ty = A_RecordTy(EM_tokPos, yyvsp[-1].fieldList);;
    break;}
case 26:
#line 126 "tiger.grm"
{yyval.ty = A_ArrayTy(EM_tokPos, S_Symbol(yyvsp[0].sval));;
    break;}
case 27:
#line 128 "tiger.grm"
{yyval.fieldList = NULL;;
    break;}
case 28:
#line 129 "tiger.grm"
{yyval.fieldList = A_FieldList(yyvsp[0].field, NULL); ;
    break;}
case 29:
#line 130 "tiger.grm"
{yyval.fieldList = A_FieldList(yyvsp[-2].field, yyvsp[0].fieldList); ;
    break;}
case 30:
#line 132 "tiger.grm"
{yyval.field = A_Field(EM_tokPos, S_Symbol(yyvsp[-2].sval), S_Symbol(yyvsp[0].sval));;
    break;}
case 31:
#line 134 "tiger.grm"
{yyval.dec = A_VarDec(EM_tokPos, S_Symbol(yyvsp[-2].sval), NULL, yyvsp[0].exp);;
    break;}
case 32:
#line 135 "tiger.grm"
{yyval.dec = A_VarDec(EM_tokPos, S_Symbol(yyvsp[-4].sval), S_Symbol(yyvsp[-2].sval), yyvsp[0].exp);;
    break;}
case 33:
#line 137 "tiger.grm"
{yyval.fundecList = A_FundecList(yyvsp[0].fundec, NULL);;
    break;}
case 34:
#line 138 "tiger.grm"
{yyval.fundecList = A_FundecList(yyvsp[-1].fundec, yyvsp[0].fundecList);;
    break;}
case 35:
#line 140 "tiger.grm"
{yyval.fundec = A_Fundec(EM_tokPos, S_Symbol(yyvsp[-5].sval), yyvsp[-3].fieldList, NULL, yyvsp[0].exp);;
    break;}
case 36:
#line 141 "tiger.grm"
{yyval.fundec = A_Fundec(EM_tokPos, S_Symbol(yyvsp[-7].sval), yyvsp[-5].fieldList, S_Symbol(yyvsp[-2].sval), yyvsp[0].exp);;
    break;}
case 37:
#line 145 "tiger.grm"
{yyval.exp = A_IntExp(EM_tokPos, yyvsp[0].ival);;
    break;}
case 38:
#line 146 "tiger.grm"
{yyval.exp = A_StringExp(EM_tokPos, yyvsp[0].sval);;
    break;}
case 39:
#line 147 "tiger.grm"
{yyval.exp = A_NilExp(EM_tokPos);;
    break;}
case 40:
#line 149 "tiger.grm"
{yyval.var = A_SimpleVar(EM_tokPos, S_Symbol(yyvsp[0].sval));;
    break;}
case 41:
#line 151 "tiger.grm"
{yyval.var = A_SubscriptVar(EM_tokPos, A_SimpleVar(EM_tokPos, S_Symbol(yyvsp[-3].sval)), yyvsp[-1].exp);;
    break;}
case 42:
#line 152 "tiger.grm"
{yyval.var = A_FieldVar(EM_tokPos, yyvsp[-2].var, S_Symbol(yyvsp[0].sval));;
    break;}
case 43:
#line 153 "tiger.grm"
{yyval.var = A_SubscriptVar(EM_tokPos, yyvsp[-3].var, yyvsp[-1].exp);;
    break;}
case 44:
#line 155 "tiger.grm"
{yyval.exp = A_ArrayExp(EM_tokPos, S_Symbol(yyvsp[-5].sval), yyvsp[-3].exp, yyvsp[0].exp);;
    break;}
case 45:
#line 157 "tiger.grm"
{yyval.exp = A_SeqExp(EM_tokPos, yyvsp[-1].expList);;
    break;}
case 46:
#line 158 "tiger.grm"
{yyval.exp = A_SeqExp(EM_tokPos, NULL);;
    break;}
case 47:
#line 160 "tiger.grm"
{yyval.expList = A_ExpList(yyvsp[0].exp, NULL);;
    break;}
case 48:
#line 161 "tiger.grm"
{yyval.expList = A_ExpList(yyvsp[-2].exp, yyvsp[0].expList);;
    break;}
case 49:
#line 163 "tiger.grm"
{yyval.exp = A_CallExp(EM_tokPos, S_Symbol(yyvsp[-2].sval), NULL);;
    break;}
case 50:
#line 164 "tiger.grm"
{yyval.exp = A_CallExp(EM_tokPos, S_Symbol(yyvsp[-3].sval), yyvsp[-1].expList);;
    break;}
case 51:
#line 166 "tiger.grm"
{yyval.expList = A_ExpList(yyvsp[0].exp, NULL);;
    break;}
case 52:
#line 167 "tiger.grm"
{yyval.expList = A_ExpList(yyvsp[-2].exp, yyvsp[0].expList);;
    break;}
case 53:
#line 169 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos, A_plusOp, yyvsp[-2].exp, yyvsp[0].exp);;
    break;}
case 54:
#line 170 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos, A_minusOp, yyvsp[-2].exp, yyvsp[0].exp);;
    break;}
case 55:
#line 171 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos, A_timesOp, yyvsp[-2].exp, yyvsp[0].exp);;
    break;}
case 56:
#line 172 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos, A_divideOp, yyvsp[-2].exp, yyvsp[0].exp);;
    break;}
case 57:
#line 173 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos, A_minusOp, A_IntExp(EM_tokPos, 0), yyvsp[0].exp);;
    break;}
case 58:
#line 174 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos, A_eqOp, yyvsp[-2].exp, yyvsp[0].exp);;
    break;}
case 59:
#line 175 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos, A_neqOp, yyvsp[-2].exp, yyvsp[0].exp);;
    break;}
case 60:
#line 176 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos, A_gtOp, yyvsp[-2].exp, yyvsp[0].exp);;
    break;}
case 61:
#line 177 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos, A_ltOp, yyvsp[-2].exp, yyvsp[0].exp);;
    break;}
case 62:
#line 178 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos, A_geOp, yyvsp[-2].exp, yyvsp[0].exp);;
    break;}
case 63:
#line 179 "tiger.grm"
{yyval.exp = A_OpExp(EM_tokPos, A_leOp, yyvsp[-2].exp, yyvsp[0].exp);;
    break;}
case 64:
#line 180 "tiger.grm"
{
                                                    yyval.exp = A_IfExp(EM_tokPos,
                                                        yyvsp[-2].exp,
                                                        yyvsp[0].exp,
                                                        A_IntExp(EM_tokPos, 0));
                                                ;
    break;}
case 65:
#line 186 "tiger.grm"
{
                                                    yyval.exp = A_IfExp(EM_tokPos,
                                                        yyvsp[-2].exp,
                                                        A_IntExp(EM_tokPos, 1),
                                                        yyvsp[0].exp);
                                                ;
    break;}
case 66:
#line 193 "tiger.grm"
{yyval.exp = A_RecordExp(EM_tokPos, S_Symbol(yyvsp[-2].sval), NULL);;
    break;}
case 67:
#line 194 "tiger.grm"
{yyval.exp = A_RecordExp(EM_tokPos, S_Symbol(yyvsp[-3].sval), yyvsp[-1].efieldList);;
    break;}
case 68:
#line 196 "tiger.grm"
{yyval.efieldList = A_EfieldList(yyvsp[0].efield, NULL);;
    break;}
case 69:
#line 197 "tiger.grm"
{yyval.efieldList = A_EfieldList(yyvsp[-2].efield, yyvsp[0].efieldList);;
    break;}
case 70:
#line 199 "tiger.grm"
{yyval.efield = A_Efield(S_Symbol(yyvsp[-2].sval), yyvsp[0].exp);;
    break;}
case 71:
#line 203 "tiger.grm"
{yyval.exp = A_AssignExp(EM_tokPos, yyvsp[-2].var, yyvsp[0].exp);;
    break;}
case 72:
#line 205 "tiger.grm"
{yyval.exp = A_IfExp(EM_tokPos, yyvsp[-2].exp, yyvsp[0].exp, NULL);;
    break;}
case 73:
#line 206 "tiger.grm"
{yyval.exp = A_IfExp(EM_tokPos, yyvsp[-4].exp, yyvsp[-2].exp, yyvsp[0].exp);;
    break;}
case 74:
#line 208 "tiger.grm"
{yyval.exp = A_WhileExp(EM_tokPos, yyvsp[-2].exp, yyvsp[0].exp);;
    break;}
case 75:
#line 210 "tiger.grm"
{yyval.exp = A_ForExp(EM_tokPos, S_Symbol(yyvsp[-6].sval), yyvsp[-4].exp, yyvsp[-2].exp, yyvsp[0].exp);;
    break;}
case 76:
#line 212 "tiger.grm"
{yyval.exp = A_LetExp(EM_tokPos, yyvsp[-3].decList, A_SeqExp(EM_tokPos, yyvsp[-1].expList));;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 498 "/home/youngsok/csi4104/tools/bison-1.25/share/bison.simple"

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
#line 214 "tiger.grm"


