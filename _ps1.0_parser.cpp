
/*  A Bison parser, made from ps1.0_grammar.y
    by GNU Bison v1.28 for Win32  */

#define YYBISON 1  /* Identify Bison output.  */

#define yyparse ps10_parse
#define yylex ps10_lex
#define yyerror ps10_error
#define yylval ps10_lval
#define yychar ps10_char
#define yydebug ps10_debug
#define yynerrs ps10_nerrs
#define	HEADER	257
#define	NEWLINE	258
#define	NUMBER	259
#define	REG	260
#define	DEF	261
#define	ADDROP	262
#define	BLENDOP	263

#line 2 "ps1.0_grammar.y"


/*

	This is a parser for the DX8 PS1.0 pixel shaders.  I intend
	to use it to set NV_texture_shader* and NV_register_combiners*
	state in OpenGL, but the parse tree could be used for any
	other purpose.

	Cass Everitt
	7-19-01

*/

void yyerror(char* s);
int yylex ( void );

#ifdef _WIN32
# include <windows.h>
#endif

#include <stdio.h>
#include <stdlib.h>

#include "ps1.0_program.h"
#include "nvparse_errors.h"
#include "nvparse_externs.h"

#include <list>
#include <vector>

using namespace std;
using namespace ps10;

//#define DBG_MESG(msg, line)  	errors.set(msg, line)
#define DBG_MESG(msg, line)



#line 41 "ps1.0_grammar.y"
typedef union 
{
	int ival;
	float fval;
	
	string * sval;
	constdef * cdef;
	vector<constdef> * consts;
	vector<string> * line;
	list<vector<string> > * lines;
} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		63
#define	YYFLAG		-32768
#define	YYNTBASE	12

#define YYTRANSLATE(x) ((unsigned)(x) <= 263 ? yytranslate[x] : 21)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    11,    10,     2,     2,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     6,    13,    18,    24,    29,    35,    39,    44,    46,
    49,    61,    63,    66,    70,    76,    84,    86,    89,    96,
   105,   116,   117,   119,   121
};

static const short yyrhs[] = {     3,
    20,    13,    15,    17,     0,    20,     3,    20,    13,    15,
    17,     0,     3,    20,    15,    17,     0,    20,     3,    20,
    15,    17,     0,     3,    20,    13,    17,     0,    20,     3,
    20,    13,    17,     0,     3,    20,    17,     0,    20,     3,
    20,    17,     0,    14,     0,    13,    14,     0,     7,     6,
    10,     5,    10,     5,    10,     5,    10,     5,    20,     0,
    16,     0,    15,    16,     0,     8,     6,    20,     0,     8,
     6,    10,     6,    20,     0,     8,     6,    10,     6,    10,
     6,    20,     0,    18,     0,    17,    18,     0,    19,     9,
     6,    10,     6,    20,     0,    19,     9,     6,    10,     6,
    10,     6,    20,     0,    19,     9,     6,    10,     6,    10,
     6,    10,     6,    20,     0,     0,    11,     0,     4,     0,
    20,     4,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    69,    76,    83,    90,    97,   104,   111,   118,   128,   136,
   148,   162,   170,   181,   191,   203,   220,   228,   239,   254,
   270,   290,   293,   298,   302
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","HEADER",
"NEWLINE","NUMBER","REG","DEF","ADDROP","BLENDOP","','","'+'","WholeEnchilada",
"Defs","Def","AddrOps","AddrOp","BlendOps","BlendOp","MaybePlus","Newlines", NULL
};
#endif

static const short yyr1[] = {     0,
    12,    12,    12,    12,    12,    12,    12,    12,    13,    13,
    14,    15,    15,    16,    16,    16,    17,    17,    18,    18,
    18,    19,    19,    20,    20
};

static const short yyr2[] = {     0,
     5,     6,     4,     5,     4,     5,     3,     4,     1,     2,
    11,     1,     2,     3,     5,     7,     1,     2,     6,     8,
    10,     0,     1,     1,     2
};

static const short yydefact[] = {     0,
     0,    24,     0,    22,     0,    25,     0,     0,    23,    22,
     9,    22,    12,     7,    17,     0,    22,     0,     0,    10,
    22,     5,    13,     3,    18,     0,    22,    22,     8,     0,
     0,    14,     1,     0,    22,     6,     4,     0,     0,     0,
     2,     0,     0,    15,     0,     0,     0,     0,    19,     0,
    16,     0,     0,     0,    20,     0,     0,     0,    21,    11,
     0,     0,     0
};

static const short yydefgoto[] = {    61,
    10,    11,    12,    13,    14,    15,    16,     3
};

