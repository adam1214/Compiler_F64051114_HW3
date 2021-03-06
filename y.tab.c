/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "compiler_hw3.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <string.h>
	#include "global.h"
    #include <stdbool.h>
	#include <stdlib.h>

typedef struct Entry Entry;
struct Entry {  //表中的一行
    int index;
    Value *id_ptr;
    Entry *next;
	char Kind[50];
	int Scope;
	char Attribute[50];
	char type[50];
};

typedef struct Header Header;
struct Header { //一張表
    int depth;
	int entry_num;
    Entry *table_root;
    //Entry *table_tail;
    Header *pre;
};

struct label_node{
	char label_name[50];
	struct label_node* next;
};

struct label_node* Q_HEAD=NULL;
struct label_node* Q_TAIL=NULL;
int label_num=0;

struct arg_node{
	char arg_name[50];
	struct arg_node* next;
};

struct arg_node* A_HEAD=NULL;
struct arg_node* A_TAIL=NULL;
int arg_num=0;

Header *header_root = NULL;
Header *cur_header = NULL;
Header *header_rec = NULL;
int depth = 0;

extern int yylineno;
extern int yylex();
extern char* yytext;   // Get current token from lex
extern char buf[256];  // Get current code line from lex
int printline_or_not=1;
int right_compound=0;
int err=0;
char errmsg[64];
int syntax_err=0;
int yacc_handle_syntax=1;
FILE *java_assembly_code;
char fun_content[1000000]="";
int rm_jFile_or_not=0;
int integer_or_not=1;
int label_lock=0;
char label_content[100000]="";
char item[50]={'\0'}; //use to Pop label name
char item_arg[50]={'\0'}; //use to Pop arg type for calling function checking
int arg_type=-1; // 0 for int,1 for float,2 for bool,3 for variable
char b[200]="";
int arg_not_cast=0;
int while_relation=0;
int else_tr=0;

/* Symbol table function - you can add new function if needed. */
int lookup_symbol(const Header *header, const char *id);
int lookup_symbol_type(const Header *header, const char *id);
Header* create_symbol();
void insert_symbol(Header *header, Value *t_ptr, Value *id_ptr,char *kind);
void insert_symbol_forfun(Header *header, Value *t_ptr, Value *id_ptr,char *kind);
void dump_symbol(Header *header);
void new_scope();
void dump_scope();
void dump_all_scopes();
void yyerror_overloading(char *s,int line);
void Push(char d[],int len);
char* Pop();
void Push_arg(char d[],int len);
char* Pop_arg();


#line 158 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INC = 258,
    DEC = 259,
    MTE = 260,
    LTE = 261,
    EQ = 262,
    NE = 263,
    ADDASGN = 264,
    SUBASGN = 265,
    MULASGN = 266,
    DIVASGN = 267,
    MODASGN = 268,
    AND = 269,
    OR = 270,
    STR_TYPE = 271,
    PRINT = 272,
    IF = 273,
    ELSE = 274,
    FOR = 275,
    WHILE = 276,
    INT = 277,
    FLOAT = 278,
    VOID = 279,
    BOOL = 280,
    TRUE = 281,
    FALSE = 282,
    RET = 283,
    CONT = 284,
    BREAK = 285,
    I_CONST = 286,
    F_CONST = 287,
    STRING = 288,
    ID = 289
  };
#endif
/* Tokens.  */
#define INC 258
#define DEC 259
#define MTE 260
#define LTE 261
#define EQ 262
#define NE 263
#define ADDASGN 264
#define SUBASGN 265
#define MULASGN 266
#define DIVASGN 267
#define MODASGN 268
#define AND 269
#define OR 270
#define STR_TYPE 271
#define PRINT 272
#define IF 273
#define ELSE 274
#define FOR 275
#define WHILE 276
#define INT 277
#define FLOAT 278
#define VOID 279
#define BOOL 280
#define TRUE 281
#define FALSE 282
#define RET 283
#define CONT 284
#define BREAK 285
#define I_CONST 286
#define F_CONST 287
#define STRING 288
#define ID 289

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 97 "compiler_hw3.y" /* yacc.c:355  */

    struct Value val;

#line 270 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 287 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   997

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  187
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  299

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,    35,     2,     2,    49,    42,     2,
      36,    37,    43,    44,    41,    45,    40,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    55,    57,
      50,    56,    51,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    38,     2,    39,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,    53,    59,    46,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   129,   129,   221,   241,   259,   275,   276,   287,   301,
     302,   303,   304,   305,   309,   312,   313,   315,   316,   317,
     317,   317,   502,   503,   627,   754,   892,  1033,  1034,  1158,
    1282,  1286,  1287,  1288,  1289,  1290,  1291,  1295,  1296,  1300,
    1301,  1312,  1336,  1361,  1362,  1395,  1431,  1435,  1436,  1500,
    1564,  1624,  1687,  1688,  1752,  1815,  1816,  1820,  1821,  1825,
    1826,  1830,  1831,  1835,  1836,  1840,  1841,  1845,  1846,  1903,
    1960,  2017,  2074,  2141,  2196,  2196,  2197,  2198,  2199,  2200,
    2201,  2205,  2220,  2235,  2250,  2328,  2332,  2333,  2381,  2479,
    2483,  2484,  2488,  2489,  2493,  2497,  2498,  2499,  2500,  2501,
    2505,  2506,  2510,  2511,  2515,  2516,  2517,  2518,  2519,  2519,
    2520,  2521,  2521,  2525,  2526,  2530,  2534,  2535,  2539,  2540,
    2541,  2545,  2546,  2550,  2551,  2555,  2556,  2557,  2561,  2562,
    2563,  2564,  2565,  2566,  2567,  2568,  2569,  2573,  2574,  2575,
    2579,  2580,  2584,  2585,  2586,  2587,  2588,  2589,  2593,  2597,
    2597,  2600,  2601,  2602,  2603,  2606,  2607,  2611,  2612,  2616,
    2617,  2621,  2621,  2638,  2638,  2651,  2654,  2654,  2655,  2655,
    2656,  2656,  2660,  2661,  2662,  2673,  2704,  2705,  2709,  2710,
    2714,  2714,  2793,  2794,  2798,  2799,  2800,  2801
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INC", "DEC", "MTE", "LTE", "EQ", "NE",
  "ADDASGN", "SUBASGN", "MULASGN", "DIVASGN", "MODASGN", "AND", "OR",
  "STR_TYPE", "PRINT", "IF", "ELSE", "FOR", "WHILE", "INT", "FLOAT",
  "VOID", "BOOL", "TRUE", "FALSE", "RET", "CONT", "BREAK", "I_CONST",
  "F_CONST", "STRING", "ID", "'\"'", "'('", "')'", "'['", "']'", "'.'",
  "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'",
  "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept",
  "primary_expression", "primary_expression_forfun",
  "postfix_expression_forfun", "para_arg", "postfix_expression", "$@1",
  "$@2", "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "expression", "$@3",
  "print_arg", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "type_specifier", "specifier_qualifier_list", "declarator",
  "direct_declarator", "$@4", "$@5", "pointer", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "initializer", "initializer_list", "statement", "labeled_statement",
  "compound_statement", "$@6", "after_LCB", "declaration_list",
  "statement_list", "expression_statement", "selection_statement", "$@7",
  "else_or_not", "$@8", "iteration_statement", "$@9", "$@10", "$@11",
  "jump_statement", "program", "external_declaration",
  "function_definition", "$@12", "compound_statement_fun", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,    34,    40,    41,    91,    93,
      46,    44,    38,    42,    43,    45,   126,    33,    47,    37,
      60,    62,    94,   124,    63,    58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF -175

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-175)))

#define YYTABLE_NINF -181

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     937,  -175,  -175,  -175,  -175,  -175,  -175,   158,   -17,  -175,
     116,   131,    91,    55,   180,   195,  -175,  -175,    39,  -175,
    -175,    -8,  -175,   177,  -175,   239,  -175,   116,    91,  -175,
      72,   741,    55,  -175,  -175,  -175,   158,  -175,    24,   -28,
     875,   875,    81,    86,   115,  -175,  -175,  -175,   612,    51,
     151,   152,   179,    -7,   197,   682,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,    59,    34,
     900,  -175,   148,   155,  -175,    35,   214,   202,   193,   205,
     234,     3,  -175,  -175,    23,   131,  -175,  -175,   284,   408,
    -175,  -175,  -175,  -175,   216,  -175,  -175,  -175,   131,   243,
     105,  -175,  -175,   257,  -175,  -175,  -175,   255,  -175,  -175,
      24,  -175,   238,  -175,   775,  -175,  -175,   126,   775,   646,
     263,  -175,    37,  -175,  -175,   578,   268,   137,   131,    82,
     280,   329,   285,  -175,  -175,   775,   288,   900,   900,   900,
     900,   900,   900,  -175,   900,   900,   900,   900,   900,   900,
     900,   900,   900,   900,   900,   900,   900,   900,   900,   900,
     775,   900,  -175,   322,  -175,  -175,   442,  -175,   131,   143,
     287,   293,  -175,  -175,  -175,   291,  -175,  -175,    36,  -175,
    -175,  -175,  -175,   302,   299,   161,   646,   775,  -175,  -175,
     301,   303,  -175,   146,   800,   213,  -175,   253,   900,  -175,
    -175,   374,   476,   825,  -175,   251,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,   148,   148,  -175,  -175,
    -175,  -175,    35,    35,   214,   202,   193,   205,   234,    33,
    -175,  -175,  -175,  -175,   932,  -175,     1,  -175,  -175,   131,
    -175,   544,  -175,   305,  -175,  -175,   716,   169,  -175,   307,
     311,  -175,   323,   253,   960,   850,  -175,  -175,   510,  -175,
    -175,   186,  -175,  -175,  -175,   900,  -175,  -175,  -175,  -175,
     578,  -175,   187,   578,  -175,  -175,  -175,  -175,   330,  -175,
     327,  -175,  -175,   900,  -175,   319,   578,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,   578,   578,  -175,  -175
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      89,    99,    96,    97,    95,    98,   104,     0,   113,   179,
       0,    90,     0,   103,     0,     0,   176,   178,     0,   114,
      86,     0,    92,    94,    91,     0,   155,     0,     0,   183,
     108,     0,   102,     1,   177,   105,     0,    87,     0,     0,
       0,     0,     0,     0,     0,   166,     7,     8,     0,     0,
       0,     3,     4,     2,     0,     0,    31,    32,    33,    34,
      35,    36,   159,   149,   184,    17,    14,    19,    27,    37,
       0,    39,    43,    46,    47,    52,    55,    57,    59,    61,
      63,    65,    67,    76,    74,    89,   142,   143,     0,     0,
     144,   145,   146,   147,    94,   156,   182,   121,     0,     0,
       0,     7,     8,     2,   107,    37,    85,     0,    93,    94,
       0,   137,     0,   181,     0,    28,    29,     0,     0,     0,
       0,   174,    74,   172,   173,     0,     0,    74,   101,   123,
       0,     0,     0,    23,    24,     0,     0,     0,     0,     0,
       0,     0,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   160,     0,   157,   186,     0,   185,    89,   120,
       0,   115,   116,   112,   110,     0,   106,   140,     0,    88,
      82,    83,    84,     0,     0,    74,     0,     0,   175,   148,
       5,     6,   100,     0,     0,   125,   124,   126,     0,   151,
     150,     0,     0,     0,    20,    74,    22,    69,    70,    71,
      72,    73,    68,    40,    41,    42,    44,    45,    51,    50,
      48,    49,    53,    54,    56,    58,    60,    62,    64,    74,
      77,    75,   187,   158,     0,   118,   125,   119,   109,     0,
     122,     0,   138,     0,    80,   161,     0,    74,   133,     0,
       0,   129,     0,   127,     0,     0,    38,   153,     0,   152,
      15,     0,    25,    21,    18,     0,   117,   139,   141,    81,
       0,   168,    74,     0,   134,   128,   130,   135,     0,   131,
       0,   154,    16,     0,    66,   165,     0,   170,   167,   136,
     132,    26,   163,   162,   169,     0,     0,   171,   164
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,   -18,
    -175,   -34,    93,  -175,   127,    99,   215,   212,   222,   211,
     221,  -175,   -29,   -37,   -39,  -175,  -175,  -174,     4,     0,
    -175,   345,   -41,   254,    -2,   -11,  -175,  -175,    16,   -91,
    -175,   144,  -175,  -175,  -108,  -164,   -98,  -175,   -83,  -175,
    -175,  -175,  -175,    13,   -78,  -102,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,   369,  -175,  -175,    26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    65,    66,    67,   204,    68,   132,   263,   261,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,   163,   184,   107,    26,    27,
      21,    22,    11,   129,    12,    13,    98,    99,    14,   249,
     171,   172,   100,   130,   250,   197,   112,   178,    85,    86,
      87,   131,   200,    28,    89,    90,    91,   270,   293,   296,
      92,   120,   286,   295,    93,    15,    16,    17,    39,    29
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,   111,   106,    32,     9,    18,   168,   170,    23,   122,
     166,    24,   177,   105,   128,    10,   127,   186,   159,     9,
     252,   196,   115,   116,    19,    94,     8,    40,    41,    -9,
      25,   253,    95,    36,   109,     6,   143,   234,    88,   194,
     149,   150,   189,   137,   138,   139,   140,   141,   125,    37,
     101,   102,   105,   202,    96,    51,    52,   160,   103,    54,
      55,   237,   133,   134,   161,   113,    56,    57,    58,    59,
      60,    61,   253,   111,   161,   127,    35,   241,   161,   185,
     162,   280,   110,   168,   246,   151,   152,   128,   265,   164,
     142,    30,    95,    31,   188,   242,   205,   135,   169,   136,
     207,   208,   209,   210,   211,   212,    97,     1,   123,  -111,
     213,   214,   215,     2,     3,     4,     5,   117,   193,   168,
     194,   229,   118,   258,   230,     8,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   174,   268,   201,   195,   175,     1,   247,    25,
       6,   119,     7,     2,     3,     4,     5,   180,   181,     8,
     182,   183,     1,   278,   256,   106,   262,   235,     2,     3,
       4,     5,   233,    20,   191,   168,   105,     6,   161,   234,
     105,   194,   193,   248,   194,   236,     8,   285,   -10,     8,
     288,   144,     6,   169,     7,    33,   145,   146,   245,   147,
     148,     8,   161,   294,   111,    95,   273,   272,   124,   195,
     161,     1,   297,   298,     6,   -11,     7,     2,     3,     4,
       5,   153,   154,   282,   287,    32,   106,   283,   161,     6,
     126,     7,    18,    38,   169,  -180,   284,   105,     8,   169,
     216,   217,    40,    41,   155,   156,   291,   105,   158,   193,
     236,   194,   222,   223,   169,     1,    42,    43,   157,    44,
      45,     2,     3,     4,     5,    46,    47,    48,    49,    50,
      51,    52,    38,    53,    54,    55,   218,   219,   220,   221,
     173,    56,    57,    58,    59,    60,    61,    40,    41,   254,
     264,   255,   161,    -9,   176,   179,    62,    63,    64,   187,
       1,    42,    43,   190,    44,    45,     2,     3,     4,     5,
      46,    47,    48,    49,    50,    51,    52,   198,    53,    54,
      55,   203,   206,   231,   238,   240,    56,    57,    58,    59,
      60,    61,    40,    41,   239,   243,   244,   -12,   292,   -13,
     269,    62,    63,   165,   274,     1,    42,    43,   275,    44,
      45,     2,     3,     4,     5,    46,    47,    48,    49,    50,
      51,    52,   276,    53,    54,    55,   290,   289,   225,   227,
     224,    56,    57,    58,    59,    60,    61,    40,    41,   226,
     228,   108,   192,   266,    34,     0,    62,    63,   199,     0,
       1,    42,    43,     0,    44,    45,     2,     3,     4,     5,
      46,    47,    48,    49,    50,    51,    52,     0,    53,    54,
      55,    40,    41,     0,     0,     0,    56,    57,    58,    59,
      60,    61,     0,     0,     0,    42,    43,     0,    44,    45,
       0,    62,    63,   257,    46,    47,    48,    49,    50,    51,
      52,     0,    53,    54,    55,    40,    41,     0,     0,     0,
      56,    57,    58,    59,    60,    61,     0,     0,     0,    42,
      43,     0,    44,    45,     0,    62,    63,   167,    46,    47,
      48,    49,    50,    51,    52,     0,    53,    54,    55,    40,
      41,     0,     0,     0,    56,    57,    58,    59,    60,    61,
       0,     0,     0,    42,    43,     0,    44,    45,     0,    62,
      63,   232,    46,    47,    48,    49,    50,    51,    52,     0,
      53,    54,    55,    40,    41,     0,     0,     0,    56,    57,
      58,    59,    60,    61,     0,     0,     0,    42,    43,     0,
      44,    45,     0,    62,    63,   259,    46,    47,    48,    49,
      50,    51,    52,     0,    53,    54,    55,    40,    41,     0,
       0,     0,    56,    57,    58,    59,    60,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,    63,   281,
     101,   102,     0,     0,     0,    51,    52,     0,   103,    54,
      55,    40,    41,     0,     0,     0,    56,    57,    58,    59,
      60,    61,     0,     0,     0,    42,    43,     0,    44,    45,
       0,     0,   110,   267,    46,    47,    48,    49,    50,    51,
      52,     0,    53,    54,    55,    40,    41,     0,     0,     0,
      56,    57,    58,    59,    60,    61,     0,     0,     0,    42,
       0,     0,     0,     0,     0,    62,    63,     0,    46,    47,
       0,     0,     0,    51,    52,     0,   103,    54,    55,    40,
      41,     0,     0,     0,    56,    57,    58,    59,    60,    61,
       0,     0,     0,    42,     0,     0,     0,     0,     0,   121,
       0,     0,    46,    47,     0,     0,     0,    51,    52,     0,
     103,    54,    55,     0,     0,    40,    41,     0,    56,    57,
      58,    59,    60,    61,     0,     0,     0,     0,     1,    42,
       0,     0,     0,    62,     2,     3,     4,     5,    46,    47,
       0,     0,     0,    51,    52,     0,   103,    54,    55,    40,
      41,     0,     0,     0,    56,    57,    58,    59,    60,    61,
       0,     0,     0,    42,     0,     0,     0,     0,     0,     0,
       0,     0,    46,    47,    40,    41,     0,    51,    52,     0,
     103,    54,    55,   271,     0,     0,     0,     0,    56,    57,
      58,    59,    60,    61,     0,     0,     0,   101,   102,     0,
       0,     0,    51,    52,     0,   103,    54,    55,    40,    41,
     104,     0,     0,    56,    57,    58,    59,    60,    61,     0,
       0,     0,    42,     0,     0,     0,     0,     0,     0,     0,
       0,    46,    47,    40,    41,     0,    51,    52,     0,   103,
      54,    55,     0,     0,     0,     0,     0,    56,    57,    58,
      59,    60,    61,     0,     0,     0,   101,   102,    40,    41,
       0,    51,    52,     0,   103,    54,    55,     0,     0,   251,
       0,     0,    56,    57,    58,    59,    60,    61,     0,     0,
       0,   101,   102,    40,    41,     0,    51,    52,     0,   103,
      54,    55,   260,     0,     0,     0,     0,    56,    57,    58,
      59,    60,    61,     0,     0,     0,   101,   102,    40,    41,
       0,    51,    52,     0,   103,    54,    55,     0,     0,   279,
       0,     0,    56,    57,    58,    59,    60,    61,     0,     0,
       0,   101,   102,    40,    41,     0,    51,    52,     0,   103,
      54,   114,     0,     0,     0,     0,     0,    56,    57,    58,
      59,    60,    61,     0,     0,     0,   101,   102,     0,     0,
       0,    51,    52,     0,   103,    54,    55,     0,     0,     0,
       0,     0,    56,    57,    58,    59,    60,    61,     1,     0,
       0,     0,     0,     1,     2,     3,     4,     5,     0,     2,
       3,     4,     5,     0,     0,     0,     6,     0,   234,   248,
     194,     6,     0,     7,     0,     8,     1,     0,     0,     0,
       8,     0,     2,     3,     4,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   277
};

