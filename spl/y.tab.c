/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "spl.y"

#include<stdio.h>
#include<stdlib.h>
#include "spl.h"
extern FILE *yyin;

/* Line 371 of yacc.c  */
#line 75 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ALIAS = 258,
     DEFINE = 259,
     DO = 260,
     ELSE = 261,
     ENDIF = 262,
     ENDWHILE = 263,
     IF = 264,
     IRETURN = 265,
     LOAD = 266,
     STORE = 267,
     THEN = 268,
     WHILE = 269,
     HALT = 270,
     REG = 271,
     NUM = 272,
     ASSIGNOP = 273,
     ARITHOP1 = 274,
     ARITHOP2 = 275,
     RELOP = 276,
     LOGOP = 277,
     NOTOP = 278,
     ID = 279,
     BREAK = 280,
     CONTINUE = 281,
     CHKPT = 282,
     READ = 283,
     PRINT = 284,
     STRING = 285,
     INLINE = 286,
     UMIN = 287
   };
#endif
/* Tokens.  */
#define ALIAS 258
#define DEFINE 259
#define DO 260
#define ELSE 261
#define ENDIF 262
#define ENDWHILE 263
#define IF 264
#define IRETURN 265
#define LOAD 266
#define STORE 267
#define THEN 268
#define WHILE 269
#define HALT 270
#define REG 271
#define NUM 272
#define ASSIGNOP 273
#define ARITHOP1 274
#define ARITHOP2 275
#define RELOP 276
#define LOGOP 277
#define NOTOP 278
#define ID 279
#define BREAK 280
#define CONTINUE 281
#define CHKPT 282
#define READ 283
#define PRINT 284
#define STRING 285
#define INLINE 286
#define UMIN 287



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 8 "spl.y"

	struct tree *n;