static const short yypact[] = {    36,
     3,-32768,    56,    41,     3,-32768,    -3,    44,-32768,    47,
-32768,    -6,-32768,    21,-32768,    18,    41,    32,     2,-32768,
    -6,    21,-32768,    21,-32768,    55,    47,    -6,    21,    57,
    58,    59,    21,    60,    -6,    21,    21,    61,    31,    62,
    21,    64,    66,    59,    33,    63,     3,    68,    59,    70,
    59,    43,    67,    72,    59,    71,     3,     3,    59,    59,
    65,    79,-32768
};

static const short yypgoto[] = {-32768,
    49,     7,     4,     1,    -2,   -13,-32768,    -1
};


#define	YYLAST		79


static const short yytable[] = {     4,
    25,     8,    18,    17,     9,     2,     2,    22,    25,    24,
    25,    31,    23,    21,    29,    25,    20,    32,    33,    25,
    28,    23,    25,    25,    36,    37,    26,    25,    23,   -22,
    35,     9,    41,    20,     2,    23,     2,    44,     1,     2,
    43,    30,    48,    49,     6,    51,     2,     7,     8,    19,
    55,     9,    54,     7,     8,    59,    60,     9,     5,     6,
    34,    38,     6,    39,    62,    27,     0,    45,    46,    40,
    42,    47,    50,    52,    53,    58,    56,    57,    63
};