static const yytype_int16 yycheck[] =
{
       0,    38,    31,    14,     0,     7,    89,    98,    10,    48,
      88,    11,   110,    31,    55,    15,    55,   119,    15,    15,
     194,   129,    40,    41,     8,    27,    43,     3,     4,    36,
      58,   195,    28,    41,    36,    34,    70,    36,    25,    38,
       5,     6,   125,     9,    10,    11,    12,    13,    55,    57,
      26,    27,    70,   131,    28,    31,    32,    54,    34,    35,
      36,   169,     3,     4,    41,    39,    42,    43,    44,    45,
      46,    47,   236,   110,    41,   114,    37,    41,    41,   118,
      57,   255,    58,   166,   186,    50,    51,   128,    55,    85,
      56,    36,    88,    38,    57,    59,   135,    38,    98,    40,
     137,   138,   139,   140,   141,   142,    34,    16,    57,    37,
     144,   145,   146,    22,    23,    24,    25,    36,    36,   202,
      38,   160,    36,   201,   161,    43,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,    37,   241,   131,   129,    41,    16,   187,    58,
      34,    36,    36,    22,    23,    24,    25,    31,    32,    43,
      34,    35,    16,   254,   198,   194,   203,   169,    22,    23,
      24,    25,   168,    57,    37,   258,   194,    34,    41,    36,
     198,    38,    36,    37,    38,   169,    43,   270,    36,    43,
     273,    43,    34,   193,    36,     0,    48,    49,    37,    44,
      45,    43,    41,   286,   241,   201,    37,   246,    57,   193,
      41,    16,   295,   296,    34,    36,    36,    22,    23,    24,
      25,     7,     8,    37,    37,   236,   255,    41,    41,    34,
      33,    36,   234,    56,   234,    58,   265,   255,    43,   239,
     147,   148,     3,     4,    42,    52,   283,   265,    14,    36,
     234,    38,   153,   154,   254,    16,    17,    18,    53,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    56,    34,    35,    36,   149,   150,   151,   152,
      37,    42,    43,    44,    45,    46,    47,     3,     4,    36,
      39,    38,    41,    36,    39,    57,    57,    58,    59,    36,
      16,    17,    18,    35,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    37,    34,    35,
      36,    36,    34,     1,    37,    34,    42,    43,    44,    45,
      46,    47,     3,     4,    41,    33,    37,    36,    19,    36,
      35,    57,    58,    59,    37,    16,    17,    18,    37,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    39,    34,    35,    36,    39,    37,   156,   158,
     155,    42,    43,    44,    45,    46,    47,     3,     4,   157,
     159,    36,   128,   239,    15,    -1,    57,    58,    59,    -1,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,     3,     4,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    17,    18,    -1,    20,    21,
      -1,    57,    58,    59,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,     3,     4,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    17,
      18,    -1,    20,    21,    -1,    57,    58,    59,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,     3,
       4,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    17,    18,    -1,    20,    21,    -1,    57,
      58,    59,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,     3,     4,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    17,    18,    -1,
      20,    21,    -1,    57,    58,    59,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,     3,     4,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    34,    35,
      36,     3,     4,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    17,    18,    -1,    20,    21,
      -1,    -1,    58,    59,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,     3,     4,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    34,    35,    36,     3,
       4,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      34,    35,    36,    -1,    -1,     3,     4,    -1,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    16,    17,
      -1,    -1,    -1,    57,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    34,    35,    36,     3,
       4,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,     3,     4,    -1,    31,    32,    -1,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    32,    -1,    34,    35,    36,     3,     4,
      39,    -1,    -1,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,     3,     4,    -1,    31,    32,    -1,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    26,    27,     3,     4,
      -1,    31,    32,    -1,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    26,    27,     3,     4,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    26,    27,     3,     4,
      -1,    31,    32,    -1,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    26,    27,     3,     4,    -1,    31,    32,    -1,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    16,    -1,
      -1,    -1,    -1,    16,    22,    23,    24,    25,    -1,    22,
      23,    24,    25,    -1,    -1,    -1,    34,    -1,    36,    37,
      38,    34,    -1,    36,    -1,    43,    16,    -1,    -1,    -1,
      43,    -1,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    22,    23,    24,    25,    34,    36,    43,    88,
      89,    92,    94,    95,    98,   125,   126,   127,    94,    98,
      57,    90,    91,    94,    89,    58,    88,    89,   113,   129,
      36,    38,    95,     0,   126,    37,    41,    57,    56,   128,
       3,     4,    17,    18,    20,    21,    26,    27,    28,    29,
      30,    31,    32,    34,    35,    36,    42,    43,    44,    45,
      46,    47,    57,    58,    59,    61,    62,    63,    65,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,   108,   109,   110,   113,   114,
     115,   116,   120,   124,    94,    88,   129,    34,    96,    97,
     102,    26,    27,    34,    39,    69,    82,    87,    91,    94,
      58,    83,   106,   129,    36,    69,    69,    36,    36,    36,
     121,    57,    84,    57,    57,    55,    33,    84,    92,    93,
     103,   111,    66,     3,     4,    38,    40,     9,    10,    11,
      12,    13,    56,    71,    43,    48,    49,    44,    45,     5,
       6,    50,    51,     7,     8,    42,    52,    53,    14,    15,
      54,    41,    57,    85,    88,    59,   114,    59,   108,    89,
      99,   100,   101,    37,    37,    41,    39,   106,   107,    57,
      31,    32,    34,    35,    86,    84,   115,    36,    57,   108,
      35,    37,    93,    36,    38,    98,   104,   105,    37,    59,
     112,   113,   114,    36,    64,    84,    34,    83,    83,    83,
      83,    83,    83,    71,    71,    71,    72,    72,    74,    74,
      74,    74,    75,    75,    76,    77,    78,    79,    80,    84,
      83,     1,    59,    88,    36,    94,    98,   104,    37,    41,
      34,    41,    59,    33,    37,    37,   115,    84,    37,    99,
     104,    39,    87,   105,    36,    38,    71,    59,   114,    59,
      37,    68,    83,    67,    39,    55,   101,    59,   106,    35,
     117,    37,    84,    37,    37,    37,    39,    37,    99,    39,
      87,    59,    37,    41,    82,   108,   122,    37,   108,    37,
      39,    83,    19,   118,   108,   123,   119,   108,   108
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    61,    61,    61,    61,    61,    62,
      62,    62,    62,    62,    63,    64,    64,    65,    65,    66,
      67,    65,    65,    65,    65,    68,    68,    69,    69,    69,
      69,    70,    70,    70,    70,    70,    70,    71,    71,    72,
      72,    72,    72,    73,    73,    73,    74,    75,    75,    75,
      75,    75,    76,    76,    76,    77,    77,    78,    78,    79,
      79,    80,    80,    81,    81,    82,    82,    83,    83,    83,
      83,    83,    83,    83,    85,    84,    84,    84,    84,    84,
      84,    86,    86,    86,    86,    87,    88,    88,    88,    88,
      89,    89,    90,    90,    91,    92,    92,    92,    92,    92,
      93,    93,    94,    94,    95,    95,    95,    95,    96,    95,
      95,    97,    95,    98,    98,    99,   100,   100,   101,   101,
     101,   102,   102,   103,   103,   104,   104,   104,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   106,   106,   106,
     107,   107,   108,   108,   108,   108,   108,   108,   109,   111,
     110,   112,   112,   112,   112,   113,   113,   114,   114,   115,
     115,   117,   116,   119,   118,   118,   121,   120,   122,   120,
     123,   120,   124,   124,   124,   124,   125,   125,   126,   126,
     128,   127,   127,   127,   129,   129,   129,   129
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     3,     3,     1,     2,     3,     1,     4,     0,
       0,     4,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       3,     3,     3,     1,     3,     3,     1,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     3,
       3,     3,     3,     3,     0,     3,     1,     3,     1,     1,
       4,     3,     1,     1,     1,     1,     2,     3,     5,     0,
       1,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     1,     3,     4,     3,     0,     5,
       4,     0,     4,     1,     2,     1,     1,     3,     2,     2,
       1,     1,     3,     1,     2,     1,     1,     2,     3,     2,
       3,     3,     4,     2,     3,     3,     4,     1,     3,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     0,
       3,     1,     2,     2,     3,     1,     2,     2,     3,     1,
       2,     0,     7,     0,     3,     0,     0,     6,     0,     7,
       0,     8,     2,     2,     2,     3,     1,     2,     1,     1,
       0,     4,     3,     2,     2,     3,     3,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 130 "compiler_hw3.y" /* yacc.c:1646  */
    {
		arg_type=3;
		int symbol_exist_or_not = -10; //not exist
		(yyval.val) = yylval.val;
		Header *tmp=cur_header;
		symbol_exist_or_not = lookup_symbol(tmp,(yyval.val).id_name);
		while(tmp->pre!=NULL)
		{
			if(symbol_exist_or_not!=-10)
			{
				if(lookup_symbol_type(tmp,(yyval.val).id_name)==0||lookup_symbol_type(tmp,(yyval.val).id_name)==4||lookup_symbol_type(tmp,(yyval.val).id_name)==2) //int or string or bool
				{
					if(arg_not_cast==0)
						sprintf(b,"\tiload %d\n\ti2f\n",symbol_exist_or_not);
					else
						sprintf(b,"\tiload %d\n",symbol_exist_or_not);
				}
					
				else if(lookup_symbol_type(tmp,(yyval.val).id_name)==1) //float
					sprintf(b,"\tfload %d\n",symbol_exist_or_not);
				else if(lookup_symbol_type(tmp,(yyval.val).id_name)==2) //bool
					sprintf(b,"\tiload %d\n\ti2f\n",symbol_exist_or_not);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
				break;

			}
			tmp=tmp->pre;
			symbol_exist_or_not = lookup_symbol(tmp,(yyval.val).id_name);
			if(symbol_exist_or_not!=-10)
			{
				if(tmp->depth==0)
				{
					if(lookup_symbol_type(tmp,(yyval.val).id_name)==0||lookup_symbol_type(tmp,(yyval.val).id_name)==4||lookup_symbol_type(tmp,(yyval.val).id_name)==2) //int or string or bool
						sprintf(b,"\tgetstatic compiler_hw3/%s I\n\ti2f\n",(yyval.val).id_name);
					else if(lookup_symbol_type(tmp,(yyval.val).id_name)==1) //float
						sprintf(b,"\tgetstatic compiler_hw3/%s F\n",(yyval.val).id_name);
					else if(lookup_symbol_type(tmp,(yyval.val).id_name)==2) //bool
						sprintf(b,"\tgetstatic compiler_hw3/%s Z\n\ti2f\n",(yyval.val).id_name);
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
					break;
				}

				if(lookup_symbol_type(tmp,(yyval.val).id_name)==0||lookup_symbol_type(tmp,(yyval.val).id_name)==4||lookup_symbol_type(tmp,(yyval.val).id_name)==2) //int or string or bool
				{
					if(arg_not_cast==0)
						sprintf(b,"\tiload %d\n\ti2f\n",symbol_exist_or_not);
					else
						sprintf(b,"\tiload %d\n",symbol_exist_or_not);
				}
					
				else if(lookup_symbol_type(tmp,(yyval.val).id_name)==1) //float
					sprintf(b,"\tfload %d\n",symbol_exist_or_not);
				else if(lookup_symbol_type(tmp,(yyval.val).id_name)==2) //bool
					sprintf(b,"\tiload %d\n\ti2f\n",symbol_exist_or_not);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
				break;
			}
		}
		if(symbol_exist_or_not == -10)
		{
			err=1;
        	sprintf(errmsg, "Undeclared variable %s", (yyval.val).id_name);
		} 
	  }
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 222 "compiler_hw3.y" /* yacc.c:1646  */
    {
			arg_type=0;
			(yyval.val)=yylval.val;
			float a=(float)(yyval.val).i_val;
			if(arg_not_cast==0)
				sprintf(b,"\tldc %f\n",a);
			else
				sprintf(b,"\tldc %d\n",(yyval.val).i_val);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
		}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 242 "compiler_hw3.y" /* yacc.c:1646  */
    {
			arg_type=1;
			(yyval.val)=yylval.val;
			integer_or_not=0;

			sprintf(b,"\tldc %f\n",(yyval.val).f_val);
			if(label_lock!=0)
			{
				strcat(label_content,b);
				strcpy(b,"");
			}
			else
			{
				strcat(fun_content,b);
				strcpy(b,"");
			}
		}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 260 "compiler_hw3.y" /* yacc.c:1646  */
    {
			arg_type=4;
			(yyval.val)=yylval.val;
			sprintf(b,"\tldc \"%s\"\n",(yyval.val).string);
			if(label_lock!=0)
			{
				strcat(label_content,b);
				strcpy(b,"");
			}
			else
			{
				strcat(fun_content,b);
				strcpy(b,"");
			}
		}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 277 "compiler_hw3.y" /* yacc.c:1646  */
    {
			if(label_lock!=0)
			{
				strcat(label_content,"\tldc 1\n");
			}
			else
			{
				strcat(fun_content,"\tldc 1\n");
			}
		}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 288 "compiler_hw3.y" /* yacc.c:1646  */
    {
			if(label_lock!=0)
			{
				strcat(label_content,"\tldc 0\n");
			}
			else
			{
				strcat(fun_content,"\tldc 0\n");
			}
		}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 301 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=yylval.val;}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 302 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=yylval.val;}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 303 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=yylval.val;}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 304 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=yylval.val;}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 309 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 315 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 317 "compiler_hw3.y" /* yacc.c:1646  */
    {arg_not_cast=1;}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 317 "compiler_hw3.y" /* yacc.c:1646  */
    {arg_not_cast=0;}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 318 "compiler_hw3.y" /* yacc.c:1646  */
    {
		(yyval.val) = (yyvsp[-3].val);
		Header *tmp=cur_header;
		while(tmp->pre!=NULL)
		{
			tmp=tmp->pre;
		}
		if(lookup_symbol(tmp,(yyval.val).id_name)==-10)
		{
			err=1;
        	sprintf(errmsg, "Undeclared function %s", (yyval.val).id_name);
		} 

		char attr[51]="";
		//lookup function attribute
		Header *t=cur_header;
		while(t->pre!=NULL)
		{
			t=t->pre;
		}
		//t is header root
		Entry *cur = t->table_root;
    	while (cur != NULL)
		{
        	if (cur->id_ptr!=NULL&&strcmp(cur->id_ptr->id_name, (yyval.val).id_name) == 0)
			{
				if(strcmp(cur->Attribute,"")!=0)
				{
					char a[20];
					if(arg_num>0)
					{
						strcpy(a,Pop_arg());
					}
					else
					{
						err=1;
        				sprintf(errmsg, "function formal parameter is not the same");
					}

					if(cur->Attribute[0]=='i')
					{
						strcat(attr,"I");
						if(strcmp(a,"int")!=0&&strcmp(a,"int_var")!=0)
						{
							err=1;
        					sprintf(errmsg, "function formal parameter is not the same");
						}
					}
					else if(cur->Attribute[0]=='f')
					{ 
						strcat(attr,"F");
						if(strcmp(a,"float")!=0&&strcmp(a,"float_var")!=0)
						{
							err=1;
        					sprintf(errmsg, "function formal parameter is not the same");
						}
					}
					else if(cur->Attribute[0]=='b')
					{ 
						strcat(attr,"Z");
						if(strcmp(a,"bool")!=0&&strcmp(a,"bool_var")!=0)
						{
							err=1;
        					sprintf(errmsg, "function formal parameter is not the same");
						}
					}		
					int next_will_write_or_not=0;
					for(int i=1;cur->Attribute[i]!='\0';i++)
					{ 
						if(next_will_write_or_not==1)
						{
							char aa[20];
							if(arg_num>0)
							{
								strcpy(aa,Pop_arg());
							}
							else
							{
								err=1;
        						sprintf(errmsg, "function formal parameter is not the same");
							}

							next_will_write_or_not=0;
							if(cur->Attribute[i]=='i')
							{ 
								strcat(attr," I");
								if(strcmp(aa,"int")!=0&&strcmp(aa,"int_var")!=0)
								{
									err=1;
        							sprintf(errmsg, "function formal parameter is not the same");
								}
							}
							else if(cur->Attribute[i]=='f')
							{ 
								strcat(attr," F");
								if(strcmp(aa,"float")!=0&&strcmp(aa,"float_var")!=0)
								{
									err=1;
        							sprintf(errmsg, "function formal parameter is not the same");
								}
							}
							else if(cur->Attribute[i]=='b')
							{ 
								strcat(attr," Z");
								if(strcmp(aa,"bool")!=0&&strcmp(aa,"bool_var")!=0)
								{
									err=1;
        							sprintf(errmsg, "function formal parameter is not the same");
								}
							}
						}
						if(cur->Attribute[i]==',')
						{
							next_will_write_or_not=1;
						}
					}
				}
				else
				{
					strcpy(attr,"");
				}
       		}
        	cur = cur->next;
    	}
		if(arg_num>0)
		{
			err=1;
        	sprintf(errmsg, "function formal parameter is not the same");
			while(arg_num!=0)
			{
				Pop_arg(); //Pop out all the parameter
			}
		}

		if(lookup_symbol_type(t,(yyval.val).id_name)==0)
			sprintf(b,"\tinvokestatic compiler_hw3/%s(%s)I\n\ti2f\n",(yyval.val).id_name,attr);
		else if(lookup_symbol_type(t,(yyval.val).id_name)==1)
			sprintf(b,"\tinvokestatic compiler_hw3/%s(%s)F\n",(yyval.val).id_name,attr);
		else if(lookup_symbol_type(t,(yyval.val).id_name)==2)
			sprintf(b,"\tinvokestatic compiler_hw3/%s(%s)Z\n",(yyval.val).id_name,attr);
		else if(lookup_symbol_type(t,(yyval.val).id_name)==3)
			sprintf(b,"\tinvokestatic compiler_hw3/%s(%s)V\n",(yyval.val).id_name,attr);

		if(label_lock!=0)
		{
			strcat(label_content,b);
			strcpy(b,"");
		}
		else
		{
			strcat(fun_content,b);
			strcpy(b,"");
		}

		if(strcmp(attr,"")==0)
		{
			//lookup function attribute
			Header *tt=cur_header;
			while(tt->pre!=NULL)
			{
				tt=tt->pre;
			}
			//tt is header root
			Entry *cc = tt->table_root;
    		while (cc != NULL)
			{
        		if (cc->id_ptr!=NULL&&strcmp(cc->id_ptr->id_name, (yyval.val).id_name) == 0)
				{
					if(strcmp(cc->Attribute,"")!=0)
					{
						err=1;
        				sprintf(errmsg, "function formal parameter is not the same");
					}
					break;
       			}
        		cc = cc->next;
    		}
		}
		if(lookup_symbol(tmp,(yyval.val).id_name)==-10)
		{
			err=1;
        	sprintf(errmsg, "Undeclared function %s", (yyval.val).id_name);
		} 
	}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 504 "compiler_hw3.y" /* yacc.c:1646  */
    {
			Value *v1=&(yyvsp[-1].val); //a
			int symbol_exist_or_not = -10; //not exist
			int type;
			Header *tmp=cur_header;
			symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
			while(tmp->pre!=NULL)
			{
				if(symbol_exist_or_not!=-10)
				{
					type=lookup_symbol_type(tmp,v1->id_name);
					if(lookup_symbol_type(tmp,v1->id_name)==0) //int
					{
						//sprintf(b,"\tiload %d\n",symbol_exist_or_not);
					}
					else if(lookup_symbol_type(tmp,v1->id_name)==1) //float
					{
						//sprintf(b,"\tfload %d\n",symbol_exist_or_not);
						integer_or_not=0;
					}
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
					break;
				}
				tmp=tmp->pre;
				symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
				if(symbol_exist_or_not!=-10)
				{
					type=lookup_symbol_type(tmp,v1->id_name);
					if(tmp->depth==0)
					{
						if(lookup_symbol_type(tmp,(yyval.val).id_name)==0||lookup_symbol_type(tmp,(yyval.val).id_name)==4||lookup_symbol_type(tmp,(yyval.val).id_name)==2) //int or string or bool
						{
							//sprintf(b,"\tgetstatic compiler_hw3/%s I\n",$$.id_name);
						}
						else if(lookup_symbol_type(tmp,(yyval.val).id_name)==1) //float
						{
							//sprintf(b,"\tgetstatic compiler_hw3/%s F\n",$$.id_name);
						}
						else if(lookup_symbol_type(tmp,(yyval.val).id_name)==2) //bool
						{
							//sprintf(b,"\tgetstatic compiler_hw3/%s Z\n",$$.id_name);
						}
						if(label_lock!=0)
						{
							strcat(label_content,b);
							strcpy(b,"");
						}
						else
						{
							strcat(fun_content,b);
							strcpy(b,"");
						}
						break;
					}
					if(lookup_symbol_type(tmp,v1->id_name)==0) //int
					{
						//sprintf(b,"\tiload %d\n",symbol_exist_or_not);
					}
					else if(lookup_symbol_type(tmp,v1->id_name)==1) //float
					{
						//sprintf(b,"\tfload %d\n",symbol_exist_or_not);
						integer_or_not=0;
					}
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
					break;
				}
			}
			if(label_lock!=0)
			{
				strcat(label_content,"\tldc 1.000000\n");
			}
			else
			{
				strcat(fun_content,"\tldc 1.000000\n");
			}
			if(type==0) //int
			{
				sprintf(b,"\tfadd\n\tf2i\n\tistore %d\n",symbol_exist_or_not);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
			}
			else //float
			{
				sprintf(b,"\tfadd\n\tfstore %d\n",symbol_exist_or_not);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
			}
			integer_or_not=1;
		}
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 628 "compiler_hw3.y" /* yacc.c:1646  */
    {
			Value *v1=&(yyvsp[-1].val); //a
			int type;
			int symbol_exist_or_not = -10; //not exist
			Header *tmp=cur_header;
			symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
			while(tmp->pre!=NULL)
			{
				if(symbol_exist_or_not!=-10)
				{
					type=lookup_symbol_type(tmp,v1->id_name);
					if(lookup_symbol_type(tmp,v1->id_name)==0) //int
					{
						//sprintf(b,"\tiload %d\n",symbol_exist_or_not);
					}
					else if(lookup_symbol_type(tmp,v1->id_name)==1) //float
					{
						//sprintf(b,"\tfload %d\n",symbol_exist_or_not);
						integer_or_not=0;
					}
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
					break;
				}
				tmp=tmp->pre;
				symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
				if(symbol_exist_or_not!=-10)
				{
					type=lookup_symbol_type(tmp,v1->id_name);
					if(tmp->depth==0)
					{
						if(lookup_symbol_type(tmp,(yyval.val).id_name)==0||lookup_symbol_type(tmp,(yyval.val).id_name)==4||lookup_symbol_type(tmp,(yyval.val).id_name)==2) //int or string or bool
						{
							//sprintf(b,"\tgetstatic compiler_hw3/%s I\n",$$.id_name);
						}
						else if(lookup_symbol_type(tmp,(yyval.val).id_name)==1) //float
						{
							//sprintf(b,"\tgetstatic compiler_hw3/%s F\n",$$.id_name);
						}
						else if(lookup_symbol_type(tmp,(yyval.val).id_name)==2) //bool
						{
							//sprintf(b,"\tgetstatic compiler_hw3/%s Z\n",$$.id_name);
						}
						if(label_lock!=0)
						{
							strcat(label_content,b);
							strcpy(b,"");
						}
						else
						{
							strcat(fun_content,b);
							strcpy(b,"");
						}
						break;
					}
					if(lookup_symbol_type(tmp,v1->id_name)==0) //int
					{
						//sprintf(b,"\tiload %d\n",symbol_exist_or_not);
					}
					else if(lookup_symbol_type(tmp,v1->id_name)==1) //float
					{
						//sprintf(b,"\tfload %d\n",symbol_exist_or_not);
						integer_or_not=0;
					}
						if(label_lock!=0)
						{
							strcat(label_content,b);
							strcpy(b,"");
						}
						else
						{
							strcat(fun_content,b);
							strcpy(b,"");
						}
					break;
				}
			}
			if(label_lock!=0)
			{
				strcat(label_content,"\tldc 1.000000\n");
			}
			else
			{
				strcat(fun_content,"\tldc 1.000000\n");
			}
			if(type==0) //int 
			{
				sprintf(b,"\tfsub\n\tf2i\n\tistore %d\n",symbol_exist_or_not);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
			}
			else //float
			{
				sprintf(b,"\tfsub\n\tfstore %d\n",symbol_exist_or_not);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
			}
			integer_or_not=1;
		}
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 755 "compiler_hw3.y" /* yacc.c:1646  */
    {
			Value *v1=&(yyvsp[0].val);
			if(arg_type==0) //int
			{
				//sprintf(b,"\tldc %d\n",v1->i_val);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
				Push_arg("int",strlen("int"));
			}
			else if(arg_type==1) //float
			{
				//sprintf(b,"\tldc %f\n",v1->f_val);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
				Push_arg("float",strlen("float"));
			}
			else if(arg_type==2) //bool
			{
				//sprintf(b,"\tldc %d\n",v1->i_val);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
				Push_arg("bool",strlen("bool"));
			}
			else if(arg_type==3) //var.
			{
				int symbol_exist_or_not = -10; //not exist
				Header *tmp=cur_header;
				symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
				while(tmp->pre!=NULL)
				{
					if(symbol_exist_or_not!=-10)
					{
						if(lookup_symbol_type(tmp,v1->id_name)==0) //int
						{
							//sprintf(b,"\tiload %d\n",symbol_exist_or_not);
							Push_arg("int_var",strlen("int_var"));
						}	
						else if(lookup_symbol_type(tmp,v1->id_name)==1) //float
						{
							//sprintf(b,"\tfload %d\n",symbol_exist_or_not);
							integer_or_not=0;
							Push_arg("float_var",strlen("float_var"));
						}
						else if(lookup_symbol_type(tmp,v1->id_name)==2) //bool
						{
							//sprintf(b,"\tiload %d\n",symbol_exist_or_not);
							integer_or_not=0;
							Push_arg("bool_var",strlen("bool_var"));
						}
						if(label_lock!=0)
						{
							strcat(label_content,b);
							strcpy(b,"");
						}
						else
						{
							strcat(fun_content,b);
							strcpy(b,"");
						}
						break;
					}
					tmp=tmp->pre;
					symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
					if(symbol_exist_or_not!=-10)
					{
						if(lookup_symbol_type(tmp,v1->id_name)==0) //int
						{
							//sprintf(b,"\tiload %d\n",symbol_exist_or_not);
							Push_arg("int_var",strlen("int_var"));
						}							
						else if(lookup_symbol_type(tmp,v1->id_name)==1) //float
						{
							//sprintf(b,"\tfload %d\n",symbol_exist_or_not);
							integer_or_not=0;
							Push_arg("float_var",strlen("float_var"));
						}
						else if(lookup_symbol_type(tmp,v1->id_name)==2) //bool
						{
							//sprintf(b,"\tiload %d\n",symbol_exist_or_not);
							integer_or_not=0;
							Push_arg("bool_var",strlen("bool_var"));
						}
						if(label_lock!=0)
						{
							strcat(label_content,b);
							strcpy(b,"");
						}
						else
						{
							strcat(fun_content,b);
							strcpy(b,"");
						}
						break;
					}
				}
			}
			else if(arg_type==4) //string
			{
				//sprintf(b,"\tldc \"%s\"\n",v1->string);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
				Push_arg("string",strlen("string"));
			}
			arg_type=-1;
		}
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 893 "compiler_hw3.y" /* yacc.c:1646  */
    {
			Value *v1=&(yyvsp[0].val);
			if(arg_type==0) //int
			{
				//sprintf(b,"\tldc %d\n",v1->i_val);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
				Push_arg("int",strlen("int"));
			}
			else if(arg_type==1) //float
			{
				//sprintf(b,"\tldc %f\n",v1->f_val);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
				Push_arg("float",strlen("float"));
			}
			else if(arg_type==2) //bool
			{
				//sprintf(b,"\tldc %d\n",v1->i_val);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
				Push_arg("bool",strlen("bool"));
			}
			else if(arg_type==3) //var.
			{
				int symbol_exist_or_not = -10; //not exist
				Header *tmp=cur_header;
				symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
				while(tmp->pre!=NULL)
				{
					if(symbol_exist_or_not!=-10)
					{
						if(lookup_symbol_type(tmp,v1->id_name)==0) //int
						{
							//sprintf(b,"\tiload %d\n",symbol_exist_or_not);
							Push_arg("int_var",strlen("int_var"));
						}	
						else if(lookup_symbol_type(tmp,v1->id_name)==1) //float
						{
							//sprintf(b,"\tfload %d\n",symbol_exist_or_not);
							integer_or_not=0;
							Push_arg("float_var",strlen("float_var"));
						}
						else if(lookup_symbol_type(tmp,v1->id_name)==2) //bool
						{
							//sprintf(b,"\tiload %d\n",symbol_exist_or_not);
							integer_or_not=0;
							Push_arg("bool_var",strlen("bool_var"));
						}
						if(label_lock!=0)
						{
							strcat(label_content,b);
							strcpy(b,"");
						}
						else
						{
							strcat(fun_content,b);
							strcpy(b,"");
						}
						break;
					}
					tmp=tmp->pre;
					symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
					if(symbol_exist_or_not!=-10)
					{
						if(lookup_symbol_type(tmp,v1->id_name)==0) //int
						{
							//sprintf(b,"\tiload %d\n",symbol_exist_or_not);
							Push_arg("int_var",strlen("int_var"));
						}							
						else if(lookup_symbol_type(tmp,v1->id_name)==1) //float
						{
							//sprintf(b,"\tfload %d\n",symbol_exist_or_not);
							integer_or_not=0;
							Push_arg("float_var",strlen("float_var"));
						}
						else if(lookup_symbol_type(tmp,v1->id_name)==2) //bool
						{
							//sprintf(b,"\tiload %d\n",symbol_exist_or_not);
							integer_or_not=0;
							Push_arg("bool_var",strlen("bool_var"));
						}
						if(label_lock!=0)
						{
							strcat(label_content,b);
							strcpy(b,"");
						}
						else
						{
							strcat(fun_content,b);
							strcpy(b,"");
						}
						break;
					}
				}
			}
			else if(arg_type==4) //string
			{
				//sprintf(b,"\tldc \"%s\"\n",v1->string);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
				Push_arg("string",strlen("string"));
			}
			arg_type=-1;
		}