/* Line 387 of yacc.c  */
#line 187 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 215 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   229

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  40
/* YYNRULES -- Number of states.  */
#define YYNSTATES  99

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      34,    36,     2,     2,    35,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    37,     2,    38,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     8,     9,    12,    17,    23,    26,
      28,    33,    40,    49,    56,    61,    69,    77,    80,    83,
      86,    89,    93,    96,   100,   104,   108,   112,   116,   120,
     123,   126,   130,   134,   136,   138,   140,   142,   144,   146,
     148
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      40,     0,    -1,    41,    44,    -1,    42,    -1,    -1,    42,
      43,    -1,     4,    24,    17,    33,    -1,     4,    24,    19,
      17,    33,    -1,    44,    45,    -1,    45,    -1,    46,    18,
      46,    33,    -1,    47,    46,    13,    44,     7,    33,    -1,
      47,    46,    13,    44,    48,    44,     7,    33,    -1,    49,
      46,     5,    44,     8,    33,    -1,     3,    24,    16,    33,
      -1,    11,    34,    46,    35,    46,    36,    33,    -1,    12,
      34,    46,    35,    46,    36,    33,    -1,    10,    33,    -1,
      25,    33,    -1,    26,    33,    -1,    15,    33,    -1,    31,
      30,    33,    -1,    27,    33,    -1,    28,    50,    33,    -1,
      29,    46,    33,    -1,    46,    19,    46,    -1,    46,    20,
      46,    -1,    46,    21,    46,    -1,    46,    22,    46,    -1,
      19,    17,    -1,    23,    46,    -1,    37,    46,    38,    -1,
      34,    46,    36,    -1,    17,    -1,    50,    -1,    30,    -1,
       9,    -1,     6,    -1,    14,    -1,    24,    -1,    16,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    20,    20,    27,    31,    33,    37,    40,    48,    51,
      56,    68,    73,    79,    85,    89,    92,    95,    98,   105,
     112,   115,   121,   124,   132,   138,   141,   144,   147,   150,
     155,   158,   162,   165,   168,   171,   176,   181,   186,   193,
     196
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ALIAS", "DEFINE", "DO", "ELSE", "ENDIF",
  "ENDWHILE", "IF", "IRETURN", "LOAD", "STORE", "THEN", "WHILE", "HALT",
  "REG", "NUM", "ASSIGNOP", "ARITHOP1", "ARITHOP2", "RELOP", "LOGOP",
  "NOTOP", "ID", "BREAK", "CONTINUE", "CHKPT", "READ", "PRINT", "STRING",
  "INLINE", "UMIN", "';'", "'('", "','", "')'", "'['", "']'", "$accept",
  "body", "definelistpad", "definelist", "definestmt", "stmtlist", "stmt",
  "expr", "ifpad", "elsepad", "whilepad", "ids", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    59,    40,    44,    41,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    40,    41,    42,    42,    43,    43,    44,    44,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    47,    48,    49,    50,
      50
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     0,     2,     4,     5,     2,     1,
       4,     6,     8,     6,     4,     7,     7,     2,     2,     2,
       2,     3,     2,     3,     3,     3,     3,     3,     3,     2,
       2,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     3,     1,     0,    36,     0,     0,     0,
      38,     0,    40,    33,     0,     0,    39,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     2,     9,     0,     0,
       0,    34,     0,     5,     0,    17,     0,     0,    20,    29,
      30,    18,    19,    22,     0,     0,     0,     0,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    21,    32,    31,     0,    25,    26,    27,
      28,     0,     0,     0,     0,    14,     0,     0,    10,     0,
       0,     6,     0,     0,     0,    37,     0,     0,     0,     7,
       0,     0,    11,     0,    13,    15,    16,     0,    12
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     3,    33,    26,    27,    28,    29,    87,
      30,    31
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -64
static const yytype_int16 yypact[] =
{
     -64,    25,   150,    22,   -64,     8,   -64,    10,    13,    21,
     -64,    27,   -64,   -64,    29,    11,   -64,    28,    31,    42,
     -10,    11,   -64,    14,    11,    11,   150,   -64,   205,    11,
      11,   -64,    46,   -64,    64,   -64,    11,    11,   -64,   -64,
     -64,   -64,   -64,   -64,    61,   181,    65,    30,   -17,   -64,
      11,    11,    11,    11,    11,   200,    37,    12,    72,    -2,
     177,   -64,   -64,   -64,   -64,   -64,   196,    77,   -64,    -7,
      63,   150,   150,    79,    93,   -64,    11,    11,   -64,    62,
      92,   -64,    80,   169,   173,   -64,    81,   150,    94,   -64,
     101,   106,   -64,   121,   -64,   -64,   -64,   108,   -64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -64,   -64,   -64,   -64,   -64,   -63,   -26,   -14,   -64,   -64,
     -64,   105
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      49,    40,    51,    52,    53,    54,    12,    45,    79,    80,
      47,    48,    51,    52,    16,    55,    56,    51,    52,    53,
      54,    65,    59,    60,    93,     4,    32,    12,    13,    73,
      14,    74,    34,    76,    15,    16,    66,    67,    68,    69,
      70,    22,    72,    35,    46,    24,    39,    36,    25,    51,
      52,    53,    54,    49,    49,    37,    51,    52,    53,    54,
      38,    41,    83,    84,    42,     5,    64,    49,    85,    86,
      57,     6,     7,     8,     9,    43,    10,    11,    12,    13,
      58,    14,    51,    52,    53,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    61,     5,    24,    52,    63,    25,
      88,     6,     7,     8,     9,    75,    10,    11,    12,    13,
      82,    14,    81,    89,    92,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     5,    44,    24,    94,    97,    25,
       6,     7,     8,     9,    95,    10,    11,    12,    13,    96,
      14,    98,     0,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     5,     0,    24,     0,     0,    25,     6,
       7,     8,     9,     0,    10,    11,    12,    13,     0,    14,
       0,     0,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,    24,     0,     0,    25,    51,    52,
      53,    54,    51,    52,    53,    54,    51,    52,    53,    54,
      51,    52,    53,    54,     0,    90,     0,     0,     0,    91,
       0,     0,    77,    71,    62,    51,    52,    53,    54,    51,
      52,    53,    54,    50,    51,    52,    53,    54,     0,    78
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-64)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
      26,    15,    19,    20,    21,    22,    16,    21,    71,    72,
      24,    25,    19,    20,    24,    29,    30,    19,    20,    21,
      22,    38,    36,    37,    87,     0,     4,    16,    17,    17,
      19,    19,    24,    35,    23,    24,    50,    51,    52,    53,
      54,    30,     5,    33,    30,    34,    17,    34,    37,    19,
      20,    21,    22,    79,    80,    34,    19,    20,    21,    22,
      33,    33,    76,    77,    33,     3,    36,    93,     6,     7,
      24,     9,    10,    11,    12,    33,    14,    15,    16,    17,
      16,    19,    19,    20,    21,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    33,     3,    34,    20,    33,    37,
       8,     9,    10,    11,    12,    33,    14,    15,    16,    17,
      17,    19,    33,    33,    33,    23,    24,    25,    26,    27,
      28,    29,    30,    31,     3,    20,    34,    33,     7,    37,
       9,    10,    11,    12,    33,    14,    15,    16,    17,    33,
      19,    33,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,     3,    -1,    34,    -1,    -1,    37,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    -1,    -1,    37,    19,    20,
      21,    22,    19,    20,    21,    22,    19,    20,    21,    22,
      19,    20,    21,    22,    -1,    36,    -1,    -1,    -1,    36,
      -1,    -1,    35,    13,    33,    19,    20,    21,    22,    19,
      20,    21,    22,    18,    19,    20,    21,    22,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    41,    42,     0,     3,     9,    10,    11,    12,
      14,    15,    16,    17,    19,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    34,    37,    44,    45,    46,    47,
      49,    50,     4,    43,    24,    33,    34,    34,    33,    17,
      46,    33,    33,    33,    50,    46,    30,    46,    46,    45,
      18,    19,    20,    21,    22,    46,    46,    24,    16,    46,
      46,    33,    33,    33,    36,    38,    46,    46,    46,    46,
      46,    13,     5,    17,    19,    33,    35,    35,    33,    44,
      44,    33,    17,    46,    46,     6,     7,    48,     8,    33,
      36,    36,    33,    44,    33,    33,    33,     7,    33
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1787 of yacc.c  */
#line 20 "spl.y"
    {
								codegen((yyvsp[(2) - (2)].n));
								out_linecount++;
								fprintf(fp,"HALT");
							}
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 27 "spl.y"
    {
								add_predefined_constants();
							}
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 31 "spl.y"
    {
							}
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 33 "spl.y"
    {
							}
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 37 "spl.y"
    {
								insert_constant((yyvsp[(2) - (4)].n)->name,(yyvsp[(3) - (4)].n)->value);
							}
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 40 "spl.y"
    {
								if((yyvsp[(3) - (5)].n)->nodetype=='-')
									insert_constant((yyvsp[(2) - (5)].n)->name,-1*(yyvsp[(4) - (5)].n)->value);
								else
									insert_constant((yyvsp[(2) - (5)].n)->name,(yyvsp[(4) - (5)].n)->value);
							}
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 48 "spl.y"
    {
								(yyval.n)=create_nonterm_node("Body",(yyvsp[(1) - (2)].n),(yyvsp[(2) - (2)].n));
							}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 51 "spl.y"
    {
								(yyval.n)=(yyvsp[(1) - (1)].n);
							}
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 56 "spl.y"
    {
								if((yyvsp[(1) - (4)].n)->nodetype=='R' || (yyvsp[(1) - (4)].n)->nodetype=='m')
								{
									(yyvsp[(2) - (4)].n)->value=2;
									(yyval.n)=create_tree((yyvsp[(2) - (4)].n),(yyvsp[(1) - (4)].n),(yyvsp[(3) - (4)].n),NULL);
								}
								else
								{
									printf("\n%d:Invalid operands in assignment!!\n",linecount);
									exit(0);
								}
							}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 68 "spl.y"
    {								
								(yyval.n)=create_tree((yyvsp[(1) - (6)].n),(yyvsp[(2) - (6)].n),(yyvsp[(4) - (6)].n),NULL);
								pop_alias();
								depth--;
							}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 74 "spl.y"
    {	
								(yyval.n)=create_tree((yyvsp[(1) - (8)].n),(yyvsp[(2) - (8)].n),(yyvsp[(4) - (8)].n),(yyvsp[(6) - (8)].n));
								pop_alias();
								depth--;
							}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 79 "spl.y"
    {
								(yyval.n)=create_tree((yyvsp[(1) - (6)].n),(yyvsp[(2) - (6)].n),(yyvsp[(4) - (6)].n),NULL);
								pop_alias();
								depth--;
								flag_break--;
							}
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 85 "spl.y"
    {	
								push_alias((yyvsp[(2) - (4)].n)->name,(yyvsp[(3) - (4)].n)->value);
								(yyval.n)=NULL;
							}
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 89 "spl.y"
    {
								(yyval.n)=create_tree((yyvsp[(1) - (7)].n),(yyvsp[(3) - (7)].n),(yyvsp[(5) - (7)].n),NULL);
							}
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 92 "spl.y"
    {
								(yyval.n)=create_tree((yyvsp[(1) - (7)].n),(yyvsp[(3) - (7)].n),(yyvsp[(5) - (7)].n),NULL);
							}
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 95 "spl.y"
    {
								(yyval.n)=(yyvsp[(1) - (2)].n);
							}
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 98 "spl.y"
    {if(flag_break==0)
							{
								printf("\n%d: break or continue should be used inside while!!\n",linecount);
								exit(0);								
							}
							(yyval.n)=(yyvsp[(1) - (2)].n);
							}
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 105 "spl.y"
    {if(flag_break==0)
							{
								printf("\n%d: break or continue should be used inside while!!\n",linecount);
								exit(0);								
							}
							(yyval.n)=(yyvsp[(1) - (2)].n);
							}
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 112 "spl.y"
    {	
							(yyval.n)=(yyvsp[(1) - (2)].n);
							}
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 115 "spl.y"
    {
							(yyvsp[(2) - (3)].n)->name++;
							int temp=strlen((yyvsp[(2) - (3)].n)->name);
							(yyvsp[(2) - (3)].n)->name[temp-1]='\0';
							(yyval.n)=create_tree((yyvsp[(1) - (3)].n),(yyvsp[(2) - (3)].n),NULL,NULL);
							}
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 121 "spl.y"
    {	
							(yyval.n)=(yyvsp[(1) - (2)].n);
							}
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 124 "spl.y"
    {	
								if((yyvsp[(2) - (3)].n)->nodetype!='R')
								{
									printf("\n%d:Invalid operand in read!!\n",linecount);
									exit(0);
								}							
								(yyval.n)=create_tree((yyvsp[(1) - (3)].n),(yyvsp[(2) - (3)].n),NULL,NULL);
							}
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 132 "spl.y"
    {
								(yyval.n)=create_tree((yyvsp[(1) - (3)].n),(yyvsp[(2) - (3)].n),NULL,NULL);
							}
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 138 "spl.y"
    {
								(yyval.n)=create_tree((yyvsp[(2) - (3)].n),(yyvsp[(1) - (3)].n),(yyvsp[(3) - (3)].n),NULL);
							}
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 141 "spl.y"
    {
								(yyval.n)=create_tree((yyvsp[(2) - (3)].n),(yyvsp[(1) - (3)].n),(yyvsp[(3) - (3)].n),NULL);
							}
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 144 "spl.y"
    {
								(yyval.n)=create_tree((yyvsp[(2) - (3)].n),(yyvsp[(1) - (3)].n),(yyvsp[(3) - (3)].n),NULL);
							}
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 147 "spl.y"
    {
								(yyval.n)=create_tree((yyvsp[(2) - (3)].n),(yyvsp[(1) - (3)].n),(yyvsp[(3) - (3)].n),NULL);
							}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 150 "spl.y"
    {
								if((yyvsp[(1) - (2)].n)->nodetype=='-')
									(yyvsp[(2) - (2)].n)->value=(yyvsp[(2) - (2)].n)->value*-1;
								(yyval.n)=(yyvsp[(2) - (2)].n);
							}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 155 "spl.y"
    {
								(yyval.n)=create_tree((yyvsp[(1) - (2)].n),(yyvsp[(2) - (2)].n),NULL,NULL);
							}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 158 "spl.y"
    {
								(yyval.n)=create_nonterm_node("addr",(yyvsp[(2) - (3)].n),NULL);
								(yyval.n)->nodetype='m';
							}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 162 "spl.y"
    {
								(yyval.n)=(yyvsp[(2) - (3)].n);
							}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 165 "spl.y"
    {	
								(yyval.n)=(yyvsp[(1) - (1)].n);
							}
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 168 "spl.y"
    {
								(yyval.n)=(yyvsp[(1) - (1)].n);
							}
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 171 "spl.y"
    {
								(yyval.n)=(yyvsp[(1) - (1)].n);
							}
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 176 "spl.y"
    {
								depth++;
								(yyval.n)=(yyvsp[(1) - (1)].n);
							}
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 181 "spl.y"
    {
								pop_alias();
							}
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 186 "spl.y"
    {
								depth++;
								flag_break++;
								(yyval.n)=(yyvsp[(1) - (1)].n);
							}
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 193 "spl.y"
    {							
								(yyval.n)=substitute_id((yyvsp[(1) - (1)].n));
							}
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 196 "spl.y"
    {
								(yyval.n)=(yyvsp[(1) - (1)].n);
							}
    break;