static const short yycheck[] = {     1,
    14,     8,     6,     5,    11,     4,     4,    10,    22,    12,
    24,    10,    12,    10,    17,    29,    10,    19,    21,    33,
    17,    21,    36,    37,    27,    28,     9,    41,    28,     9,
    27,    11,    35,    27,     4,    35,     4,    39,     3,     4,
    10,    10,    10,    45,     4,    47,     4,     7,     8,     6,
    52,    11,    10,     7,     8,    57,    58,    11,     3,     4,
     6,     5,     4,     6,     0,    17,    -1,     6,     5,    10,
    10,     6,    10,     6,     5,     5,    10,     6,     0
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"
/* This file comes from bison-@bison_version@.  */

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
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

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

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
     unsigned int count;
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
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 217 "bison.simple"

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

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

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
  int yyfree_stacks = 0;

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
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
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
#line 72 "ps1.0_grammar.y"
{
		DBG_MESG("dbg: WholeEnchilada", line_number);		
		ps10::invoke(yyvsp[-2].consts, yyvsp[-1].lines, yyvsp[0].lines);
	;
    break;}
case 2:
#line 79 "ps1.0_grammar.y"
{
		DBG_MESG("dbg: WholeEnchilada", line_number);		
		ps10::invoke(yyvsp[-2].consts, yyvsp[-1].lines, yyvsp[0].lines);
	;
    break;}
case 3:
#line 86 "ps1.0_grammar.y"
{
		DBG_MESG("dbg: WholeEnchilada", line_number);		
		ps10::invoke( 0, yyvsp[-1].lines, yyvsp[0].lines);
	;
    break;}
case 4:
#line 93 "ps1.0_grammar.y"
{
		DBG_MESG("dbg: WholeEnchilada", line_number);		
		ps10::invoke( 0, yyvsp[-1].lines, yyvsp[0].lines);
	;
    break;}
case 5:
#line 100 "ps1.0_grammar.y"
{
		DBG_MESG("dbg: WholeEnchilada", line_number);		
		ps10::invoke(yyvsp[-1].consts, 0, yyvsp[0].lines);
	;
    break;}
case 6:
#line 107 "ps1.0_grammar.y"
{
		DBG_MESG("dbg: WholeEnchilada", line_number);		
		ps10::invoke(yyvsp[-1].consts, 0, yyvsp[0].lines);
	;
    break;}
case 7:
#line 114 "ps1.0_grammar.y"
{
		DBG_MESG("dbg: WholeEnchilada", line_number);		
		ps10::invoke( 0, 0, yyvsp[0].lines);
	;
    break;}
case 8:
#line 121 "ps1.0_grammar.y"
{
		DBG_MESG("dbg: WholeEnchilada", line_number);		
		ps10::invoke( 0, 0, yyvsp[0].lines);
	;
    break;}
case 9:
#line 131 "ps1.0_grammar.y"
{
		yyval.consts = new vector<constdef>;
		yyval.consts->push_back(* yyvsp[0].cdef);
		delete yyvsp[0].cdef;
	;
    break;}
case 10:
#line 139 "ps1.0_grammar.y"
{
		yyval.consts = yyvsp[-1].consts;
		yyval.consts->push_back(* yyvsp[0].cdef);
		delete yyvsp[0].cdef;
	;
    break;}
case 11:
#line 151 "ps1.0_grammar.y"
{
		yyval.cdef = new constdef;
		yyval.cdef->reg = * yyvsp[-9].sval;
		yyval.cdef->r = yyvsp[-7].fval;
		yyval.cdef->g = yyvsp[-5].fval;
		yyval.cdef->b = yyvsp[-3].fval;
		yyval.cdef->a = yyvsp[-1].fval;
		delete yyvsp[-9].sval;
	;
    break;}
case 12:
#line 165 "ps1.0_grammar.y"
{
		yyval.lines = new list<vector<string> >;
		yyval.lines->push_back(* yyvsp[0].line);
		delete yyvsp[0].line;
	;
    break;}
case 13:
#line 173 "ps1.0_grammar.y"
{
		yyval.lines = yyvsp[-1].lines;
		yyval.lines->push_back(* yyvsp[0].line);
		delete yyvsp[0].line;
	;
    break;}
case 14:
#line 184 "ps1.0_grammar.y"
{
		yyval.line = new vector<string>;
		yyval.line->push_back(* yyvsp[-2].sval);
		yyval.line->push_back(* yyvsp[-1].sval);
		delete yyvsp[-2].sval;
		delete yyvsp[-1].sval;
	;
    break;}
case 15:
#line 194 "ps1.0_grammar.y"
{
		yyval.line = new vector<string>;
		yyval.line->push_back(* yyvsp[-4].sval);
		yyval.line->push_back(* yyvsp[-3].sval);
		yyval.line->push_back(* yyvsp[-1].sval);
		delete yyvsp[-4].sval;
		delete yyvsp[-3].sval;
		delete yyvsp[-1].sval;
	;
    break;}
case 16:
#line 206 "ps1.0_grammar.y"
{
		yyval.line = new vector<string>;
		yyval.line->push_back(* yyvsp[-6].sval);
		yyval.line->push_back(* yyvsp[-5].sval);
		yyval.line->push_back(* yyvsp[-3].sval);
		yyval.line->push_back(* yyvsp[-1].sval);
		delete yyvsp[-6].sval;
		delete yyvsp[-5].sval;
		delete yyvsp[-3].sval;
		delete yyvsp[-1].sval;
	;
    break;}
case 17:
#line 223 "ps1.0_grammar.y"
{
		yyval.lines = new list<vector<string> >;
		yyval.lines->push_back(* yyvsp[0].line);
		delete yyvsp[0].line;
	;
    break;}
case 18:
#line 231 "ps1.0_grammar.y"
{
		yyval.lines = yyvsp[-1].lines;
		yyval.lines->push_back(* yyvsp[0].line);
		delete yyvsp[0].line;
	;
    break;}
case 19:
#line 243 "ps1.0_grammar.y"
{
		yyval.line = new vector<string>;
        if ( yyvsp[-5].ival )
          yyval.line->push_back("+");
		yyval.line->push_back(* yyvsp[-4].sval);
		yyval.line->push_back(* yyvsp[-3].sval);
		yyval.line->push_back(* yyvsp[-1].sval);
		delete yyvsp[-4].sval;
		delete yyvsp[-3].sval;
		delete yyvsp[-1].sval;
	;
    break;}
case 20:
#line 257 "ps1.0_grammar.y"
{
		yyval.line = new vector<string>;
        if ( yyvsp[-7].ival )
          yyval.line->push_back("+");
		yyval.line->push_back(* yyvsp[-6].sval);
		yyval.line->push_back(* yyvsp[-5].sval);
		yyval.line->push_back(* yyvsp[-3].sval);
		yyval.line->push_back(* yyvsp[-1].sval);
		delete yyvsp[-6].sval;
		delete yyvsp[-5].sval;
		delete yyvsp[-3].sval;
		delete yyvsp[-1].sval;
	;
    break;}
case 21:
#line 273 "ps1.0_grammar.y"
{
		yyval.line = new vector<string>;
        if ( yyvsp[-9].ival )
          yyval.line->push_back("+");
		yyval.line->push_back(* yyvsp[-8].sval);
		yyval.line->push_back(* yyvsp[-7].sval);
		yyval.line->push_back(* yyvsp[-5].sval);
		yyval.line->push_back(* yyvsp[-3].sval);
		yyval.line->push_back(* yyvsp[-1].sval);
		delete yyvsp[-8].sval;
		delete yyvsp[-7].sval;
		delete yyvsp[-5].sval;
		delete yyvsp[-3].sval;
		delete yyvsp[-1].sval;
	;
    break;}
case 22:
#line 292 "ps1.0_grammar.y"
{ yyval.ival=0; ;
    break;}
case 23:
#line 295 "ps1.0_grammar.y"
{ yyval.ival=1; ;
    break;}
case 24:
#line 301 "ps1.0_grammar.y"
{;
    break;}
case 25:
#line 305 "ps1.0_grammar.y"
{;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "bison.simple"

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

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 308 "ps1.0_grammar.y"


void yyerror(char* s)
{
	errors.set("parser: syntax error", line_number);
}