#line 2699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 1033 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 2705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 1035 "compiler_hw3.y" /* yacc.c:1646  */
    {
			Value *v2=&(yyvsp[0].val); //a
			int symbol_exist_or_not = -10; //not exist
			int type;
			Header *tmp=cur_header;
			symbol_exist_or_not = lookup_symbol(tmp,v2->id_name);
			while(tmp->pre!=NULL)
			{
				if(symbol_exist_or_not!=-10)
				{
					type=lookup_symbol_type(tmp,v2->id_name);
					if(lookup_symbol_type(tmp,v2->id_name)==0) //int
					{
						//sprintf(b,"\tiload %d\n",symbol_exist_or_not);
					}
					else if(lookup_symbol_type(tmp,v2->id_name)==1) //float
					{
						//sprintf(b,"\tfload %d\n",symbol_exist_or_not);
						integer_or_not=0;
					}
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
					break;
				}
				tmp=tmp->pre;
				symbol_exist_or_not = lookup_symbol(tmp,v2->id_name);
				if(symbol_exist_or_not!=-10)
				{
					type=lookup_symbol_type(tmp,v2->id_name);
					if(tmp->depth==0)
					{
						if(lookup_symbol_type(tmp,(yyval.val).id_name)==0||lookup_symbol_type(tmp,(yyval.val).id_name)==4||lookup_symbol_type(tmp,(yyval.val).id_name)==2) //int or string or bool
						{
							//sprintf(b,"\tgetstatic compiler_hw3/%s I\n",$$.id_name);
						}
						else if(lookup_symbol_type(tmp,(yyval.val).id_name)==1) //float
						{
							//sprintf(b,"\tgetstatic compiler_hw3/%s F\n",$$.id_name);
						}
						else if(lookup_symbol_type(tmp,(yyval.val).id_name)==2) //bool
						{
							//sprintf(b,"\tgetstatic compiler_hw3/%s Z\n",$$.id_name);
						}
						if(label_lock!=0)
						{
							strcat(label_content,b);
							strcpy(b,"");
						}
						else
						{
							strcat(fun_content,b);
							strcpy(b,"");
						}
						break;
					}
					if(lookup_symbol_type(tmp,v2->id_name)==0) //int
					{
						//sprintf(b,"\tiload %d\n",symbol_exist_or_not);
					}
					else if(lookup_symbol_type(tmp,v2->id_name)==1) //float
					{
						//sprintf(b,"\tfload %d\n",symbol_exist_or_not);
						integer_or_not=0;
					}
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
					break;
				}
			}
			if(label_lock!=0)
			{
				strcat(label_content,"\tldc 1.000000\n");
			}
			else
			{
				strcat(fun_content,"\tldc 1.000000\n");
			}
			if(type==0) //int
			{
				sprintf(b,"\tfadd\n\tf2i\n\tistore %d\n",symbol_exist_or_not);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
			}
			else //float
			{
				sprintf(b,"\tfadd\n\tfstore %d\n",symbol_exist_or_not);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
			}
			integer_or_not=1;
		}