/* Line 1787 of yacc.c  */
#line 1858 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2050 of yacc.c  */
#line 200 "spl.y"

int main (int argc,char **argv)
{	
	FILE *input_fp;
	char filename[200],ch;
	char op_name[200];
	if(argc < 3)
	{
		printf("Incorrect Usage.\nSee usage manual\n");
		exit(0);
	}
	strcpy(filename,argv[2]);
	expandpath(filename);
	input_fp = fopen(filename,"r");
	if(!input_fp)
	{
		printf("Invalid input file\n");
		return 0;
	}
	yyin = input_fp;
	remfilename(filename);
	strcpy( op_name, filename );
	if(strcmp(argv[1],"--os") == 0)
	{
		strcat(op_name,"os_startup.xsm");
		addrBaseVal = SCRATCHPAD;
	}
	else if(strcmp(argv[1],"--exhandler") == 0)
	{
		strcat(op_name,"exhandler.xsm");
		addrBaseVal = EX_HANDLER;
	}
	else if(strcmp(argv[1],"--int=timer") == 0)
	{
		strcat(op_name,"timer.xsm");
		addrBaseVal = T_INTERRUPT;
	}
	else if(strcmp(argv[1],"--int=1") == 0)
	{
		strcat(op_name,"int1.xsm");
		addrBaseVal = T_INTERRUPT + 1*PAGE_PER_INTERRUPT*PAGE_SIZE;
	}
	else if(strcmp(argv[1],"--int=2") == 0)
	{
		strcat(op_name,"int2.xsm");
		addrBaseVal = T_INTERRUPT + 2*PAGE_PER_INTERRUPT*PAGE_SIZE;
	}
	else if(strcmp(argv[1],"--int=3") == 0)
	{
		strcat(op_name,"int3.xsm");
		addrBaseVal = T_INTERRUPT + 3*PAGE_PER_INTERRUPT*PAGE_SIZE;
	}
	else if(strcmp(argv[1],"--int=4") == 0)
	{
		strcat(op_name,"int4.xsm");
		addrBaseVal = T_INTERRUPT + 4*PAGE_PER_INTERRUPT*PAGE_SIZE;
	}
	else if(strcmp(argv[1],"--int=5") == 0)
	{
		strcat(op_name,"int5.xsm");
		addrBaseVal = T_INTERRUPT + 5*PAGE_PER_INTERRUPT*PAGE_SIZE;
	}
	else if(strcmp(argv[1],"--int=6") == 0)
	{
		strcat(op_name,"int6.xsm");
		addrBaseVal = T_INTERRUPT + 6*PAGE_PER_INTERRUPT*PAGE_SIZE;
	}
	else if(strcmp(argv[1],"--int=7") == 0)
	{
		strcat(op_name,"int7.xsm");
		addrBaseVal = T_INTERRUPT + 7*PAGE_PER_INTERRUPT*PAGE_SIZE;
	}
	else
	{
		printf("Invalid arguement %s\n", argv[1]);
		fclose(input_fp);
		exit(0);
	}
	fp=fopen(".temp","w");
	out_linecount++;
	fprintf(fp,"START\n");
	yyparse();
	fclose(input_fp);
	fclose(fp);
	input_fp = fopen(".temp","r");
	if(!input_fp)
	{
		printf("Writing compiled code to file failed\n");
		return 0;
	}
	fp = fopen(op_name,"w");
	if(!fp)
	{
		fclose(input_fp);
		printf("Writing compiled code to file failed\n");
		return 0;
	}
	while( ( ch = fgetc(input_fp) ) != EOF )
		fputc(ch, fp);
	fclose(input_fp);
	fclose(fp);	
	return 0;
}
int yyerror (char *msg) 
{
	return fprintf (stderr, "%d: %s\n",linecount,msg);
}