#line 2833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 1159 "compiler_hw3.y" /* yacc.c:1646  */
    {
			Value *v2=&(yyvsp[0].val); //a
			int type;
			int symbol_exist_or_not = -10; //not exist
			Header *tmp=cur_header;
			symbol_exist_or_not = lookup_symbol(tmp,v2->id_name);
			while(tmp->pre!=NULL)
			{
				if(symbol_exist_or_not!=-10)
				{
					type=lookup_symbol_type(tmp,v2->id_name);
					if(lookup_symbol_type(tmp,v2->id_name)==0) //int
					{
						//sprintf(b,"\tiload %d\n",symbol_exist_or_not);
					}
					else if(lookup_symbol_type(tmp,v2->id_name)==1) //float
					{
						//sprintf(b,"\tfload %d\n",symbol_exist_or_not);
						integer_or_not=0;
					}
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
					break;
				}
				tmp=tmp->pre;
				symbol_exist_or_not = lookup_symbol(tmp,v2->id_name);
				if(symbol_exist_or_not!=-10)
				{
					type=lookup_symbol_type(tmp,v2->id_name);
					if(tmp->depth==0)
					{
						if(lookup_symbol_type(tmp,(yyval.val).id_name)==0||lookup_symbol_type(tmp,(yyval.val).id_name)==4||lookup_symbol_type(tmp,(yyval.val).id_name)==2) //int or string or bool
						{
							//sprintf(b,"\tgetstatic compiler_hw3/%s I\n",$$.id_name);
						}
						else if(lookup_symbol_type(tmp,(yyval.val).id_name)==1) //float
						{
							//sprintf(b,"\tgetstatic compiler_hw3/%s F\n",$$.id_name);
						}
						else if(lookup_symbol_type(tmp,(yyval.val).id_name)==2) //bool
						{
							//sprintf(b,"\tgetstatic compiler_hw3/%s Z\n",$$.id_name);
						}
						if(label_lock!=0)
						{
							strcat(label_content,b);
							strcpy(b,"");
						}
						else
						{
							strcat(fun_content,b);
							strcpy(b,"");
						}
						break;
					}
					if(lookup_symbol_type(tmp,v2->id_name)==0) //int
					{
						//sprintf(b,"\tiload %d\n",symbol_exist_or_not);
					}
					else if(lookup_symbol_type(tmp,v2->id_name)==1) //float
					{
						//sprintf(b,"\tfload %d\n",symbol_exist_or_not);
						integer_or_not=0;
					}
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
					break;
				}
			}
			if(label_lock!=0)
			{
				strcat(label_content,"\tldc 1.000000\n");
			}
			else
			{
				strcat(fun_content,"\tldc 1.000000\n");
			}
			if(type==0) //int 
			{
				sprintf(b,"\tfsub\n\tf2i\n\tistore %d\n",symbol_exist_or_not);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
			}
			else //float
			{
				sprintf(b,"\tfsub\n\tfstore %d\n",symbol_exist_or_not);
				if(label_lock!=0)
				{
					strcat(label_content,b);
					strcpy(b,"");
				}
				else
				{
					strcat(fun_content,b);
					strcpy(b,"");
				}
			}
			integer_or_not=1;
		}
#line 2961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 1295 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 2967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 1300 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 2973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 1302 "compiler_hw3.y" /* yacc.c:1646  */
    {
			if(label_lock!=0)
			{
				strcat(label_content,"\tfmul\n");
			}
			else
			{
				strcat(fun_content,"\tfmul\n");
			}			
		}
#line 2988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 1313 "compiler_hw3.y" /* yacc.c:1646  */
    {
			Value *v3=&(yyvsp[0].val);
			if(v3->i_val==0)
			{
				err=1;
        		sprintf(errmsg, "Variables of numbers that divided by zero.");
			}
			else if((int)v3->f_val==0&&v3->i_val==0)
			{
				err=1;
        		sprintf(errmsg, "Variables of numbers that divided by zero.");
			}
			//printf("VVVVVVV=%d\n",v3->i_val);
			//printf("VVVVVVV=%f\n",v3->f_val);
			if(label_lock!=0)
			{
				strcat(label_content,"\tfdiv\n");
			}
			else
			{
				strcat(fun_content,"\tfdiv\n");
			}
		}
#line 3016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 1337 "compiler_hw3.y" /* yacc.c:1646  */
    {
			Value *v1=&(yyvsp[-2].val);
			Value *v3=&(yyvsp[0].val);
			if((int)v1->f_val!=0||(int)v3->f_val!=0)
			{
				err=1;
        		sprintf(errmsg, "Modulo operator(%) with floating point operands.");
			}
			//printf("VVVVVVV=%d\n",v1->i_val);
			//printf("VVVVVVV=%f\n",v1->f_val);
			//printf("VVVVVVV=%d\n",v3->i_val);
			//printf("VVVVVVV=%f\n",v3->f_val);
			if(label_lock!=0)
			{
				strcat(label_content,"\tfrem\n");
			}
			else
			{
				strcat(fun_content,"\tfrem\n");
			}
		}
#line 3042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 1361 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 3048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 1363 "compiler_hw3.y" /* yacc.c:1646  */
    {
			Value *v3=&(yyvsp[0].val); //6
			if(integer_or_not==0)
			{
				//sprintf(b,"\tldc %f\n",v3->f_val);
				//strcat(fun_content,b);
				//strcpy(b,"");
				if(label_lock!=0)
				{
					strcat(label_content,"\tfadd\n");
				}
				else
				{
					strcat(fun_content,"\tfadd\n");
				}
			}
			else if(integer_or_not==1)
			{
				//sprintf(b,"\tldc %d\n",v3->i_val);
				//strcat(fun_content,b);
				//strcpy(b,"");
				if(label_lock!=0)
				{
					strcat(label_content,"\tfadd\n");
				}
				else
				{
					strcat(fun_content,"\tfadd\n");
				}
			}
			integer_or_not=1;
		}
#line 3085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 1396 "compiler_hw3.y" /* yacc.c:1646  */
    {
			Value *v3=&(yyvsp[0].val); //6
			if(integer_or_not==0)
			{
				//sprintf(b,"\tldc %f\n",v3->f_val);
				//strcat(fun_content,b);
				//strcpy(b,"");
				if(label_lock!=0)
				{
					strcat(label_content,"\tfsub\n");
				}
				else
				{
					strcat(fun_content,"\tfsub\n");
				}
			}
			else if(integer_or_not==1)
			{
				//sprintf(b,"\tldc %d\n",v3->i_val);
				//strcat(fun_content,b);
				//strcpy(b,"");
				if(label_lock!=0)
				{
					strcat(label_content,"\tfsub\n");
				}
				else
				{
					strcat(fun_content,"\tfsub\n");
				}
			}
			integer_or_not=1;
		}
#line 3122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 1431 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 3128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 1435 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 3134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 1437 "compiler_hw3.y" /* yacc.c:1646  */
    {
			Value *v1=&(yyvsp[-2].val); //a
			Value *v3=&(yyvsp[0].val); //6
			if(while_relation==1)
			{
				//if(integer_or_not==1)
				//{
					//sprintf(b,"\tldc %d\n\tisub\n\tiflt LABEL_TRUE\n\tgoto LABEL_FALSE\nLABEL_TRUE:\n",v3->i_val);
					sprintf(b,"\tfsub\n\tf2i\n\tiflt LABEL_TRUE\n\tgoto LABEL_FALSE\nLABEL_TRUE:\n");
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
				//}
				/*
				else if(integer_or_not==0)
				{
					//sprintf(b,"\tldc %f\n\tfsub\n\tiflt LABEL_TRUE\n\tgoto LABEL_FALSE\nLABEL_TRUE:\n",v3->f_val);
					sprintf(b,"\tfsub\n\tiflt LABEL_TRUE\n\tgoto LABEL_FALSE\nLABEL_TRUE:\n");
					strcat(fun_content,b);
					strcpy(b,"");
				}
				*/
			}
			else //if-else
			{
				//if(integer_or_not==1)
				//{
					//sprintf(b,"\tldc %d\n\tisub\n\tiflt LABEL_TRUE\n\tgoto LABEL_FALSE\nLABEL_TRUE:\n",v3->i_val);
					sprintf(b,"\tfsub\n\tf2i\n\tiflt LABEL_TRUE\n");
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
					label_lock=1;
					Push("\tgoto EXIT_0\nLABEL_TRUE:\n",strlen("\tgoto EXIT_0\nLABEL_TRUE:\n"));
				//}
				/*
				else if(integer_or_not==0)
				{
					//sprintf(b,"\tldc %f\n\tfsub\n\tiflt LABEL_TRUE\n\tgoto LABEL_FALSE\nLABEL_TRUE:\n",v3->f_val);
					sprintf(b,"\tfsub\n\tiflt LABEL_TRUE\n\tgoto LABEL_FALSE\nLABEL_TRUE:\n");
					strcat(fun_content,b);
					strcpy(b,"");
					label_lock=1;
					Push("\tgoto LABEL_FALSE\nLABEL_TRUE:\n",strlen("\tgoto LABEL_FALSE\nLABEL_TRUE:\n"));
				}
				*/				
			}
			integer_or_not=1;
		}
#line 3202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 1501 "compiler_hw3.y" /* yacc.c:1646  */
    {
			Value *v1=&(yyvsp[-2].val); //a
			Value *v3=&(yyvsp[0].val); //6
			if(while_relation==0)
			{
				//if(integer_or_not==1)
				//{
					//sprintf(b,"\tldc %d\n\tisub\n\tifgt LABEL_GT\n",v3->i_val);
					sprintf(b,"\tfsub\n\tf2i\n\tifgt LABEL_GT\n");
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
					label_lock=1;
					Push("\tgoto EXIT_0\nLABEL_GT:\n",strlen("\tgoto EXIT_0\nLABEL_GT:\n"));
				//}
				/*
				else if(integer_or_not==0)
				{
					//sprintf(b,"\tldc %f\n\tfsub\n\tifgt LABEL_GT\n",v3->f_val);
					sprintf(b,"\tfsub\n\tifgt LABEL_GT\n");
					strcat(fun_content,b);
					strcpy(b,"");
					label_lock=1;
					Push("\tgoto EXIT_0\nLABEL_GT:\n",strlen("\tgoto EXIT_0\nLABEL_GT:\n"));
				}
				*/
			}
			else
			{
				//if(integer_or_not==1)
				//{
					//sprintf(b,"\tldc %d\n\tisub\n\tifgt LABEL_GT\n",v3->i_val);
					sprintf(b,"\tfsub\n\tf2i\n\tifgt LABEL_GT\n\tgoto EXIT_0\nLABEL_GT:\n");
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
				//}
				/*
				else if(integer_or_not==0)
				{
					//sprintf(b,"\tldc %f\n\tfsub\n\tifgt LABEL_GT\n",v3->f_val);
					sprintf(b,"\tfsub\n\tifgt LABEL_GT\n\tgoto EXIT_0\nLABEL_GT:\n");
					strcat(fun_content,b);
					strcpy(b,"");
				}	
				*/			
			}
			integer_or_not=1;
		}
#line 3270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 1565 "compiler_hw3.y" /* yacc.c:1646  */
    {	//<=
			Value *v1=&(yyvsp[-2].val); //a
			Value *v3=&(yyvsp[0].val); //6
			if(while_relation==0)
			{
				//if(integer_or_not==1)
				//{
					sprintf(b,"\tfsub\n\tf2i\n\tifle LABEL_LE\n");
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
					label_lock=1;
					Push("\tgoto EXIT_0\nLABEL_LE:\n",strlen("\tgoto EXIT_0\nLABEL_LE:\n"));
				//}
				/*
				else if(integer_or_not==0)
				{
					sprintf(b,"\tfsub\n\tifle LABEL_LE\n");
					strcat(fun_content,b);
					strcpy(b,"");
					label_lock=1;
					Push("\tgoto EXIT_0\nLABEL_LE:\n",strlen("\tgoto EXIT_0\nLABEL_LE:\n"));
				}
				*/
			}
			else
			{
				//if(integer_or_not==1)
				//{
					sprintf(b,"\tfsub\n\tf2i\n\tifle LABEL_LE\n\tgoto EXIT_0\nLABEL_LE:\n");
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
				//}
				/*
				else if(integer_or_not==0)
				{
					sprintf(b,"\tfsub\n\tifle LABEL_LE\n\tgoto EXIT_0\nLABEL_LE:\n");
					strcat(fun_content,b);
					strcpy(b,"");
				}
				*/				
			}
			integer_or_not=1;
		}
#line 3334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 1625 "compiler_hw3.y" /* yacc.c:1646  */
    {	//>=
			Value *v1=&(yyvsp[-2].val); //a
			Value *v3=&(yyvsp[0].val); //6
			if(while_relation==0)
			{
				//if(integer_or_not==1)
				//{
					sprintf(b,"\tfsub\n\tf2i\n\tifge LABEL_GE\n");
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
					label_lock=1;
					Push("\tgoto EXIT_0\nLABEL_GE:\n",strlen("\tgoto EXIT_0\nLABEL_GE:\n"));
				//}
				/*
				else if(integer_or_not==0)
				{
					sprintf(b,"\tfsub\n\tifge LABEL_GE\n");
					strcat(fun_content,b);
					strcpy(b,"");
					label_lock=1;
					Push("\tgoto EXIT_0\nLABEL_GE:\n",strlen("\tgoto EXIT_0\nLABEL_GE:\n"));
				}
				*/
			}
			else
			{
				//if(integer_or_not==1)
				//{
					sprintf(b,"\tfsub\n\tf2i\n\tifge LABEL_GE\n\tgoto EXIT_0\nLABEL_GE:\n");
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
				//}
				/*
				else if(integer_or_not==0)
				{
					sprintf(b,"\tfsub\n\tifge LABEL_GE\n\tgoto EXIT_0\nLABEL_GE:\n");
					strcat(fun_content,b);
					strcpy(b,"");
				}	
				*/			
			}
			integer_or_not=1;
		}
#line 3398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 1687 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 3404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 1689 "compiler_hw3.y" /* yacc.c:1646  */
    {
			Value *v1=&(yyvsp[-2].val); //a
			Value *v3=&(yyvsp[0].val); //40
			if(while_relation==0)
			{
				//if(integer_or_not==1)
				//{
					//sprintf(b,"\tldc %d\n\tisub\n\tifeq LABEL_EQ\n",v3->i_val);
					sprintf(b,"\tfsub\n\tf2i\n\tifeq LABEL_EQ\n");
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
					label_lock=1;
					Push("\tgoto EXIT_0\nLABEL_EQ:\n",strlen("\tgoto EXIT_0\nLABEL_EQ:\n"));
				//}
				/*
				else if(integer_or_not==0)
				{
					//sprintf(b,"\tldc %f\n\tfsub\n\tifeq LABEL_EQ\n",v3->f_val);
					sprintf(b,"\tfsub\n\tifeq LABEL_EQ\n");
					strcat(fun_content,b);
					strcpy(b,"");
					label_lock=1;
					Push("\tgoto EXIT_0\nLABEL_EQ:\n",strlen("\tgoto EXIT_0\nLABEL_EQ:\n"));
				}
				*/
			}
			else
			{
				//if(integer_or_not==1)
				//{
					//sprintf(b,"\tldc %d\n\tisub\n\tifeq LABEL_EQ\n",v3->i_val);
					sprintf(b,"\tfsub\n\tf2i\n\tifeq LABEL_EQ\n\tgoto EXIT_0\nLABEL_EQ:\n");
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
				//}
				/*
				else if(integer_or_not==0)
				{
					//sprintf(b,"\tldc %f\n\tfsub\n\tifeq LABEL_EQ\n",v3->f_val);
					sprintf(b,"\tfsub\n\tifeq LABEL_EQ\n\tgoto EXIT_0\nLABEL_EQ:\n");
					strcat(fun_content,b);
					strcpy(b,"");
				}	
				*/			
			}
			integer_or_not=1;
		}
#line 3472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1753 "compiler_hw3.y" /* yacc.c:1646  */
    {
			Value *v1=&(yyvsp[-2].val); //a
			Value *v3=&(yyvsp[0].val); //40
			if(while_relation==0)
			{
				//if(integer_or_not==1)
				//{
					sprintf(b,"\tfsub\n\tf2i\n\tifne LABEL_NE\n");
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
					label_lock=1;
					Push("\tgoto EXIT_0\nLABEL_NE:\n",strlen("\tgoto EXIT_0\nLABEL_NE:\n"));
				//}
				/*
				else if(integer_or_not==0)
				{
					sprintf(b,"\tfsub\n\tifne LABEL_NE\n");
					strcat(fun_content,b);
					strcpy(b,"");
					label_lock=1;
					Push("\tgoto EXIT_0\nLABEL_NE:\n",strlen("\tgoto EXIT_0\nLABEL_NE:\n"));
				}
				*/
			}
			else
			{
				//if(integer_or_not==1)
				//{
					sprintf(b,"\tfsub\n\tf2i\n\tifne LABEL_NE\n\tgoto EXIT_0\nLABEL_NE:\n");
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
				//}
				/*
				else if(integer_or_not==0)
				{
					sprintf(b,"\tfsub\n\tifne LABEL_NE\n\tgoto EXIT_0\nLABEL_NE:\n");
					strcat(fun_content,b);
					strcpy(b,"");
				}	
				*/			
			}
			integer_or_not=1;
		}
#line 3536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 1815 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 3542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 1820 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 3548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1825 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 3554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 1830 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 3560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1835 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 3566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1840 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 3572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1845 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 3578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1847 "compiler_hw3.y" /* yacc.c:1646  */
    {
		// a = 6
		Value *v1=&(yyvsp[-2].val); //a
		Value *v3=&(yyvsp[0].val); //6

		int symbol_exist_or_not = -10; //not exist
		int type;
		Header *tmp=cur_header;
		symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
		while(tmp->pre!=NULL)
		{
			if(symbol_exist_or_not!=-10)
			{
				type=lookup_symbol_type(tmp,v1->id_name);
				break;
			}
			tmp=tmp->pre;
			symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
			if(symbol_exist_or_not!=-10)
			{
				type=lookup_symbol_type(tmp,v1->id_name);
				break;
			}
		}

		if(type==0) //int a; a=2;
		{
			//sprintf(b,"\tiload %d\n\tldc %d\n\tiadd\n\tistore %d\n", reg_num,v3->i_val,reg_num);
			sprintf(b,"\tf2i\n\tistore %d\n",symbol_exist_or_not);
			if(label_lock!=0)
			{
				strcat(label_content,b);
				strcpy(b,"");
			}
			else
			{
				strcat(fun_content,b);
				strcpy(b,"");
			}
		}
		else //float a; a=2;
		{
			//sprintf(b,"\tiload %d\n\tldc %d\n\tiadd\n\tistore %d\n", reg_num,v3->i_val,reg_num);
			sprintf(b,"\tfstore %d\n",symbol_exist_or_not);
			if(label_lock!=0)
			{
				strcat(label_content,b);
				strcpy(b,"");
			}
			else
			{
				strcat(fun_content,b);
				strcpy(b,"");
			}
		}
	}
#line 3639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1904 "compiler_hw3.y" /* yacc.c:1646  */
    {
		// a += 6
		Value *v1=&(yyvsp[-2].val); //a
		Value *v3=&(yyvsp[0].val); //6

		int symbol_exist_or_not = -10; //not exist
		int type;
		Header *tmp=cur_header;
		symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
		while(tmp->pre!=NULL)
		{
			if(symbol_exist_or_not!=-10)
			{
				type=lookup_symbol_type(tmp,v1->id_name);
				break;
			}
			tmp=tmp->pre;
			symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
			if(symbol_exist_or_not!=-10)
			{
				type=lookup_symbol_type(tmp,v1->id_name);
				break;
			}
		}

		if(type==0) //int a; a+=2;
		{
			//sprintf(b,"\tiload %d\n\tldc %d\n\tiadd\n\tistore %d\n", reg_num,v3->i_val,reg_num);
			sprintf(b,"\tfadd\n\tf2i\n\tistore %d\n",symbol_exist_or_not);
			if(label_lock!=0)
			{
				strcat(label_content,b);
				strcpy(b,"");
			}
			else
			{
				strcat(fun_content,b);
				strcpy(b,"");
			}
		}
		else //float a; a+=2;
		{
			//sprintf(b,"\tiload %d\n\tldc %d\n\tiadd\n\tistore %d\n", reg_num,v3->i_val,reg_num);
			sprintf(b,"\tfadd\n\tfstore %d\n",symbol_exist_or_not);
			if(label_lock!=0)
			{
				strcat(label_content,b);
				strcpy(b,"");
			}
			else
			{
				strcat(fun_content,b);
				strcpy(b,"");
			}
		}
	}
#line 3700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1961 "compiler_hw3.y" /* yacc.c:1646  */
    {
		// a -= 6
		Value *v1=&(yyvsp[-2].val); //a
		Value *v3=&(yyvsp[0].val); //6

		int symbol_exist_or_not = -10; //not exist
		int type;
		Header *tmp=cur_header;
		symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
		while(tmp->pre!=NULL)
		{
			if(symbol_exist_or_not!=-10)
			{
				type=lookup_symbol_type(tmp,v1->id_name);
				break;
			}
			tmp=tmp->pre;
			symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
			if(symbol_exist_or_not!=-10)
			{
				type=lookup_symbol_type(tmp,v1->id_name);
				break;
			}
		}

		if(type==0) //int a; a-=2;
		{
			//sprintf(b,"\tiload %d\n\tldc %d\n\tiadd\n\tistore %d\n", reg_num,v3->i_val,reg_num);
			sprintf(b,"\tfsub\n\tf2i\n\tistore %d\n",symbol_exist_or_not);
			if(label_lock!=0)
			{
				strcat(label_content,b);
				strcpy(b,"");
			}
			else
			{
				strcat(fun_content,b);
				strcpy(b,"");
			}
		}
		else //float a; a-=2;
		{
			//sprintf(b,"\tiload %d\n\tldc %d\n\tiadd\n\tistore %d\n", reg_num,v3->i_val,reg_num);
			sprintf(b,"\tfsub\n\tfstore %d\n",symbol_exist_or_not);
			if(label_lock!=0)
			{
				strcat(label_content,b);
				strcpy(b,"");
			}
			else
			{
				strcat(fun_content,b);
				strcpy(b,"");
			}
		}
	}
#line 3761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 2018 "compiler_hw3.y" /* yacc.c:1646  */
    {
		// a *= 6
		Value *v1=&(yyvsp[-2].val); //a
		Value *v3=&(yyvsp[0].val); //6

		int symbol_exist_or_not = -10; //not exist
		int type;
		Header *tmp=cur_header;
		symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
		while(tmp->pre!=NULL)
		{
			if(symbol_exist_or_not!=-10)
			{
				type=lookup_symbol_type(tmp,v1->id_name);
				break;
			}
			tmp=tmp->pre;
			symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
			if(symbol_exist_or_not!=-10)
			{
				type=lookup_symbol_type(tmp,v1->id_name);
				break;
			}
		}

		if(type==0) //int a; a*=2;
		{
			//sprintf(b,"\tiload %d\n\tldc %d\n\tiadd\n\tistore %d\n", reg_num,v3->i_val,reg_num);
			sprintf(b,"\tfmul\n\tf2i\n\tistore %d\n",symbol_exist_or_not);
			if(label_lock!=0)
			{
				strcat(label_content,b);
				strcpy(b,"");
			}
			else
			{
				strcat(fun_content,b);
				strcpy(b,"");
			}
		}
		else //float a; a*=2;
		{
			//sprintf(b,"\tiload %d\n\tldc %d\n\tiadd\n\tistore %d\n", reg_num,v3->i_val,reg_num);
			sprintf(b,"\tfmul\n\tfstore %d\n",symbol_exist_or_not);
			if(label_lock!=0)
			{
				strcat(label_content,b);
				strcpy(b,"");
			}
			else
			{
				strcat(fun_content,b);
				strcpy(b,"");
			}
		}
	}
#line 3822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 2075 "compiler_hw3.y" /* yacc.c:1646  */
    {
		// a /= 6
		Value *v1=&(yyvsp[-2].val); //a
		Value *v3=&(yyvsp[0].val); //6
		if(v3->i_val==0)
		{
			err=1;
        	sprintf(errmsg, "Variables of numbers that divided by zero.");
		}
		else if((int)v3->f_val==0&&v3->i_val==0)
		{
			err=1;
        	sprintf(errmsg, "Variables of numbers that divided by zero.");
		}

		int symbol_exist_or_not = -10; //not exist
		int type;
		Header *tmp=cur_header;
		symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
		while(tmp->pre!=NULL)
		{
			if(symbol_exist_or_not!=-10)
			{
				type=lookup_symbol_type(tmp,v1->id_name);
				break;
			}
			tmp=tmp->pre;
			symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
			if(symbol_exist_or_not!=-10)
			{
				type=lookup_symbol_type(tmp,v1->id_name);
				break;
			}
		}

		if(type==0) //int a; a/=2;
		{
			//sprintf(b,"\tiload %d\n\tldc %d\n\tiadd\n\tistore %d\n", reg_num,v3->i_val,reg_num);
			sprintf(b,"\tfdiv\n\tf2i\n\tistore %d\n",symbol_exist_or_not);
			if(label_lock!=0)
			{
				strcat(label_content,b);
				strcpy(b,"");
			}
			else
			{
				strcat(fun_content,b);
				strcpy(b,"");
			}
		}
		else //float a; a/=2;
		{
			//sprintf(b,"\tiload %d\n\tldc %d\n\tiadd\n\tistore %d\n", reg_num,v3->i_val,reg_num);
			sprintf(b,"\tfdiv\n\tfstore %d\n",symbol_exist_or_not);
			if(label_lock!=0)
			{
				strcat(label_content,b);
				strcpy(b,"");
			}
			else
			{
				strcat(fun_content,b);
				strcpy(b,"");
			}
		}
	}
#line 3893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 2142 "compiler_hw3.y" /* yacc.c:1646  */
    {
		// a %= 6
		Value *v1=&(yyvsp[-2].val); //a
		Value *v3=&(yyvsp[0].val); //6
		if((int)v3->f_val!=0)
		{
			err=1;
        	sprintf(errmsg, "Modulo operator(%) with floating point operands.");
		}

		int symbol_exist_or_not = -10; //not exist
		int type;
		Header *tmp=cur_header;
		symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
		while(tmp->pre!=NULL)
		{
			if(symbol_exist_or_not!=-10)
			{
				type=lookup_symbol_type(tmp,v1->id_name);
				break;
			}
			tmp=tmp->pre;
			symbol_exist_or_not = lookup_symbol(tmp,v1->id_name);
			if(symbol_exist_or_not!=-10)
			{
				type=lookup_symbol_type(tmp,v1->id_name);
				break;
			}
		}

		if(type==0) //int a; a%=2;
		{
			//sprintf(b,"\tiload %d\n\tldc %d\n\tiadd\n\tistore %d\n", reg_num,v3->i_val,reg_num);
			sprintf(b,"\tfrem\n\tf2i\n\tistore %d\n",symbol_exist_or_not);
			if(label_lock!=0)
			{
				strcat(label_content,b);
				strcpy(b,"");
			}
			else
			{
				strcat(fun_content,b);
				strcpy(b,"");
			}
		}
		else //float a; a%=2;
		{
			err=1;
        	sprintf(errmsg, "Modulo operator(%) with floating point operands.");
		}
	}
#line 3949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 2196 "compiler_hw3.y" /* yacc.c:1646  */
    {err=1; yacc_handle_syntax=0;}
#line 3955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 2206 "compiler_hw3.y" /* yacc.c:1646  */
    {
			(yyval.val) = yylval.val;
			sprintf(b,"\tldc \"%s\"\n\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n\tswap\n\tinvokevirtual java/io/PrintStream/println(Ljava/lang/String;)V\n",(yyval.val).string);
			if(label_lock!=0)
			{
				strcat(label_content,b);
				strcpy(b,"");
			}
			else
			{
				strcat(fun_content,b);
				strcpy(b,"");
			}
		}
#line 3974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 2221 "compiler_hw3.y" /* yacc.c:1646  */
    {
			(yyval.val) = yylval.val;
			sprintf(b,"\tldc %d\n\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n\tswap\n\tinvokevirtual java/io/PrintStream/println(I)V\n",(yyval.val).i_val);
			if(label_lock!=0)
			{
				strcat(label_content,b);
				strcpy(b,"");
			}
			else
			{
				strcat(fun_content,b);
				strcpy(b,"");
			}
		}
#line 3993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 2236 "compiler_hw3.y" /* yacc.c:1646  */
    {
			(yyval.val) = yylval.val;
			sprintf(b,"\tldc %f\n\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n\tswap\n\tinvokevirtual java/io/PrintStream/println(F)V\n",(yyval.val).f_val);
			if(label_lock!=0)
			{
				strcat(label_content,b);
				strcpy(b,"");
			}
			else
			{
				strcat(fun_content,b);
				strcpy(b,"");
			}
		}
#line 4012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 2251 "compiler_hw3.y" /* yacc.c:1646  */
    {
			(yyval.val) = yylval.val;
			int symbol_exist_or_not = -10; //not exist
			Header *tmp=cur_header;
			symbol_exist_or_not = lookup_symbol(tmp,(yyval.val).id_name);
			while(tmp->pre!=NULL)
			{
				if(symbol_exist_or_not!=-10)
				{
					if(lookup_symbol_type(tmp,(yyval.val).id_name)==0||lookup_symbol_type(tmp,(yyval.val).id_name)==4||lookup_symbol_type(tmp,(yyval.val).id_name)==2) //int or string or bool
						sprintf(b,"\tiload %d\n\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n\tswap\n\tinvokevirtual java/io/PrintStream/println(I)V\n",symbol_exist_or_not);
					else if(lookup_symbol_type(tmp,(yyval.val).id_name)==1) //float
						sprintf(b,"\tfload %d\n\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n\tswap\n\tinvokevirtual java/io/PrintStream/println(F)V\n",symbol_exist_or_not);
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
					break;
				}
				tmp=tmp->pre;
				symbol_exist_or_not = lookup_symbol(tmp,(yyval.val).id_name);
				if(symbol_exist_or_not!=-10)
				{
					if(tmp->depth==0)
					{
						if(lookup_symbol_type(tmp,(yyval.val).id_name)==0||lookup_symbol_type(tmp,(yyval.val).id_name)==4||lookup_symbol_type(tmp,(yyval.val).id_name)==2) //int or string or bool
							sprintf(b,"\tgetstatic compiler_hw3/%s I\n\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n\tswap\n\tinvokevirtual java/io/PrintStream/println(I)V\n",(yyval.val).id_name,symbol_exist_or_not);
						else if(lookup_symbol_type(tmp,(yyval.val).id_name)==1) //float
							sprintf(b,"\tgetstatic compiler_hw3/%s F\n\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n\tswap\n\tinvokevirtual java/io/PrintStream/println(F)V\n",(yyval.val).id_name,symbol_exist_or_not);
						else if(lookup_symbol_type(tmp,(yyval.val).id_name)==2) //bool
							sprintf(b,"\tgetstatic compiler_hw3/%s Z\n\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n\tswap\n\tinvokevirtual java/io/PrintStream/println(I)V\n",(yyval.val).id_name,symbol_exist_or_not);
						if(label_lock!=0)
						{
							strcat(label_content,b);
							strcpy(b,"");
						}
						else
						{
							strcat(fun_content,b);
							strcpy(b,"");
						}
						break;
					}
					if(lookup_symbol_type(tmp,(yyval.val).id_name)==0||lookup_symbol_type(tmp,(yyval.val).id_name)==4||lookup_symbol_type(tmp,(yyval.val).id_name)==2) //int or string or bool
					{
						sprintf(b,"\tiload %d\n\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n\tswap\n\tinvokevirtual java/io/PrintStream/println(I)V\n",symbol_exist_or_not);
					}
					else if(lookup_symbol_type(tmp,(yyval.val).id_name)==1) //float
						sprintf(b,"\tfload %d\n\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n\tswap\n\tinvokevirtual java/io/PrintStream/println(F)V\n",symbol_exist_or_not);
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
					break;
				}
			}
			if(symbol_exist_or_not == -10)
			{
				err=1;
        		sprintf(errmsg, "Undeclared variable %s", (yyval.val).id_name);
			} 
		}
#line 4091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 2334 "compiler_hw3.y" /* yacc.c:1646  */
    {
			Value *v1=&(yyvsp[-2].val); //int
		  	Value *v2=&(yyvsp[-1].val); //a
			insert_symbol(cur_header,v1,v2,"variable");

			if(cur_header->depth==0) //global var
			{
				if(v1->type==I_T)
					fprintf(java_assembly_code,".field public static %s I\n",v2->id_name);
				else if(v1->type==F_T)
					fprintf(java_assembly_code,".field public static %s F\n",v2->id_name);
				else if(v1->type==B_T)
					fprintf(java_assembly_code,".field public static %s Z\n",v2->id_name);
			}
			else //local var
			{
				int reg_num=lookup_symbol(cur_header,v2->id_name);
				if(v1->type==I_T)
				{
					sprintf(b,"\tldc 0\n\tistore %d\n",reg_num);
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
				}
				else if(v1->type==F_T)
				{
					sprintf(b,"\tldc 0.0\n\tfstore %d\n",reg_num);
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
				}
			}
		}
#line 4143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 2382 "compiler_hw3.y" /* yacc.c:1646  */
    {
			Value *v1=&(yyvsp[-4].val); //int 
			Value *v2=&(yyvsp[-3].val); //a
			Value *v4=&(yyvsp[-1].val); //3
			insert_symbol(cur_header,v1,v2,"variable");

			if(cur_header->depth==0) //global var
			{
				if(v1->type==I_T)
				{
					if(integer_or_not==1)
						fprintf(java_assembly_code,".field public static %s I = %d\n",v2->id_name,v4->i_val);
					else
					{
						int a=(int)v4->f_val;
						fprintf(java_assembly_code,".field public static %s I = %d\n",v2->id_name,a);
						integer_or_not=1;
					}
				}
				else if(v1->type==F_T)
					fprintf(java_assembly_code,".field public static %s F = %f\n\n",v2->id_name,v4->f_val);
				else if(v1->type==B_T)
					fprintf(java_assembly_code,".field public static %s Z = %d\n",v2->id_name,v4->i_val);
			}
			else //local var
			{
				int reg_num=lookup_symbol(cur_header,v2->id_name);
				if(v1->type==I_T)
				{
					if(integer_or_not==1)
					{
						//sprintf(b,"\tldc %d\n\tistore %d\n",v4->i_val,reg_num);
						sprintf(b,"\tf2i\n\tistore %d\n",reg_num);
					}
						
					else
					{
						//int a=(int)v4->f_val;
						//sprintf(b,"\tldc %d\n\tistore %d\n",a,reg_num);
						sprintf(b,"\tf2i\n\tistore %d\n",reg_num);
						integer_or_not=1;
					}
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
				}
				else if(v1->type==F_T)
				{
					sprintf(b,"\tfstore %d\n",reg_num);
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
				}
				else if(v1->type==S_T)
				{
					sprintf(b,"\tastore %d\n",reg_num);
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
				}
				else if(v1->type==B_T)
				{
					sprintf(b,"\tistore %d\n",reg_num);
					if(label_lock!=0)
					{
						strcat(label_content,b);
						strcpy(b,"");
					}
					else
					{
						strcat(fun_content,b);
						strcpy(b,"");
					}
				}
			}
		}
#line 4245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 2483 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 4251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 2488 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 4257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 2493 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 4263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 2497 "compiler_hw3.y" /* yacc.c:1646  */
    { (yyval.val) = yylval.val; }
#line 4269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 2498 "compiler_hw3.y" /* yacc.c:1646  */
    { (yyval.val) = yylval.val; }
#line 4275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 2499 "compiler_hw3.y" /* yacc.c:1646  */
    { (yyval.val) = yylval.val; }
#line 4281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 2500 "compiler_hw3.y" /* yacc.c:1646  */
    { (yyval.val) = yylval.val; }
#line 4287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 2501 "compiler_hw3.y" /* yacc.c:1646  */
    { (yyval.val) = yylval.val; }
#line 4293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 2511 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 4299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 2515 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val) = yylval.val;}
#line 4305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 2519 "compiler_hw3.y" /* yacc.c:1646  */
    {new_scope();}
#line 4311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 2521 "compiler_hw3.y" /* yacc.c:1646  */
    {new_scope();}
#line 4317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2539 "compiler_hw3.y" /* yacc.c:1646  */
    {Value *v1=&(yyvsp[-1].val);Value *v2=&(yyvsp[0].val); insert_symbol(cur_header,v1,v2,"parameter");}
#line 4323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2573 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 4329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2597 "compiler_hw3.y" /* yacc.c:1646  */
    {new_scope();}
#line 4335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2597 "compiler_hw3.y" /* yacc.c:1646  */
    {right_compound=1;header_rec=cur_header;}
#line 4341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2621 "compiler_hw3.y" /* yacc.c:1646  */
    {label_lock=1; if(label_lock!=0) {strcat(label_content,Pop());}}
#line 4347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2622 "compiler_hw3.y" /* yacc.c:1646  */
    {
			if(strcmp(label_content,"")==0) 
			{
				strcat(fun_content,"\tgoto EXIT_0\nEXIT_0:\n");
			}

			strcat(fun_content,label_content); 
			strcpy(label_content,"");
			label_lock=0;
			if(else_tr==0)
			{
				strcat(fun_content,"EXIT_0:\n");
			}
		}
#line 4366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2638 "compiler_hw3.y" /* yacc.c:1646  */
    {label_lock=0;else_tr=1;}
#line 4372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2639 "compiler_hw3.y" /* yacc.c:1646  */
    {
			else_tr=0;
			/*
			if(strcmp(label_content,"")==0) 
			{
				strcat(fun_content,"\tgoto EXIT_0\nEXIT_0:\n");
			}
			strcat(fun_content,label_content); 
			strcpy(label_content,"");
			label_lock=0;
			*/
		}
#line 4389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2654 "compiler_hw3.y" /* yacc.c:1646  */
    {strcat(fun_content,"LABEL_BEGIN:\n"); while_relation=1;}
#line 4395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2654 "compiler_hw3.y" /* yacc.c:1646  */
    {strcat(fun_content,"\tgoto LABEL_BEGIN\nLABEL_FALSE:\n\tgoto EXIT_0\nEXIT_0:\n"); while_relation=0;}
#line 4401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2655 "compiler_hw3.y" /* yacc.c:1646  */
    {/*new_scope();*/}
#line 4407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2655 "compiler_hw3.y" /* yacc.c:1646  */
    {/*int lineno=yylineno+1;printf("%d: %s\n", lineno, buf);printline_or_not=0;dump_scope();*/}
#line 4413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2656 "compiler_hw3.y" /* yacc.c:1646  */
    {/*new_scope();*/}
#line 4419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 2656 "compiler_hw3.y" /* yacc.c:1646  */
    {/*int lineno=yylineno+1;printf("%d: %s\n", lineno, buf);printline_or_not=0;dump_scope();*/}
#line 4425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 2663 "compiler_hw3.y" /* yacc.c:1646  */
    {
			if(label_lock!=0)
			{
				strcat(label_content,"\treturn\n");
			}
			else
			{
				strcat(fun_content,"\treturn\n");
			}
		}
#line 4440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 2674 "compiler_hw3.y" /* yacc.c:1646  */
    {
			Value *v2=&(yyvsp[-1].val); //a

			if(integer_or_not==1)
			{
				if(label_lock!=0)
				{
					strcat(label_content,"\tf2i\n\tireturn\n");
				}
				else
				{
					strcat(fun_content,"\tf2i\n\tireturn\n");
				}
			}
			else if(integer_or_not==0)
			{
				if(label_lock!=0)
				{
					strcat(label_content,"\tfreturn\n");
				}
				else
				{
					strcat(fun_content,"\tfreturn\n");
				}
				integer_or_not=1;
			}
		}
#line 4472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 2709 "compiler_hw3.y" /* yacc.c:1646  */
    {/*int lineno=yylineno+1;printf("%d: %s\n", lineno, buf);printline_or_not=0;dump_scope();*/}
#line 4478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 2714 "compiler_hw3.y" /* yacc.c:1646  */
    {strcpy(fun_content,"");}
#line 4484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 2715 "compiler_hw3.y" /* yacc.c:1646  */
    { 
			Value *v1=&(yyvsp[-3].val); //void
			Value *v2=&(yyvsp[-2].val); //main
			insert_symbol_forfun(cur_header,v1,v2,"function");
			if(strcmp(v2->id_name,"main")==0)
			{
				if(v1->type==I_T)
					fprintf(java_assembly_code,".method public static main([Ljava/lang/String;)I\n.limit stack 50\n.limit locals 50\n");
				else if(v1->type==F_T)
					fprintf(java_assembly_code,".method public static main([Ljava/lang/String;)F\n.limit stack 50\n.limit locals 50\n");
				else if(v1->type==B_T)
					fprintf(java_assembly_code,".method public static main([Ljava/lang/String;)Z\n.limit stack 50\n.limit locals 50\n");
				else if(v1->type==V_T)
					fprintf(java_assembly_code,".method public static main([Ljava/lang/String;)V\n.limit stack 50\n.limit locals 50\n");
			}
			else
			{
				char attr[51]="";
				//lookup function attribute
				Header *t=cur_header;
				while(t->pre!=NULL)
				{
					t=t->pre;
				}
				//t is header root
				Entry *cur = t->table_root;
    			while (cur != NULL)
				{
        			if (cur->id_ptr!=NULL&&strcmp(cur->id_ptr->id_name, v2->id_name) == 0)
					{
						if(strcmp(cur->Attribute,"")!=0)
						{
							if(cur->Attribute[0]=='i')
								strcat(attr,"I");
							else if(cur->Attribute[0]=='f')
								strcat(attr,"F");
							else if(cur->Attribute[0]=='b')
								strcat(attr,"Z");
							
							int next_will_write_or_not=0;
							for(int i=1;cur->Attribute[i]!='\0';i++)
							{
								if(next_will_write_or_not==1)
								{
									next_will_write_or_not=0;
									if(cur->Attribute[0]=='i')
										strcat(attr," I");
									else if(cur->Attribute[0]=='f')
										strcat(attr," F");
									else if(cur->Attribute[0]=='b')
										strcat(attr," Z");
								}
								if(cur->Attribute[i]==',')
								{
									next_will_write_or_not=1;
								}
							}
						}
						else
						{
							strcpy(attr,"");
						}
       				}
        			cur = cur->next;
    			}
				if(v1->type==I_T)
					fprintf(java_assembly_code,".method public static %s(%s)I\n.limit stack 50\n.limit locals 50\n",v2->id_name,attr);
				else if(v1->type==F_T)
					fprintf(java_assembly_code,".method public static %s(%s)F\n.limit stack 50\n.limit locals 50\n",v2->id_name,attr);
				else if(v1->type==B_T)
					fprintf(java_assembly_code,".method public static %s(%s)Z\n.limit stack 50\n.limit locals 50\n",v2->id_name,attr);
				else if(v1->type==V_T)
					fprintf(java_assembly_code,".method public static %s(%s)V\n.limit stack 50\n.limit locals 50\n",v2->id_name,attr);
			}
			fprintf(java_assembly_code,"%s",fun_content);
			strcpy(fun_content,"");
			fprintf(java_assembly_code,".end method\n");	
		}
#line 4567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 2798 "compiler_hw3.y" /* yacc.c:1646  */
    {right_compound=1;header_rec=cur_header;}
#line 4573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 2799 "compiler_hw3.y" /* yacc.c:1646  */
    {right_compound=1;header_rec=cur_header;}
#line 4579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 2800 "compiler_hw3.y" /* yacc.c:1646  */
    {right_compound=1;header_rec=cur_header;}
#line 4585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 2801 "compiler_hw3.y" /* yacc.c:1646  */
    {right_compound=1;header_rec=cur_header;}
#line 4591 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4595 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 2804 "compiler_hw3.y" /* yacc.c:1906  */


/* C code section */
int main(int argc, char** argv)
{
    extern FILE *yyin;
    yyin = fopen(argv[1],"r");

	java_assembly_code=fopen("java_assembly_code.j","w");
	fprintf(java_assembly_code,".class public compiler_hw3\n.super java/lang/Object\n");


	yylineno = 0;
	new_scope();
    yyparse();
    extern int line_cnt;

	dump_all_scopes();
	printf("\nTotal lines: %d \n",yylineno);

	if(rm_jFile_or_not==1)
	{
		remove("java_assembly_code.j");
	}

    return 0;
}

void yyerror_overloading(char *s,int line) //semantic
{
    printf("\n|-----------------------------------------------|\n");
    printf("| Error found in line %d: %s\n", line, buf);
    printf("| %s", s);
    printf("\n|-----------------------------------------------|\n\n");
	rm_jFile_or_not=1;
}

void yyerror(char *s) //sytax
{
	if(yacc_handle_syntax==1)
	{
		int line=yylineno+1;
		printf("%d: %s\n",line,buf);
    	printf("\n|-----------------------------------------------|\n");
    	printf("| Error found in line %d: %s\n", line, buf);
    	printf("| %s", s);
    	printf("\n|-----------------------------------------------|\n\n");
		remove("java_assembly_code.j");
		exit(1);
	}
	else
	{
		syntax_err=1;
	}	
}

Header* create_symbol() 
{
	Header *ptr = malloc(sizeof(Header)); //創新的table
	ptr->depth=depth;
	depth++;
	ptr->table_root=malloc(sizeof(Entry));
	ptr->table_root=NULL;
	//ptr->table_root->next = NULL;
	//ptr->table_tail = ptr->table_root;
	ptr->pre = NULL;
	ptr->entry_num=-1;
	return ptr;
}
void insert_symbol(Header *header, Value *t_ptr, Value *id_ptr,char *kind) 
{
	//printf("%s\n",id_ptr->id_name);

	Value* id_ptr_copy=malloc(sizeof(Value));
	id_ptr_copy->id_name=malloc(sizeof(char)*50);
	strcpy(id_ptr_copy->id_name,id_ptr->id_name);

	if (cur_header == NULL) //無table
	{
        cur_header = create_symbol();
        header_root = cur_header;
        header = cur_header;
    }
    if (lookup_symbol(cur_header, id_ptr->id_name) == -10) 
	{
        
        Entry *tmp = malloc(sizeof(Entry));
		header->entry_num=(header->entry_num)+1;
        tmp->index = header->entry_num;
		
        tmp->id_ptr = id_ptr_copy;
		//printf("Insert a symbol: %s in table %d,INDEX: %d\n", tmp->id_ptr->id_name, header->depth,tmp->index);
        tmp->next = NULL;
		tmp->Scope=header->depth;
		strcpy(tmp->Kind,kind);
		/*
		if(strcmp(kind,"function")==0)
		{

		}
		else //只有kind為function的,Attribute才有內容
		{
			strcat(tmp->Attribute,"");
		}
		*/

		//TYPE
		if(t_ptr->type==V_T)
		{
			strcat(tmp->type,"void");
		}	
		else if(t_ptr->type==I_T)
		{
			strcat(tmp->type,"int");
		}	
		else if(t_ptr->type==F_T)
		{
			strcat(tmp->type,"float");
		}
		else if(t_ptr->type==S_T)
		{
			strcat(tmp->type,"string");
		}
		else if(t_ptr->type==B_T)
		{
			strcat(tmp->type,"bool");
		}
		Entry *e=cur_header->table_root;
		if(e==NULL)
		{
			cur_header->table_root=tmp;
		}
		else
		{
			while(e->next!=NULL)
			{
				e=e->next;
			}
			e->next=tmp;
		}

		//insert Attribute in previous table
		if(strcmp(kind,"parameter")==0)
		{
			Header* p=cur_header->pre;
			Entry* e=p->table_root;
			if(e!=NULL)
			{
				while(e->next!=NULL)
				{
					e=e->next;
				}
				if(e->index!=-8)
				{
					Entry *t = malloc(sizeof(Entry));
					t->next=NULL;
					t->index=-8; // use to identify that this entry hasn't had function name yet
					strcat(t->Attribute,tmp->type);
					e->next=t;
				}
				else
				{
					strcat(e->Attribute,", ");
					strcat(e->Attribute,tmp->type);
				}
			}
			else
			{
				Entry *t = malloc(sizeof(Entry));
				t->next=NULL;
				t->index=-8; // use to identify that this entry hasn't had function name yet
				strcat(t->Attribute,tmp->type);
				p->table_root=t;
			}
			
		}
    } 
	else 
	{
		//printf("lookup_symbol=%d\n",lookup_symbol(cur_header, id_ptr->id_name));
        int lineno=yylineno+1;
		printf("%d: %s\n", lineno, buf);
		printline_or_not=0;
		char errmsg[64];
        sprintf(errmsg, "Redeclared variable %s", id_ptr->id_name);
        yyerror_overloading(errmsg,lineno);
    }
}

void insert_symbol_forfun(Header *header, Value *t_ptr, Value *id_ptr,char *kind) 
{
	//printf("%s\n",id_ptr->id_name);
	int table_or_not=1; //have table yet
	Value* id_ptr_copy=malloc(sizeof(Value));
	id_ptr_copy->id_name=malloc(sizeof(char)*50);
	strcpy(id_ptr_copy->id_name,id_ptr->id_name);

	if (cur_header == NULL) //無table
	{
		table_or_not=0; //not have table yet
        cur_header = create_symbol();
        header_root = cur_header;
        header = cur_header;
    }
    if (lookup_symbol(cur_header->pre, id_ptr->id_name) == -10) 
	{
        if(table_or_not==1)
		{
			header=header->pre;
		}
        Entry *tmp = malloc(sizeof(Entry));
		header->entry_num=(header->entry_num)+1;
        tmp->index = header->entry_num;
		
        tmp->id_ptr = id_ptr_copy;
		//printf("Insert a function: %s in table %d,INDEX: %d\n", tmp->id_ptr->id_name, header->depth,tmp->index);
        tmp->next = NULL;
		tmp->Scope=header->depth;
		strcpy(tmp->Kind,kind);
		
		//TYPE
		if(t_ptr->type==V_T)
		{
			strcat(tmp->type,"void");
		}	
		else if(t_ptr->type==I_T)
		{
			strcat(tmp->type,"int");
		}	
		else if(t_ptr->type==F_T)
		{
			strcat(tmp->type,"float");
		}
		else if(t_ptr->type==S_T)
		{
			strcat(tmp->type,"string");
		}
		else if(t_ptr->type==B_T)
		{
			strcat(tmp->type,"bool");
		}

		//要去檢查前一個table的最後一個entry是不是有Attribute存在,如果有,則直接使用該entry,若無,則須創新的entry
		if(cur_header->pre!=NULL&&cur_header->pre->table_root!=NULL) 
		{
			Entry *tr=cur_header->pre->table_root;
			while(tr->next!=NULL)
			{
				tr=tr->next;
			}
			
			if(strcmp(tr->Attribute,"")!=0&&tr->index==-8) //有Attribute存在
			{
				tr->index=tmp->index;
				tr->id_ptr=tmp->id_ptr;
				strcpy(tr->Kind,tmp->Kind);
				strcat(tr->type,tmp->type);
				tr->Scope=tmp->Scope;
			}
			else //無Attribute存在
			{
				Entry *e=header->table_root;
				if(e==NULL)
				{
					header->table_root=tmp;
				}
				else
				{
					while(e->next!=NULL)
					{
						e=e->next;
					}
					e->next=tmp;
				}

			}
		}
		else
		{
			Entry *e=header->table_root;
			if(e==NULL)
			{
				header->table_root=tmp;
			}
			else
			{
				while(e->next!=NULL)
				{
					e=e->next;
				}
				e->next=tmp;
			}
		}	
    } 
	else 
	{
		//printf("lookup_symbol=%d\n",lookup_symbol(cur_header, id_ptr->id_name));
        int lineno=yylineno+1;
		printf("%d: %s\n", lineno, buf);
		printline_or_not=0;
		char errmsg[64];
        sprintf(errmsg, "Redeclared function %s", id_ptr->id_name);
        yyerror_overloading(errmsg,lineno);
    }
}
int lookup_symbol(const Header *header, const char *id) 
{
	if (header->table_root == NULL) 
	{
        return -10;
    }
    Entry *cur = header->table_root;
    while (cur != NULL)
	{
		/*
		printf("\nindex:%d\n",cur->index);
		printf("%s\n",id);
		if(cur->id_ptr!=NULL)
			printf("%s\n",cur->id_ptr->id_name);
		*/

        if (cur->id_ptr!=NULL&&strcmp(cur->id_ptr->id_name, id) == 0)
		{
            return cur->index;
        }
        cur = cur->next;
    }
    return -10;
}

int lookup_symbol_type(const Header *header, const char *id) 
{
	//return 0 for int
	//return 1 for float
	//return 2 for bool
	//return 3 for void
	//return 4 for string
	if (header->table_root == NULL) 
	{
        return -10;
    }
    Entry *cur = header->table_root;
    while (cur != NULL)
	{
        if (cur->id_ptr!=NULL&&strcmp(cur->id_ptr->id_name, id) == 0)
		{
            //return cur->index;
			if(strcmp(cur->type,"int")==0)
				return 0;
			else if(strcmp(cur->type,"float")==0)
				return 1;
			else if(strcmp(cur->type,"bool")==0)
				return 2;
			else if(strcmp(cur->type,"void")==0)
				return 3;
			else if(strcmp(cur->type,"string")==0)
				return 4;
        }
        cur = cur->next;
    }
    return -10;
}

void dump_symbol(Header *header) 
{
    printf("\n%-10s%-10s%-12s%-10s%-10s%-10s\n",
           "Index", "Name", "Kind", "Type", "Scope", "Attribute");
	if (header->table_root == NULL) 
	{
        return;
    }

    Entry *cur = header->table_root;
    while (cur != NULL)
	{
		printf("\n%-10d%-10s%-12s%-10s%-10d",
		cur->index, cur->id_ptr->id_name, cur->Kind, cur->type, cur->Scope);

		if(strcmp(cur->Attribute,"")==0)
		{
			Entry *tmp = cur;
        	cur = cur->next;
			free(tmp);
        	tmp = NULL;
			continue;
		}
		else
		{
			//printf("ATTRIBUTE LEN:%d\n",strlen(cur->Attribute));
			printf("%-s",cur->Attribute);
		}
		//printf("\n%d %s\n",cur->index, cur->id_ptr->id_name);
        Entry *tmp = cur;
        cur = cur->next;
		
		/*free(tmp->id_ptr->val_ptr);
        tmp->id_ptr->val_ptr = NULL;
		
		free(tmp->id_ptr);
        tmp->id_ptr = NULL;*/
		
		free(tmp);
        tmp = NULL;
    }
	printf("\n\n");
}

void new_scope()
{
    Header *ptr = create_symbol();
    ptr->pre = cur_header;
    cur_header = ptr;
}

void dump_scope()
{
	Header *tmp;
	if(header_rec!=NULL && cur_header->depth != header_rec->depth)
	{
		//printf("cur_header->depth=%d\n",cur_header->depth);
		//printf("header_rec->depth=%d\n",header_rec->depth);
		tmp = header_rec;
		cur_header->depth=cur_header->depth-1;
		cur_header->pre=header_rec->pre;
		header_rec=NULL;
		//depth--;
	}
	else
	{
		tmp = cur_header;
		//printf("\ndump_scope: %d\n",tmp->depth);
    	cur_header = cur_header->pre;
	}
    
	if(tmp->table_root!=NULL)
	{
		dump_symbol(tmp);
	}
    free(tmp);
    tmp = NULL;
    depth--;
}

void dump_all_scopes()
{
	while (cur_header != NULL) 
	{
        dump_scope();
    }
}

void Push(char d[],int len)
{
	if(Q_HEAD==NULL)
	{
		Q_HEAD = (struct label_node*)malloc(sizeof(struct label_node));
		for(int i=0;i<len;i++)
		{
			Q_HEAD->label_name[i]=d[i];
		}
		Q_HEAD->label_name[len]='\0';
		Q_HEAD->next=NULL;
		Q_TAIL=Q_HEAD;
	}
	else
	{
		struct label_node* ptr=(struct label_node*)malloc(sizeof(struct label_node));
		for(int i=0;i<len;i++)
		{
			ptr->label_name[i]=d[i];
		}
		ptr->label_name[len]='\0';
		ptr->next=NULL;
		Q_TAIL->next=ptr;
		Q_TAIL=ptr;
	}
	label_num++;
}

char* Pop()
{
	struct label_node* ptr=Q_HEAD;
	for(int i=0;i<50;i++)
	{
		item[i]=ptr->label_name[i];
	}
	Q_HEAD=ptr->next;
	free(ptr);
	label_num--;
	return item;
}

void Push_arg(char d[],int len)
{
	if(A_HEAD==NULL)
	{
		A_HEAD = (struct arg_node*)malloc(sizeof(struct arg_node));
		for(int i=0;i<len;i++)
		{
			A_HEAD->arg_name[i]=d[i];
		}
		A_HEAD->arg_name[len]='\0';
		A_HEAD->next=NULL;
		A_TAIL=A_HEAD;
	}
	else
	{
		struct arg_node* ptr=(struct arg_node*)malloc(sizeof(struct arg_node));
		for(int i=0;i<len;i++)
		{
			ptr->arg_name[i]=d[i];
		}
		ptr->arg_name[len]='\0';
		ptr->next=NULL;
		A_TAIL->next=ptr;
		A_TAIL=ptr;
	}
	arg_num++;
}

char* Pop_arg()
{
	struct arg_node* ptr=A_HEAD;
	for(int i=0;i<50;i++)
	{
		item_arg[i]=ptr->arg_name[i];
	}
	A_HEAD=ptr->next;
	free(ptr);
	arg_num--;
	return item_arg;
}
