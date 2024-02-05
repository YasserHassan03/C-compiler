/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1





# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 4,                   /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 5,             /* STRING_LITERAL  */
  YYSYMBOL_SIZEOF = 6,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 7,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 8,                     /* INC_OP  */
  YYSYMBOL_DEC_OP = 9,                     /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 10,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 11,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 12,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 13,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 14,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 15,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 16,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 17,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 18,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 19,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 20,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 21,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 22,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 23,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 24,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 25,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 26,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 27,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 28,                 /* TYPE_NAME  */
  YYSYMBOL_TYPEDEF = 29,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 30,                    /* EXTERN  */
  YYSYMBOL_STATIC = 31,                    /* STATIC  */
  YYSYMBOL_AUTO = 32,                      /* AUTO  */
  YYSYMBOL_REGISTER = 33,                  /* REGISTER  */
  YYSYMBOL_CHAR = 34,                      /* CHAR  */
  YYSYMBOL_SHORT = 35,                     /* SHORT  */
  YYSYMBOL_INT = 36,                       /* INT  */
  YYSYMBOL_LONG = 37,                      /* LONG  */
  YYSYMBOL_SIGNED = 38,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 39,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 40,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 41,                    /* DOUBLE  */
  YYSYMBOL_CONST = 42,                     /* CONST  */
  YYSYMBOL_VOLATILE = 43,                  /* VOLATILE  */
  YYSYMBOL_VOID = 44,                      /* VOID  */
  YYSYMBOL_STRUCT = 45,                    /* STRUCT  */
  YYSYMBOL_UNION = 46,                     /* UNION  */
  YYSYMBOL_ENUM = 47,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 48,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 49,                      /* CASE  */
  YYSYMBOL_DEFAULT = 50,                   /* DEFAULT  */
  YYSYMBOL_IF = 51,                        /* IF  */
  YYSYMBOL_ELSE = 52,                      /* ELSE  */
  YYSYMBOL_SWITCH = 53,                    /* SWITCH  */
  YYSYMBOL_WHILE = 54,                     /* WHILE  */
  YYSYMBOL_DO = 55,                        /* DO  */
  YYSYMBOL_FOR = 56,                       /* FOR  */
  YYSYMBOL_GOTO = 57,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 58,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 59,                     /* BREAK  */
  YYSYMBOL_RETURN = 60,                    /* RETURN  */
  YYSYMBOL_L_BRAC = 61,                    /* L_BRAC  */
  YYSYMBOL_R_BRAC = 62,                    /* R_BRAC  */
  YYSYMBOL_L_SQ = 63,                      /* L_SQ  */
  YYSYMBOL_R_SQ = 64,                      /* R_SQ  */
  YYSYMBOL_L_CURL = 65,                    /* L_CURL  */
  YYSYMBOL_R_CURL = 66,                    /* R_CURL  */
  YYSYMBOL_SEMI = 67,                      /* SEMI  */
  YYSYMBOL_COMMA = 68,                     /* COMMA  */
  YYSYMBOL_DOT = 69,                       /* DOT  */
  YYSYMBOL_COLON = 70,                     /* COLON  */
  YYSYMBOL_EQ_SIGN = 71,                   /* EQ_SIGN  */
  YYSYMBOL_AND_UNARY = 72,                 /* AND_UNARY  */
  YYSYMBOL_EXCLA = 73,                     /* EXCLA  */
  YYSYMBOL_TILDE = 74,                     /* TILDE  */
  YYSYMBOL_SUB_OP = 75,                    /* SUB_OP  */
  YYSYMBOL_ADD_UNARY = 76,                 /* ADD_UNARY  */
  YYSYMBOL_PTR_TIMES = 77,                 /* PTR_TIMES  */
  YYSYMBOL_DIV_OP = 78,                    /* DIV_OP  */
  YYSYMBOL_MOD_OP = 79,                    /* MOD_OP  */
  YYSYMBOL_LT_OP = 80,                     /* LT_OP  */
  YYSYMBOL_GT_OP = 81,                     /* GT_OP  */
  YYSYMBOL_XOR_OP = 82,                    /* XOR_OP  */
  YYSYMBOL_OR_UNARY = 83,                  /* OR_UNARY  */
  YYSYMBOL_TERNARY_OP = 84,                /* TERNARY_OP  */
  YYSYMBOL_END = 85,                       /* END  */
  YYSYMBOL_NOELSE = 86,                    /* NOELSE  */
  YYSYMBOL_YYACCEPT = 87,                  /* $accept  */
  YYSYMBOL_primary_expression = 88,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 89,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 90,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 91,          /* unary_expression  */
  YYSYMBOL_unary_operator = 92,            /* unary_operator  */
  YYSYMBOL_cast_expression = 93,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 94, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 95,       /* additive_expression  */
  YYSYMBOL_shift_expression = 96,          /* shift_expression  */
  YYSYMBOL_relational_expression = 97,     /* relational_expression  */
  YYSYMBOL_equality_expression = 98,       /* equality_expression  */
  YYSYMBOL_and_expression = 99,            /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 100,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 101,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 102,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 103,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 104,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 105,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 106,      /* assignment_operator  */
  YYSYMBOL_expression = 107,               /* expression  */
  YYSYMBOL_constant_expression = 108,      /* constant_expression  */
  YYSYMBOL_declaration = 109,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 110,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 111,     /* init_declarator_list  */
  YYSYMBOL_112_1 = 112,                    /* $@1  */
  YYSYMBOL_init_declarator = 113,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 114,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 115,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 116, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 117,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 118,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 119,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 120, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 121,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 122,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 123,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 124,          /* enumerator_list  */
  YYSYMBOL_enumerator = 125,               /* enumerator  */
  YYSYMBOL_type_qualifier = 126,           /* type_qualifier  */
  YYSYMBOL_declarator = 127,               /* declarator  */
  YYSYMBOL_direct_declarator = 128,        /* direct_declarator  */
  YYSYMBOL_pointer = 129,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 130,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 131,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 132,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 133,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 134,          /* identifier_list  */
  YYSYMBOL_type_name = 135,                /* type_name  */
  YYSYMBOL_abstract_declarator = 136,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 137, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 138,              /* initializer  */
  YYSYMBOL_initializer_list = 139,         /* initializer_list  */
  YYSYMBOL_statement = 140,                /* statement  */
  YYSYMBOL_labeled_statement = 141,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 142,       /* compound_statement  */
  YYSYMBOL_declaration_list = 143,         /* declaration_list  */
  YYSYMBOL_statement_list = 144,           /* statement_list  */
  YYSYMBOL_expression_statement = 145,     /* expression_statement  */
  YYSYMBOL_selection_statement = 146,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 147,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 148,           /* jump_statement  */
  YYSYMBOL_program = 149,                  /* program  */
  YYSYMBOL_translation_unit = 150,         /* translation_unit  */
  YYSYMBOL_external_declaration = 151,     /* external_declaration  */
  YYSYMBOL_function_definition = 152       /* function_definition  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1179

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  214
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  352

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   341


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    78,    78,    79,    80,    81,    86,    87,    88,   106,
     138,   139,   140,   141,   146,   147,   156,   157,   158,   159,
     160,   161,   166,   167,   168,   169,   170,   171,   176,   177,
     182,   183,   184,   185,   189,   190,   191,   195,   196,   197,
     201,   202,   203,   204,   205,   209,   210,   211,   215,   216,
     220,   221,   225,   226,   230,   231,   235,   236,   240,   241,
     248,   249,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   268,   269,   273,   278,   279,   335,   336,
     344,   345,   354,   358,   370,   371,   371,   379,   380,   384,
     385,   386,   387,   388,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   412,   413,   414,   418,
     419,   423,   424,   432,   437,   439,   440,   445,   452,   453,
     461,   462,   463,   467,   468,   474,   484,   488,   496,   497,
     505,   506,   511,   512,   517,   518,   522,   526,   527,   545,
     549,   563,   564,   565,   566,   571,   572,   578,   579,   584,
     585,   594,   595,   596,   601,   602,   611,   615,   623,   624,
     625,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     643,   644,   645,   650,   651,   660,   661,   662,   663,   664,
     665,   671,   672,   673,   678,   679,   680,   681,   685,   686,
     694,   695,   703,   704,   708,   709,   710,   719,   720,   721,
     722,   726,   727,   728,   729,   730,   734,   738,   739,   747,
     748,   753,   754,   763,   764
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "CONSTANT", "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "L_BRAC", "R_BRAC",
  "L_SQ", "R_SQ", "L_CURL", "R_CURL", "SEMI", "COMMA", "DOT", "COLON",
  "EQ_SIGN", "AND_UNARY", "EXCLA", "TILDE", "SUB_OP", "ADD_UNARY",
  "PTR_TIMES", "DIV_OP", "MOD_OP", "LT_OP", "GT_OP", "XOR_OP", "OR_UNARY",
  "TERNARY_OP", "END", "NOELSE", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "$@1", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "program", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-216)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     620,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,     3,    25,    28,  -216,    22,  1112,  1112,  -216,    17,
    -216,  1112,   852,    33,    52,    24,   620,  -216,  -216,   -25,
      54,    -2,  -216,  -216,    28,  -216,    64,  -216,   946,  -216,
    -216,     2,  1132,  -216,   306,  -216,    22,  -216,   852,   440,
     665,    33,  -216,  -216,    54,    32,   -17,  -216,  -216,  -216,
    -216,  -216,    25,   682,  -216,   852,  1132,  1132,   984,  -216,
      20,  1132,    14,  -216,  -216,   802,   839,   839,   846,    38,
      59,    62,    90,   560,   125,   190,   130,   140,    69,   246,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,   237,
     373,   846,  -216,   142,   186,   117,    26,   256,   139,   149,
     133,   212,    -8,  -216,  -216,   227,  -216,  -216,  -216,   381,
     456,  -216,  -216,  -216,  -216,   164,  -216,  -216,  -216,  -216,
      76,   194,   195,  -216,   -14,  -216,  -216,  -216,  -216,   209,
      81,   846,  -216,    54,  -216,   682,  -216,  -216,  -216,  1017,
    -216,  -216,  -216,   846,   229,  -216,   188,  -216,   560,   246,
    -216,   846,  -216,  -216,   238,   560,   846,   846,   846,   225,
     710,   232,  -216,  -216,  -216,   234,    86,   122,   251,   323,
    -216,  -216,   719,   846,   324,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,   846,  -216,   846,   846,
     846,   846,   846,   846,   846,   846,   846,   846,   846,   846,
     846,   846,   846,   846,   846,   846,   846,  -216,   846,  -216,
     485,  -216,  -216,   545,   727,  -216,    63,  -216,   162,  -216,
    1091,  -216,   325,  -216,  -216,  -216,  -216,  -216,  -216,   161,
    -216,  -216,  -216,    20,   846,  -216,   267,   560,  -216,   111,
     126,   134,   269,   710,  -216,  -216,  -216,   896,   171,  -216,
     846,  -216,  -216,   136,  -216,   -12,  -216,  -216,  -216,  -216,
    -216,   142,   142,   186,   186,   117,   117,   117,   117,    26,
      26,   256,   139,   149,   133,   212,   173,  -216,  -216,  -216,
     292,   296,  -216,   304,   162,  1056,   757,  -216,  -216,  -216,
    -216,   635,  -216,  -216,  -216,  -216,   560,   560,   560,   846,
     764,  -216,  -216,   846,  -216,   846,  -216,  -216,  -216,  -216,
     307,  -216,   310,  -216,  -216,   279,  -216,  -216,   146,   560,
     147,  -216,  -216,  -216,  -216,   560,   303,  -216,   560,  -216,
    -216,  -216
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   134,   105,    89,    90,    91,    92,    93,    95,    96,
      97,    98,   101,   102,    99,   100,   130,   131,    94,   109,
     110,     0,     0,   141,   210,     0,    78,    80,   103,     0,
     104,    82,     0,   133,     0,     0,   206,   207,   209,   125,
       0,     0,   145,   143,   142,    76,     0,    84,    87,    79,
      81,   108,     0,    83,     0,   188,     0,   214,     0,     0,
       0,   132,     1,   208,     0,   128,     0,   126,   135,   146,
     144,    77,     0,     0,   212,     0,     0,   115,     0,   111,
       0,   117,     2,     3,     4,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     184,   192,    22,    27,    26,    25,    24,    23,     6,    16,
      28,     0,    30,    34,    37,    40,    45,    48,    50,    52,
      54,    56,    58,    60,    73,     0,   190,   175,   176,     0,
       0,   177,   178,   179,   180,    87,   189,   213,   154,   140,
     153,     0,   147,   149,     0,     2,   137,    28,    75,     0,
       0,     0,   123,     0,    85,     0,   170,    88,   211,     0,
     114,   107,   112,     0,     0,   118,   120,   116,     0,     0,
      20,     0,    17,    18,     0,     0,     0,     0,     0,     0,
       0,     0,   202,   203,   204,     0,     0,   156,     0,     0,
      12,    13,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    62,     0,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   193,     0,   186,
       0,   185,   191,     0,     0,   151,   158,   152,   159,   138,
       0,   139,     0,   136,   124,   129,   127,    86,   173,     0,
     106,   121,   113,     0,     0,   181,     0,     0,   183,     0,
       0,     0,     0,     0,   201,   205,     5,     0,   158,   157,
       0,    11,     8,     0,    14,     0,    10,    61,    31,    32,
      33,    36,    35,    38,    39,    43,    44,    41,    42,    46,
      47,    49,    51,    53,    55,    57,     0,    74,   187,   166,
       0,     0,   162,     0,   160,     0,     0,   148,   150,   155,
     171,     0,   119,   122,    21,   182,     0,     0,     0,     0,
       0,    29,     9,     0,     7,     0,   167,   161,   163,   168,
       0,   164,     0,   172,   174,   194,   196,   197,     0,     0,
       0,    15,    59,   169,   165,     0,     0,   199,     0,   195,
     198,   200
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -216,  -216,  -216,   -53,  -216,   -94,    92,   103,    60,
     105,   154,   166,   153,   177,   152,  -216,   -59,   -54,  -216,
      13,   -42,     5,     0,  -216,  -216,   330,  -216,   -34,  -216,
    -216,   327,   -68,   -69,  -216,   151,  -216,   341,   253,    41,
     -11,   -31,    -7,  -216,   -57,  -216,   167,  -216,   239,  -125,
    -215,  -133,  -216,   -80,  -216,   155,   170,   300,  -176,  -216,
    -216,  -216,  -216,  -216,   397,  -216
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   108,   109,   273,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   206,
     125,   149,    55,    56,    46,   247,    47,    26,    27,    28,
      29,    78,    79,    80,   164,   165,    30,    66,    67,    31,
      32,    33,    34,    44,   300,   142,   143,   144,   188,   301,
     238,   157,   249,   126,   127,   128,    58,   130,   131,   132,
     133,   134,    35,    36,    37,    38
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   148,   141,    61,   263,    24,    39,   147,   160,   225,
     162,    41,   167,   179,    48,   237,    43,   207,    77,   156,
      51,   304,   248,     1,    62,     1,    49,    50,     1,   148,
     187,    53,   170,   172,   173,   147,    25,    70,   215,   216,
      64,    24,    77,    77,    77,   135,   174,    77,   241,   152,
     232,   153,   324,   304,   242,     1,   228,    65,   147,   140,
      68,   135,   269,   136,    42,    77,     1,    76,    40,   166,
      16,    17,   145,    83,    84,    85,   226,    86,    87,     1,
     136,    22,    52,    22,   168,    69,    22,   320,   255,    45,
     163,   162,   148,    81,    59,   258,    60,    23,   147,    23,
     187,   156,    23,   151,   148,    23,   217,   218,   175,   245,
     147,   185,   186,    22,   278,   279,   280,    81,    81,    81,
     176,   251,    81,   177,   233,    77,   234,   213,   214,   235,
      99,    71,    72,   236,   136,    77,   184,   233,   274,   234,
      81,   102,   103,   104,   105,   106,   107,   244,   266,   153,
     232,   178,   277,    23,   228,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   316,   297,   148,   321,   315,   334,   228,
     268,   147,   186,   267,   186,   234,   180,    57,   317,   259,
     260,   261,   303,   181,   228,   148,   318,   182,   322,    23,
      81,   147,   228,    74,   323,    61,   275,   183,   346,   348,
      81,   221,   313,   137,   228,   228,   223,   147,    75,   208,
     209,   210,    41,   305,   129,   306,   236,   310,   224,   311,
     158,   222,   267,   140,   234,    73,   335,   336,   337,   296,
     140,   228,   166,   325,   189,   190,   191,   148,   330,   145,
      83,    84,    85,   147,    86,    87,   239,   156,   254,   347,
     268,   211,   212,   240,   332,   349,   342,   140,   351,   341,
     219,   220,   147,   243,     2,   285,   286,   287,   288,   262,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   227,   228,   252,   253,   192,   264,
     193,   265,   228,   281,   282,   140,   194,    99,   257,    82,
      83,    84,    85,   270,    86,    87,   283,   284,   102,   103,
     104,   105,   106,   107,   289,   290,   271,   276,   309,   314,
     319,   345,   338,   340,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   326,    88,    89,    90,   327,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   328,   343,
     350,    54,   100,   101,   344,   291,   293,   295,   102,   103,
     104,   105,   106,   107,    82,    83,    84,    85,   292,    86,
      87,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   294,   154,   159,   312,   150,   246,   308,   256,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   230,
      88,    89,    90,    63,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   138,   205,     0,    54,   229,   101,     0,
       0,     0,     0,   102,   103,   104,   105,   106,   107,    82,
      83,    84,    85,     0,    86,    87,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    82,    83,
      84,    85,     0,    86,    87,     0,     0,     0,     0,     0,
       0,     0,   139,     0,     0,    88,    89,    90,     0,    91,
      92,    93,    94,    95,    96,    97,    98,    99,     0,     0,
       0,    54,   231,   101,     0,     0,     0,     0,   102,   103,
     104,   105,   106,   107,    88,    89,    90,     0,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     0,     1,     0,
      54,   298,   101,     0,     0,     0,     0,   102,   103,   104,
     105,   106,   107,    82,    83,    84,    85,     0,    86,    87,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   233,   299,   234,    88,
      89,    90,     0,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    23,     1,     0,    54,     0,   101,     0,     0,
       0,     0,   102,   103,   104,   105,   106,   107,   145,    83,
      84,    85,     0,    86,    87,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,   145,    83,
      84,    85,     0,    86,    87,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,   145,    83,    84,    85,     0,
      86,    87,     0,     0,     0,     0,    99,    23,     0,     0,
     155,   333,     0,     0,     0,     0,     0,   102,   103,   104,
     105,   106,   107,   145,    83,    84,    85,     0,    86,    87,
       0,     0,   145,    83,    84,    85,    99,    86,    87,   146,
     145,    83,    84,    85,     0,    86,    87,   102,   103,   104,
     105,   106,   107,    99,     0,     0,     0,   155,     0,     0,
       0,     0,     0,     0,   102,   103,   104,   105,   106,   107,
     145,    83,    84,    85,     0,    86,    87,   145,    83,    84,
      85,    99,    86,    87,     0,     0,     0,   101,     0,     0,
      99,   272,   102,   103,   104,   105,   106,   107,    99,     0,
     302,   102,   103,   104,   105,   106,   107,     0,     0,   102,
     103,   104,   105,   106,   107,   145,    83,    84,    85,     0,
      86,    87,     0,     0,     0,     0,     0,     0,    99,     0,
     331,     0,     0,     0,     0,    99,   339,     0,     0,   102,
     103,   104,   105,   106,   107,     0,   102,   103,   104,   105,
     106,   107,   145,    83,    84,    85,     0,    86,    87,   145,
      83,    84,    85,     0,    86,    87,     0,     0,     0,     0,
       0,     0,     0,   169,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   102,   103,   104,   105,   106,   107,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     171,     0,     0,     0,     0,     0,     0,    99,     0,     0,
       0,   102,   103,   104,   105,   106,   107,    54,   102,   103,
     104,   105,   106,   107,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   267,   299,   234,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,     2,     0,     0,     0,     0,    73,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
     161,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   250,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   329,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   307,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       2,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    60,    59,    34,   180,     0,     3,    60,    77,    17,
      78,    22,    81,    93,    25,   140,    23,   111,    52,    73,
       3,   236,   155,     3,     0,     3,    26,    27,     3,    88,
      99,    31,    85,    86,    87,    88,    36,    44,    12,    13,
      65,    36,    76,    77,    78,    56,    88,    81,    62,    66,
     130,    68,    64,   268,    68,     3,    68,     3,   111,    59,
      62,    72,   187,    58,    23,    99,     3,    65,    65,    80,
      42,    43,     3,     4,     5,     6,    84,     8,     9,     3,
      75,    61,    65,    61,    70,    44,    61,   263,   168,    67,
      70,   159,   151,    52,    61,   175,    63,    77,   151,    77,
     169,   155,    77,    71,   163,    77,    80,    81,    70,   151,
     163,    98,    99,    61,   208,   209,   210,    76,    77,    78,
      61,   163,    81,    61,    61,   159,    63,    10,    11,   140,
      61,    67,    68,   140,   129,   169,    67,    61,   192,    63,
      99,    72,    73,    74,    75,    76,    77,    66,    62,    68,
     230,    61,   206,    77,    68,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,    62,   228,   234,   270,   257,   311,    68,
     187,   234,   169,    61,   171,    63,    61,    32,    62,   176,
     177,   178,   234,     3,    68,   254,    62,    67,    62,    77,
     159,   254,    68,    48,    68,   236,   193,    67,    62,    62,
     169,    72,   254,    58,    68,    68,    83,   270,    48,    77,
      78,    79,   233,    61,    54,    63,   233,    66,    16,    68,
      75,    82,    61,   233,    63,    71,   316,   317,   318,   226,
     240,    68,   253,    70,     7,     8,     9,   306,   305,     3,
       4,     5,     6,   306,     8,     9,    62,   311,    70,   339,
     267,    75,    76,    68,   306,   345,   325,   267,   348,   323,
      14,    15,   325,    64,    28,   215,   216,   217,   218,    54,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    67,    68,    67,    68,    61,    67,
      63,    67,    68,   211,   212,   305,    69,    61,    70,     3,
       4,     5,     6,    62,     8,     9,   213,   214,    72,    73,
      74,    75,    76,    77,   219,   220,     3,     3,     3,    62,
      61,    52,   319,   320,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    62,    49,    50,    51,    62,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    64,    62,
      67,    65,    66,    67,    64,   221,   223,   225,    72,    73,
      74,    75,    76,    77,     3,     4,     5,     6,   222,     8,
       9,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   224,    72,    76,   253,    64,   153,   240,   169,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,   129,
      49,    50,    51,    36,    53,    54,    55,    56,    57,    58,
      59,    60,    61,     3,    71,    -1,    65,    66,    67,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    49,    50,    51,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    77,    49,    50,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,     3,    -1,
      65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    49,
      50,    51,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    77,     3,    -1,    65,    -1,    67,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    61,    77,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,     3,     4,     5,     6,    61,     8,     9,    64,
       3,     4,     5,     6,    -1,     8,     9,    72,    73,    74,
      75,    76,    77,    61,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,    77,
       3,     4,     5,     6,    -1,     8,     9,     3,     4,     5,
       6,    61,     8,     9,    -1,    -1,    -1,    67,    -1,    -1,
      61,    62,    72,    73,    74,    75,    76,    77,    61,    -1,
      63,    72,    73,    74,    75,    76,    77,    -1,    -1,    72,
      73,    74,    75,    76,    77,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      63,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    72,
      73,    74,    75,    76,    77,    -1,    72,    73,    74,    75,
      76,    77,     3,     4,     5,     6,    -1,     8,     9,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,    77,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    65,    72,    73,
      74,    75,    76,    77,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    28,    -1,    -1,    -1,    -1,    71,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      66,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      28,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    61,    77,   109,   110,   114,   115,   116,   117,
     123,   126,   127,   128,   129,   149,   150,   151,   152,     3,
      65,   127,   126,   129,   130,    67,   111,   113,   127,   110,
     110,     3,    65,   110,    65,   109,   110,   142,   143,    61,
      63,   128,     0,   151,    65,     3,   124,   125,    62,   126,
     129,    67,    68,    71,   142,   143,    65,   115,   118,   119,
     120,   126,     3,     4,     5,     6,     8,     9,    49,    50,
      51,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      66,    67,    72,    73,    74,    75,    76,    77,    88,    89,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   107,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   127,   109,   142,     3,    62,
     110,   131,   132,   133,   134,     3,    64,    91,   104,   108,
     124,    71,    66,    68,   113,    65,   105,   138,   142,   118,
     120,    66,   119,    70,   121,   122,   127,   120,    70,    61,
      91,    61,    91,    91,   108,    70,    61,    61,    61,   140,
      61,     3,    67,    67,    67,   107,   107,   120,   135,     7,
       8,     9,    61,    63,    69,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    71,   106,    93,    77,    78,
      79,    75,    76,    10,    11,    12,    13,    80,    81,    14,
      15,    72,    82,    83,    16,    17,    84,    67,    68,    66,
     144,    66,   140,    61,    63,   127,   129,   136,   137,    62,
      68,    62,    68,    64,    66,   108,   125,   112,   138,   139,
      66,   108,    67,    68,    70,   140,   135,    70,   140,   107,
     107,   107,    54,   145,    67,    67,    62,    61,   129,   136,
      62,     3,    62,    90,   105,   107,     3,   105,    93,    93,
      93,    94,    94,    95,    95,    96,    96,    96,    96,    97,
      97,    98,    99,   100,   101,   102,   107,   105,    66,    62,
     131,   136,    63,   108,   137,    61,    63,    48,   133,     3,
      66,    68,   122,   108,    62,   140,    62,    62,    62,    61,
     145,    93,    62,    68,    64,    70,    62,    62,    64,    62,
     131,    63,   108,    66,   138,   140,   140,   140,   107,    62,
     107,   105,   104,    62,    64,    52,    62,   140,    62,   140,
      67,   140
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    90,    91,    91,    91,    91,
      91,    91,    92,    92,    92,    92,    92,    92,    93,    93,
      94,    94,    94,    94,    95,    95,    95,    96,    96,    96,
      97,    97,    97,    97,    97,    98,    98,    98,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   107,   107,   108,   109,   109,   110,   110,
     110,   110,   110,   110,   111,   112,   111,   113,   113,   114,
     114,   114,   114,   114,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   116,   116,   116,   117,
     117,   118,   118,   119,   120,   120,   120,   120,   121,   121,
     122,   122,   122,   123,   123,   123,   124,   124,   125,   125,
     126,   126,   127,   127,   128,   128,   128,   128,   128,   128,
     128,   129,   129,   129,   129,   130,   130,   131,   131,   132,
     132,   133,   133,   133,   134,   134,   135,   135,   136,   136,
     136,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     138,   138,   138,   139,   139,   140,   140,   140,   140,   140,
     140,   141,   141,   141,   142,   142,   142,   142,   143,   143,
     144,   144,   145,   145,   146,   146,   146,   147,   147,   147,
     147,   148,   148,   148,   148,   148,   149,   150,   150,   151,
     151,   152,   152,   152,   152
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     0,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     4,     2,     1,
       1,     1,     2,     3,     2,     1,     2,     1,     1,     3,
       1,     2,     3,     4,     5,     2,     1,     3,     1,     3,
       1,     1,     2,     1,     1,     3,     4,     3,     4,     4,
       3,     1,     2,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     2,     1,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     3,     4,     1,     2,
       1,     2,     1,     2,     5,     7,     5,     5,     7,     6,
       7,     3,     2,     2,     2,     3,     1,     1,     2,     1,
       1,     4,     3,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* primary_expression: IDENTIFIER  */
#line 78 "src/parser.y"
                     {(yyval.node) = new IdentifierNode(*(yyvsp[0].string));}
#line 1651 "src/parser.tab.cpp"
    break;

  case 3: /* primary_expression: CONSTANT  */
#line 79 "src/parser.y"
                   {(yyval.node) = new ConstantNode(*(yyvsp[0].string)); }
#line 1657 "src/parser.tab.cpp"
    break;

  case 4: /* primary_expression: STRING_LITERAL  */
#line 80 "src/parser.y"
                         {(yyval.node) = new StringLiteralNode(*(yyvsp[0].string)); }
#line 1663 "src/parser.tab.cpp"
    break;

  case 5: /* primary_expression: L_BRAC expression R_BRAC  */
#line 81 "src/parser.y"
                                   {(yyval.node) = new PrimaryExpressionNode(*(yyvsp[-2].string), (yyvsp[-1].node), *(yyvsp[0].string)); }
#line 1669 "src/parser.tab.cpp"
    break;

  case 6: /* postfix_expression: primary_expression  */
#line 86 "src/parser.y"
                             {(yyval.node) = (yyvsp[0].node);}
#line 1675 "src/parser.tab.cpp"
    break;

  case 7: /* postfix_expression: postfix_expression L_SQ expression R_SQ  */
#line 87 "src/parser.y"
                                                  {(yyval.node) = new ArrayIndexPostfixExpressionNode((yyvsp[-3].node), *(yyvsp[-2].string), (yyvsp[-1].node), *(yyvsp[0].string));}
#line 1681 "src/parser.tab.cpp"
    break;

  case 8: /* postfix_expression: postfix_expression L_BRAC R_BRAC  */
#line 89 "src/parser.y"
        {
		(yyval.node) = new FunctionCallWithoutArgsNode((yyvsp[-2].node), *(yyvsp[-1].string), *(yyvsp[0].string));
		if (trk->currentScopeId != "global")
		{
			trk->setScopeAsCaller(trk->currentScopeId);			
		}
		if (trk->currentScopeId != "global")
		{
			trk->setScopeAsCaller(trk->currentScopeId);
			PostfixExpressionNode *postNode = dynamic_cast<PostfixExpressionNode*>((yyvsp[-2].node));
			if (postNode != NULL)
			{
				trk->setScopeAsCallee(postNode->getId());
			}
		}

	}
#line 1703 "src/parser.tab.cpp"
    break;

  case 9: /* postfix_expression: postfix_expression L_BRAC argument_expression_list R_BRAC  */
#line 107 "src/parser.y"
        { 
		(yyval.node) = new FunctionCallWithArgsNode((yyvsp[-3].node), *(yyvsp[-2].string), (yyvsp[-1].node), *(yyvsp[0].string)); 
		if (trk->currentScopeId != "global")
		{
			trk->setScopeAsCaller(trk->currentScopeId);
			PostfixExpressionNode *postNode = dynamic_cast<PostfixExpressionNode*>((yyvsp[-3].node));
			if (postNode != NULL)
			{
				trk->setScopeAsCallee(postNode->getId());
			}
		}	
		std::string id;
		if (dynamic_cast<IdentifierNode*>((yyvsp[-3].node)) != NULL)
		{
			id = dynamic_cast<IdentifierNode*>((yyvsp[-3].node))->getId();
		}
		else
		{
			throw std::runtime_error("Error: Invalid function call");
		}

		
		// ArgumentExpressionListNode *tmp = dynamic_cast<ArgumentExpressionListNode*>($3);
		for (int i = 0; i < (int)trk->getFunctionParams(id).size(); i++)
		{	
			if ((trk->getFunctionParams(id).at(i)) == "double" || (trk->getFunctionParams(id).at(i)) == "struct" || i > 8)
			{
				trk->allocateMemory(trk->getCurrentScopeId(), typeSizes.at((trk->getFunctionParams(id).at(i))));
			}
		}
	}
#line 1739 "src/parser.tab.cpp"
    break;

  case 10: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 138 "src/parser.y"
                                            {(yyval.node) = new PostfixExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), *(yyvsp[0].string)); }
#line 1745 "src/parser.tab.cpp"
    break;

  case 11: /* postfix_expression: postfix_expression PTR_OP IDENTIFIER  */
#line 139 "src/parser.y"
                                               {(yyval.node) = new PostfixExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), *(yyvsp[0].string)); }
#line 1751 "src/parser.tab.cpp"
    break;

  case 12: /* postfix_expression: postfix_expression INC_OP  */
#line 140 "src/parser.y"
                                    {(yyval.node) = new IncDecPostfixExpressionNode((yyvsp[-1].node), *(yyvsp[0].string)); }
#line 1757 "src/parser.tab.cpp"
    break;

  case 13: /* postfix_expression: postfix_expression DEC_OP  */
#line 141 "src/parser.y"
                                    {(yyval.node) = new IncDecPostfixExpressionNode((yyvsp[-1].node), *(yyvsp[0].string)); }
#line 1763 "src/parser.tab.cpp"
    break;

  case 14: /* argument_expression_list: assignment_expression  */
#line 146 "src/parser.y"
                                {(yyval.node) = new ArgumentExpressionListNode((yyvsp[0].node));}
#line 1769 "src/parser.tab.cpp"
    break;

  case 15: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 148 "src/parser.y"
        {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->addChild((yyvsp[0].node));
	}
#line 1778 "src/parser.tab.cpp"
    break;

  case 16: /* unary_expression: postfix_expression  */
#line 156 "src/parser.y"
                             {(yyval.node) = (yyvsp[0].node);}
#line 1784 "src/parser.tab.cpp"
    break;

  case 17: /* unary_expression: INC_OP unary_expression  */
#line 157 "src/parser.y"
                                  {(yyval.node) = new IncDecUnaryExpressionNode(*(yyvsp[-1].string), (yyvsp[0].node)); }
#line 1790 "src/parser.tab.cpp"
    break;

  case 18: /* unary_expression: DEC_OP unary_expression  */
#line 158 "src/parser.y"
                                   {(yyval.node) = new IncDecUnaryExpressionNode(*(yyvsp[-1].string), (yyvsp[0].node)); }
#line 1796 "src/parser.tab.cpp"
    break;

  case 19: /* unary_expression: unary_operator cast_expression  */
#line 159 "src/parser.y"
                                         {(yyval.node) = new UnaryExpressionNode((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1802 "src/parser.tab.cpp"
    break;

  case 20: /* unary_expression: SIZEOF unary_expression  */
#line 160 "src/parser.y"
                                  {(yyval.node) = new SizeOfUnaryExpressionNode(*(yyvsp[-1].string), (yyvsp[0].node));}
#line 1808 "src/parser.tab.cpp"
    break;

  case 21: /* unary_expression: SIZEOF L_BRAC type_name R_BRAC  */
#line 161 "src/parser.y"
                                         {(yyval.node) = new SizeOfTypeUnarExpressionNode(*(yyvsp[-3].string), *(yyvsp[-2].string), (yyvsp[-1].node), *(yyvsp[0].string));}
#line 1814 "src/parser.tab.cpp"
    break;

  case 22: /* unary_operator: AND_UNARY  */
#line 166 "src/parser.y"
                    {(yyval.node) = new UnaryOperator(*(yyvsp[0].string));}
#line 1820 "src/parser.tab.cpp"
    break;

  case 23: /* unary_operator: PTR_TIMES  */
#line 167 "src/parser.y"
                    {(yyval.node) = new UnaryOperator(*(yyvsp[0].string));}
#line 1826 "src/parser.tab.cpp"
    break;

  case 24: /* unary_operator: ADD_UNARY  */
#line 168 "src/parser.y"
                    {(yyval.node) = new UnaryOperator(*(yyvsp[0].string));}
#line 1832 "src/parser.tab.cpp"
    break;

  case 25: /* unary_operator: SUB_OP  */
#line 169 "src/parser.y"
                 {(yyval.node) = new UnaryOperator(*(yyvsp[0].string));}
#line 1838 "src/parser.tab.cpp"
    break;

  case 26: /* unary_operator: TILDE  */
#line 170 "src/parser.y"
                {(yyval.node) = new UnaryOperator(*(yyvsp[0].string));}
#line 1844 "src/parser.tab.cpp"
    break;

  case 27: /* unary_operator: EXCLA  */
#line 171 "src/parser.y"
                {(yyval.node) = new UnaryOperator(*(yyvsp[0].string));}
#line 1850 "src/parser.tab.cpp"
    break;

  case 28: /* cast_expression: unary_expression  */
#line 176 "src/parser.y"
                           {(yyval.node) = (yyvsp[0].node);}
#line 1856 "src/parser.tab.cpp"
    break;

  case 29: /* cast_expression: L_BRAC type_name R_BRAC cast_expression  */
#line 177 "src/parser.y"
                                                  {(yyval.node) = new CastExpressionNode(*(yyvsp[-3].string), (yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 1862 "src/parser.tab.cpp"
    break;

  case 30: /* multiplicative_expression: cast_expression  */
#line 182 "src/parser.y"
                          {(yyval.node) = (yyvsp[0].node);}
#line 1868 "src/parser.tab.cpp"
    break;

  case 31: /* multiplicative_expression: multiplicative_expression PTR_TIMES cast_expression  */
#line 183 "src/parser.y"
                                                              { (yyval.node) = new MultiplicativeExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 1874 "src/parser.tab.cpp"
    break;

  case 32: /* multiplicative_expression: multiplicative_expression DIV_OP cast_expression  */
#line 184 "src/parser.y"
                                                           { (yyval.node) = new MultiplicativeExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 1880 "src/parser.tab.cpp"
    break;

  case 33: /* multiplicative_expression: multiplicative_expression MOD_OP cast_expression  */
#line 185 "src/parser.y"
                                                           { (yyval.node) = new MultiplicativeExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 1886 "src/parser.tab.cpp"
    break;

  case 34: /* additive_expression: multiplicative_expression  */
#line 189 "src/parser.y"
                                    {(yyval.node) = (yyvsp[0].node);}
#line 1892 "src/parser.tab.cpp"
    break;

  case 35: /* additive_expression: additive_expression ADD_UNARY multiplicative_expression  */
#line 190 "src/parser.y"
                                                                  { (yyval.node) = new AdditiveExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 1898 "src/parser.tab.cpp"
    break;

  case 36: /* additive_expression: additive_expression SUB_OP multiplicative_expression  */
#line 191 "src/parser.y"
                                                               { (yyval.node) = new AdditiveExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 1904 "src/parser.tab.cpp"
    break;

  case 37: /* shift_expression: additive_expression  */
#line 195 "src/parser.y"
                              {(yyval.node) = (yyvsp[0].node);}
#line 1910 "src/parser.tab.cpp"
    break;

  case 38: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 196 "src/parser.y"
                                                       { (yyval.node) = new ShiftExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 1916 "src/parser.tab.cpp"
    break;

  case 39: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 197 "src/parser.y"
                                                        { (yyval.node) = new ShiftExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 1922 "src/parser.tab.cpp"
    break;

  case 40: /* relational_expression: shift_expression  */
#line 201 "src/parser.y"
                           {(yyval.node) = (yyvsp[0].node);}
#line 1928 "src/parser.tab.cpp"
    break;

  case 41: /* relational_expression: relational_expression LT_OP shift_expression  */
#line 202 "src/parser.y"
                                                       { (yyval.node) = new RelationalExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 1934 "src/parser.tab.cpp"
    break;

  case 42: /* relational_expression: relational_expression GT_OP shift_expression  */
#line 203 "src/parser.y"
                                                       { (yyval.node) = new RelationalExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 1940 "src/parser.tab.cpp"
    break;

  case 43: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 204 "src/parser.y"
                                                       { (yyval.node) = new RelationalExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 1946 "src/parser.tab.cpp"
    break;

  case 44: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 205 "src/parser.y"
                                                       { (yyval.node) = new RelationalExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 1952 "src/parser.tab.cpp"
    break;

  case 45: /* equality_expression: relational_expression  */
#line 209 "src/parser.y"
                                {(yyval.node) = (yyvsp[0].node);}
#line 1958 "src/parser.tab.cpp"
    break;

  case 46: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 210 "src/parser.y"
                                                          { (yyval.node) = new EqualityExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 1964 "src/parser.tab.cpp"
    break;

  case 47: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 211 "src/parser.y"
                                                          { (yyval.node) = new EqualityExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 1970 "src/parser.tab.cpp"
    break;

  case 48: /* and_expression: equality_expression  */
#line 215 "src/parser.y"
                              {(yyval.node) = (yyvsp[0].node);}
#line 1976 "src/parser.tab.cpp"
    break;

  case 49: /* and_expression: and_expression AND_UNARY equality_expression  */
#line 216 "src/parser.y"
                                                       { (yyval.node) = new AndExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 1982 "src/parser.tab.cpp"
    break;

  case 50: /* exclusive_or_expression: and_expression  */
#line 220 "src/parser.y"
                         {(yyval.node) = (yyvsp[0].node);}
#line 1988 "src/parser.tab.cpp"
    break;

  case 51: /* exclusive_or_expression: exclusive_or_expression XOR_OP and_expression  */
#line 221 "src/parser.y"
                                                        { (yyval.node) = new ExclusiveOrExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 1994 "src/parser.tab.cpp"
    break;

  case 52: /* inclusive_or_expression: exclusive_or_expression  */
#line 225 "src/parser.y"
                                  {(yyval.node) = (yyvsp[0].node);}
#line 2000 "src/parser.tab.cpp"
    break;

  case 53: /* inclusive_or_expression: inclusive_or_expression OR_UNARY exclusive_or_expression  */
#line 226 "src/parser.y"
                                                                   { (yyval.node) = new InclusiveOrExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 2006 "src/parser.tab.cpp"
    break;

  case 54: /* logical_and_expression: inclusive_or_expression  */
#line 230 "src/parser.y"
                                  {(yyval.node) = (yyvsp[0].node);}
#line 2012 "src/parser.tab.cpp"
    break;

  case 55: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 231 "src/parser.y"
                                                                { (yyval.node) = new LogicalAndExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 2018 "src/parser.tab.cpp"
    break;

  case 56: /* logical_or_expression: logical_and_expression  */
#line 235 "src/parser.y"
                                 {(yyval.node) = (yyvsp[0].node);}
#line 2024 "src/parser.tab.cpp"
    break;

  case 57: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 236 "src/parser.y"
                                                             { (yyval.node) = new LogicalOrExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 2030 "src/parser.tab.cpp"
    break;

  case 58: /* conditional_expression: logical_or_expression  */
#line 240 "src/parser.y"
                                {(yyval.node) = (yyvsp[0].node);}
#line 2036 "src/parser.tab.cpp"
    break;

  case 59: /* conditional_expression: logical_or_expression TERNARY_OP expression COLON conditional_expression  */
#line 241 "src/parser.y"
                                                                                   { (yyval.node) = new TernaryExpressionNode((yyvsp[-4].node), *(yyvsp[-3].string), (yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 2042 "src/parser.tab.cpp"
    break;

  case 60: /* assignment_expression: conditional_expression  */
#line 248 "src/parser.y"
                                 {(yyval.node) = new AssignerExpressionNode((yyvsp[0].node));}
#line 2048 "src/parser.tab.cpp"
    break;

  case 61: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 249 "src/parser.y"
                                                                     { (yyval.node) = new AssigneeExpressionNode((yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 2054 "src/parser.tab.cpp"
    break;

  case 62: /* assignment_operator: EQ_SIGN  */
#line 254 "src/parser.y"
                  {(yyval.node) = new AssignmentOperatorNode(*(yyvsp[0].string));}
#line 2060 "src/parser.tab.cpp"
    break;

  case 63: /* assignment_operator: MUL_ASSIGN  */
#line 255 "src/parser.y"
                     {(yyval.node) = new AssignmentOperatorNode(*(yyvsp[0].string));}
#line 2066 "src/parser.tab.cpp"
    break;

  case 64: /* assignment_operator: DIV_ASSIGN  */
#line 256 "src/parser.y"
                     {(yyval.node) = new AssignmentOperatorNode(*(yyvsp[0].string));}
#line 2072 "src/parser.tab.cpp"
    break;

  case 65: /* assignment_operator: MOD_ASSIGN  */
#line 257 "src/parser.y"
                     {(yyval.node) = new AssignmentOperatorNode(*(yyvsp[0].string));}
#line 2078 "src/parser.tab.cpp"
    break;

  case 66: /* assignment_operator: ADD_ASSIGN  */
#line 258 "src/parser.y"
                     {(yyval.node) = new AssignmentOperatorNode(*(yyvsp[0].string));}
#line 2084 "src/parser.tab.cpp"
    break;

  case 67: /* assignment_operator: SUB_ASSIGN  */
#line 259 "src/parser.y"
                     {(yyval.node) = new AssignmentOperatorNode(*(yyvsp[0].string));}
#line 2090 "src/parser.tab.cpp"
    break;

  case 68: /* assignment_operator: LEFT_ASSIGN  */
#line 260 "src/parser.y"
                      {(yyval.node) = new AssignmentOperatorNode(*(yyvsp[0].string));}
#line 2096 "src/parser.tab.cpp"
    break;

  case 69: /* assignment_operator: RIGHT_ASSIGN  */
#line 261 "src/parser.y"
                       {(yyval.node) = new AssignmentOperatorNode(*(yyvsp[0].string));}
#line 2102 "src/parser.tab.cpp"
    break;

  case 70: /* assignment_operator: AND_ASSIGN  */
#line 262 "src/parser.y"
                     {(yyval.node) = new AssignmentOperatorNode(*(yyvsp[0].string));}
#line 2108 "src/parser.tab.cpp"
    break;

  case 71: /* assignment_operator: XOR_ASSIGN  */
#line 263 "src/parser.y"
                     {(yyval.node) = new AssignmentOperatorNode(*(yyvsp[0].string));}
#line 2114 "src/parser.tab.cpp"
    break;

  case 72: /* assignment_operator: OR_ASSIGN  */
#line 264 "src/parser.y"
                    {(yyval.node) = new AssignmentOperatorNode(*(yyvsp[0].string));}
#line 2120 "src/parser.tab.cpp"
    break;

  case 73: /* expression: assignment_expression  */
#line 268 "src/parser.y"
                                { (yyval.node) = new ExpressionNode((yyvsp[0].node));}
#line 2126 "src/parser.tab.cpp"
    break;

  case 74: /* expression: expression COMMA assignment_expression  */
#line 269 "src/parser.y"
                                                 { (yyval.node) = new ExpressionNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node)); }
#line 2132 "src/parser.tab.cpp"
    break;

  case 75: /* constant_expression: conditional_expression  */
#line 273 "src/parser.y"
                                 {(yyval.node) = new ConstantExpressionNode((yyvsp[0].node));}
#line 2138 "src/parser.tab.cpp"
    break;

  case 76: /* declaration: declaration_specifiers SEMI  */
#line 278 "src/parser.y"
                                      { (yyval.node) = new DeclarationNode((yyvsp[-1].node));}
#line 2144 "src/parser.tab.cpp"
    break;

  case 77: /* declaration: declaration_specifiers init_declarator_list SEMI  */
#line 280 "src/parser.y"
        { 
		std::string type;
		StorageClassSpecifierNode* storageClass = dynamic_cast<StorageClassSpecifierNode*>((yyvsp[-2].node)->getChildren()[0]);


		if (storageClass != NULL )
		{
			
			DeclarationSpecNode *declSpec = dynamic_cast<DeclarationSpecNode*>((yyvsp[-2].node));
			if (declSpec == NULL) {throw std::runtime_error("declaration: could not find DeclarationSpecNode");}
			type = declSpec->getTypeString();
		

		InitDeclarationListNode *initDeclList = dynamic_cast<InitDeclarationListNode*>((yyvsp[-1].node));
		if (initDeclList == NULL) {throw std::runtime_error("typedef: could not find InitDeclarationList");} 
		
		for (int i = 0; i < (int)initDeclList->getChildren().size(); i++)
		{
			InitDeclaratorNode *initDecl = dynamic_cast<InitDeclaratorNode*>(initDeclList->getChildren()[i]);
			if (initDecl == NULL){throw std::runtime_error("could not find InitDeclaratorNode typdef");}
			DeclaratorNode *declNode = dynamic_cast<DeclaratorNode*>(initDecl->getChildren()[0]);
			if (declNode == NULL){throw std::runtime_error("could not find declarator node typedef");}
		    std::string id = declNode->getDirDeclaratorId();
			trk->addTypedef(id, type);
		}

		}
		else
		{
			// std::cout << " hit " << std::endl;
			int typeSize;
			if (trk->getCurrentScopeId() != "global")
			{
				if (dynamic_cast<EnumSpecifierNode*>((dynamic_cast<DeclarationSpecNode*>((yyvsp[-2].node))->getChildren()[0])) != NULL)
				{
					typeSize = 8; // 8 bytes for enum, overestimates
				}	
				else
				{
					typeSize =dynamic_cast<DeclarationSpecNode*>((yyvsp[-2].node))->getTypeSize();
				}
				int declarationLength = dynamic_cast<InitDeclarationListNode*>((yyvsp[-1].node))->getTotalDeclarations();
				// std::cout << " total declarations : " << declarationLength << std::endl;
				trk->allocateMemory( trk->getCurrentScopeId() , typeSize * (declarationLength)); // overestimates, but that's ok

			}

			(yyval.node) = new DeclarationNode((yyvsp[-2].node), (yyvsp[-1].node));
		}

	}
#line 2200 "src/parser.tab.cpp"
    break;

  case 78: /* declaration_specifiers: storage_class_specifier  */
#line 335 "src/parser.y"
                                  { (yyval.node) = new DeclarationSpecNode((yyvsp[0].node));}
#line 2206 "src/parser.tab.cpp"
    break;

  case 79: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 337 "src/parser.y"
        {
		(yyval.node) = new DeclarationSpecNode((yyvsp[-1].node));
		for (auto child : (yyvsp[0].node)->getChildren())
		{
			(yyval.node)->addChild(child);
		}
	}
#line 2218 "src/parser.tab.cpp"
    break;

  case 80: /* declaration_specifiers: type_specifier  */
#line 344 "src/parser.y"
                         { (yyval.node) = new DeclarationSpecNode((yyvsp[0].node));}
#line 2224 "src/parser.tab.cpp"
    break;

  case 81: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 346 "src/parser.y"
        {
		(yyval.node) = new DeclarationSpecNode((yyvsp[-1].node));
		for (auto child : (yyvsp[0].node)->getChildren())
		{
			(yyval.node)->addChild(child);
		}

	}
#line 2237 "src/parser.tab.cpp"
    break;

  case 82: /* declaration_specifiers: type_qualifier  */
#line 355 "src/parser.y"
        {
		(yyval.node) = new DeclarationSpecNode((yyvsp[0].node));
	}
#line 2245 "src/parser.tab.cpp"
    break;

  case 83: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 359 "src/parser.y"
        {
		(yyval.node) = new DeclarationSpecNode((yyvsp[-1].node));
		for (auto child : (yyvsp[0].node)->getChildren())
		{
			(yyval.node)->addChild(child);
		}
	}
#line 2257 "src/parser.tab.cpp"
    break;

  case 84: /* init_declarator_list: init_declarator  */
#line 370 "src/parser.y"
                          {(yyval.node) = new InitDeclarationListNode((yyvsp[0].node));}
#line 2263 "src/parser.tab.cpp"
    break;

  case 85: /* $@1: %empty  */
#line 371 "src/parser.y"
                                                     {}
#line 2269 "src/parser.tab.cpp"
    break;

  case 86: /* init_declarator_list: init_declarator_list COMMA init_declarator $@1  */
#line 372 "src/parser.y"
        {
		(yyval.node) = (yyvsp[-3].node);
		(yyval.node)->addChild((yyvsp[-1].node));
	}
#line 2278 "src/parser.tab.cpp"
    break;

  case 87: /* init_declarator: declarator  */
#line 379 "src/parser.y"
                     { (yyval.node) = new InitDeclaratorNode((yyvsp[0].node));}
#line 2284 "src/parser.tab.cpp"
    break;

  case 88: /* init_declarator: declarator EQ_SIGN initializer  */
#line 380 "src/parser.y"
                                         { (yyval.node) = new InitDeclaratorNode((yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 2290 "src/parser.tab.cpp"
    break;

  case 89: /* storage_class_specifier: TYPEDEF  */
#line 384 "src/parser.y"
                  { (yyval.node) = new StorageClassSpecifierNode(*(yyvsp[0].string));}
#line 2296 "src/parser.tab.cpp"
    break;

  case 90: /* storage_class_specifier: EXTERN  */
#line 385 "src/parser.y"
                 {}
#line 2302 "src/parser.tab.cpp"
    break;

  case 91: /* storage_class_specifier: STATIC  */
#line 386 "src/parser.y"
                 {}
#line 2308 "src/parser.tab.cpp"
    break;

  case 92: /* storage_class_specifier: AUTO  */
#line 387 "src/parser.y"
               {}
#line 2314 "src/parser.tab.cpp"
    break;

  case 93: /* storage_class_specifier: REGISTER  */
#line 388 "src/parser.y"
                   {}
#line 2320 "src/parser.tab.cpp"
    break;

  case 94: /* type_specifier: VOID  */
#line 392 "src/parser.y"
               { (yyval.node) = new TypeNode(*(yyvsp[0].string));}
#line 2326 "src/parser.tab.cpp"
    break;

  case 95: /* type_specifier: CHAR  */
#line 393 "src/parser.y"
               { (yyval.node) = new TypeNode(*(yyvsp[0].string));}
#line 2332 "src/parser.tab.cpp"
    break;

  case 96: /* type_specifier: SHORT  */
#line 394 "src/parser.y"
                { (yyval.node) = new TypeNode(*(yyvsp[0].string));}
#line 2338 "src/parser.tab.cpp"
    break;

  case 97: /* type_specifier: INT  */
#line 395 "src/parser.y"
              {(yyval.node) = new TypeNode(*(yyvsp[0].string));}
#line 2344 "src/parser.tab.cpp"
    break;

  case 98: /* type_specifier: LONG  */
#line 396 "src/parser.y"
               { (yyval.node) = new TypeNode(*(yyvsp[0].string));}
#line 2350 "src/parser.tab.cpp"
    break;

  case 99: /* type_specifier: FLOAT  */
#line 397 "src/parser.y"
                { (yyval.node) = new TypeNode(*(yyvsp[0].string));}
#line 2356 "src/parser.tab.cpp"
    break;

  case 100: /* type_specifier: DOUBLE  */
#line 398 "src/parser.y"
                 { (yyval.node) = new TypeNode(*(yyvsp[0].string));}
#line 2362 "src/parser.tab.cpp"
    break;

  case 101: /* type_specifier: SIGNED  */
#line 399 "src/parser.y"
                 { (yyval.node) = new TypeNode(*(yyvsp[0].string));}
#line 2368 "src/parser.tab.cpp"
    break;

  case 102: /* type_specifier: UNSIGNED  */
#line 400 "src/parser.y"
                   { (yyval.node) = new TypeNode(*(yyvsp[0].string));}
#line 2374 "src/parser.tab.cpp"
    break;

  case 103: /* type_specifier: struct_or_union_specifier  */
#line 401 "src/parser.y"
                                    {(yyval.node) = (yyvsp[0].node);}
#line 2380 "src/parser.tab.cpp"
    break;

  case 104: /* type_specifier: enum_specifier  */
#line 402 "src/parser.y"
                         {(yyval.node) = (yyvsp[0].node);}
#line 2386 "src/parser.tab.cpp"
    break;

  case 105: /* type_specifier: TYPE_NAME  */
#line 404 "src/parser.y"
        {
		std::string tmpType = trk->getTypedefType(*(yyvsp[0].string));
		(yyval.node) = new TypeNode(tmpType);
	}
#line 2395 "src/parser.tab.cpp"
    break;

  case 106: /* struct_or_union_specifier: struct_or_union IDENTIFIER L_CURL struct_declaration_list R_CURL  */
#line 412 "src/parser.y"
                                                                           { (yyval.node) = new StructSpecifierNode((yyvsp[-4].node), *(yyvsp[-3].string), (yyvsp[-1].node));}
#line 2401 "src/parser.tab.cpp"
    break;

  case 107: /* struct_or_union_specifier: struct_or_union L_CURL struct_declaration_list R_CURL  */
#line 413 "src/parser.y"
                                                                {(yyval.node) = new StructSpecifierNode((yyvsp[-3].node), (yyvsp[-1].node));}
#line 2407 "src/parser.tab.cpp"
    break;

  case 108: /* struct_or_union_specifier: struct_or_union IDENTIFIER  */
#line 414 "src/parser.y"
                                     {(yyval.node) = new StructSpecifierNode((yyvsp[-1].node), *(yyvsp[0].string));}
#line 2413 "src/parser.tab.cpp"
    break;

  case 109: /* struct_or_union: STRUCT  */
#line 418 "src/parser.y"
                 { (yyval.node) = new StructTerminal(*(yyvsp[0].string)); }
#line 2419 "src/parser.tab.cpp"
    break;

  case 110: /* struct_or_union: UNION  */
#line 419 "src/parser.y"
                {}
#line 2425 "src/parser.tab.cpp"
    break;

  case 111: /* struct_declaration_list: struct_declaration  */
#line 423 "src/parser.y"
                             { (yyval.node) = new StructDeclarationListNode((yyvsp[0].node));}
#line 2431 "src/parser.tab.cpp"
    break;

  case 112: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 425 "src/parser.y"
        {
		(yyval.node) = (yyvsp[-1].node);
		(yyval.node)->addChild((yyvsp[0].node));
	}
#line 2440 "src/parser.tab.cpp"
    break;

  case 113: /* struct_declaration: specifier_qualifier_list struct_declarator_list SEMI  */
#line 432 "src/parser.y"
                                                               {(yyval.node) = new StructDeclarationNode((yyvsp[-2].node), (yyvsp[-1].node));}
#line 2446 "src/parser.tab.cpp"
    break;

  case 114: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 438 "src/parser.y"
        {}
#line 2452 "src/parser.tab.cpp"
    break;

  case 115: /* specifier_qualifier_list: type_specifier  */
#line 439 "src/parser.y"
                         {(yyval.node) = (yyvsp[0].node);}
#line 2458 "src/parser.tab.cpp"
    break;

  case 116: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list  */
#line 441 "src/parser.y"
        {
		(yyval.node) = new StructTypeSpecListNode((yyvsp[0].node));
		(yyval.node)->getChildren().insert((yyval.node)->getChildren().begin(), (yyvsp[-1].node));
	}
#line 2467 "src/parser.tab.cpp"
    break;

  case 117: /* specifier_qualifier_list: type_qualifier  */
#line 446 "src/parser.y"
        {
		(yyval.node) = new StructTypeSpecListNode((yyvsp[0].node));
	}
#line 2475 "src/parser.tab.cpp"
    break;

  case 118: /* struct_declarator_list: struct_declarator  */
#line 452 "src/parser.y"
                            {(yyval.node) = new StructDeclaratorListNode((yyvsp[0].node));}
#line 2481 "src/parser.tab.cpp"
    break;

  case 119: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 454 "src/parser.y"
        {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->addChild((yyvsp[0].node));
	}
#line 2490 "src/parser.tab.cpp"
    break;

  case 120: /* struct_declarator: declarator  */
#line 461 "src/parser.y"
                     {(yyval.node) = new StructDeclaratorNode((yyvsp[0].node));}
#line 2496 "src/parser.tab.cpp"
    break;

  case 121: /* struct_declarator: COLON constant_expression  */
#line 462 "src/parser.y"
                                    {(yyval.node) = new StructDeclaratorNode((yyvsp[0].node));}
#line 2502 "src/parser.tab.cpp"
    break;

  case 122: /* struct_declarator: declarator COLON constant_expression  */
#line 463 "src/parser.y"
                                               { (yyval.node) = new StructDeclaratorNode((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2508 "src/parser.tab.cpp"
    break;

  case 123: /* enum_specifier: ENUM L_CURL enumerator_list R_CURL  */
#line 467 "src/parser.y"
                                             {(yyval.node) = new EnumSpecifierNode(*(yyvsp[-3].string), (yyvsp[-1].node));}
#line 2514 "src/parser.tab.cpp"
    break;

  case 124: /* enum_specifier: ENUM IDENTIFIER L_CURL enumerator_list R_CURL  */
#line 469 "src/parser.y"
        {
		(yyval.node) = new EnumSpecifierNode(*(yyvsp[-4].string), (yyvsp[-1].node));
		IdentifierNode* id = new IdentifierNode(*(yyvsp[-3].string));
		(yyval.node)->addChild(id);
	}
#line 2524 "src/parser.tab.cpp"
    break;

  case 125: /* enum_specifier: ENUM IDENTIFIER  */
#line 475 "src/parser.y"
        {
		(yyval.node) = new EnumSpecifierNode(*(yyvsp[-1].string));
		IdentifierNode* id = new IdentifierNode(*(yyvsp[0].string));
		(yyval.node)->addChild(id);
	}
#line 2534 "src/parser.tab.cpp"
    break;

  case 126: /* enumerator_list: enumerator  */
#line 485 "src/parser.y"
        {
		(yyval.node) = new EnumListNode((yyvsp[0].node));
	}
#line 2542 "src/parser.tab.cpp"
    break;

  case 127: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 489 "src/parser.y"
        {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->addChild((yyvsp[0].node));
	}
#line 2551 "src/parser.tab.cpp"
    break;

  case 128: /* enumerator: IDENTIFIER  */
#line 496 "src/parser.y"
                     {(yyval.node) = new EnumIdNode(*(yyvsp[0].string));}
#line 2557 "src/parser.tab.cpp"
    break;

  case 129: /* enumerator: IDENTIFIER EQ_SIGN constant_expression  */
#line 498 "src/parser.y"
        {
		(yyval.node) = new EnumaratorNode(*(yyvsp[-2].string), (yyvsp[0].node));
	}
#line 2565 "src/parser.tab.cpp"
    break;

  case 130: /* type_qualifier: CONST  */
#line 505 "src/parser.y"
                {(yyval.node) = new TypeQualNode (*(yyvsp[0].string));}
#line 2571 "src/parser.tab.cpp"
    break;

  case 131: /* type_qualifier: VOLATILE  */
#line 506 "src/parser.y"
                   {(yyval.node) = new TypeQualNode (*(yyvsp[0].string));}
#line 2577 "src/parser.tab.cpp"
    break;

  case 132: /* declarator: pointer direct_declarator  */
#line 511 "src/parser.y"
                                    { (yyval.node) = new DeclaratorNode((yyvsp[-1].node), (yyvsp[0].node));}
#line 2583 "src/parser.tab.cpp"
    break;

  case 133: /* declarator: direct_declarator  */
#line 512 "src/parser.y"
                            { (yyval.node) = new DeclaratorNode((yyvsp[0].node));}
#line 2589 "src/parser.tab.cpp"
    break;

  case 134: /* direct_declarator: IDENTIFIER  */
#line 517 "src/parser.y"
                      { (yyval.node) = new IdDirDeclarator(*(yyvsp[0].string));}
#line 2595 "src/parser.tab.cpp"
    break;

  case 135: /* direct_declarator: L_BRAC declarator R_BRAC  */
#line 519 "src/parser.y"
        {
		(yyval.node) = new DirDeclaratorNode((yyvsp[-1].node));
	}
#line 2603 "src/parser.tab.cpp"
    break;

  case 136: /* direct_declarator: direct_declarator L_SQ constant_expression R_SQ  */
#line 522 "src/parser.y"
                                                          { (yyval.node) = new ArrayDirDeclaratorWithSize((yyvsp[-3].node), *(yyvsp[-2].string), (yyvsp[-1].node), *(yyvsp[0].string));
		// int size = dynamic_cast<ConstantExpressionNode*>($3)->getValue(); used for debugging, calculates size of array
		// std::cout << "size of array: " << size << std::endl;  ca
	}
#line 2612 "src/parser.tab.cpp"
    break;

  case 137: /* direct_declarator: direct_declarator L_SQ R_SQ  */
#line 526 "src/parser.y"
                                      { (yyval.node) = new ArrayDirDeclaratorWithoutSize((yyvsp[-2].node), *(yyvsp[-1].string), *(yyvsp[0].string));}
#line 2618 "src/parser.tab.cpp"
    break;

  case 138: /* direct_declarator: direct_declarator L_BRAC parameter_type_list R_BRAC  */
#line 528 "src/parser.y"
        {
		(yyval.node) = new FuncDirDeclParamsNode((yyvsp[-3].node), *(yyvsp[-2].string), (yyvsp[-1].node), *(yyvsp[0].string));
		trk->addScope(dynamic_cast<IdDirDeclarator*>((yyvsp[-3].node))->getId());
		ParamListNode *tmp = dynamic_cast<ParamListNode*>((yyvsp[-1].node));
		if (tmp == NULL) { throw "expecting parameters in function"; }
		std::vector<std::string> paramTypes;
		for (int i = 0; i < (int)tmp->getChildren().size(); i++)
		{
			ParameterDeclarationNode* paramDeclTmp = dynamic_cast<ParameterDeclarationNode*>(tmp->getChildren()[i]);
			if (paramDeclTmp == NULL) { std::cout << "\nexpecting parameter declaration" << std::endl; }
			int size = paramDeclTmp->getTypeSize();
			paramTypes.push_back(paramDeclTmp->getTypeString());
			trk->allocateMemory( trk->getCurrentScopeId() , size); // overestimates, but that's ok
		}
		trk->addFunctionParams(dynamic_cast<IdDirDeclarator*>((yyvsp[-3].node))->getId(), paramTypes);
		// trk->printFunctionParams();
	}
#line 2640 "src/parser.tab.cpp"
    break;

  case 139: /* direct_declarator: direct_declarator L_BRAC identifier_list R_BRAC  */
#line 546 "src/parser.y"
        {
		(yyval.node) = new FuncDirDeclParamsNode((yyvsp[-3].node), *(yyvsp[-2].string), (yyvsp[-1].node), *(yyvsp[0].string));
	}
#line 2648 "src/parser.tab.cpp"
    break;

  case 140: /* direct_declarator: direct_declarator L_BRAC R_BRAC  */
#line 550 "src/parser.y"
        {
		trk->addScope(dynamic_cast<IdDirDeclarator*>((yyvsp[-2].node))->getId());	
		(yyval.node) = new FuncDirDeclNode((yyvsp[-2].node));
		CommonNodePtr tmp1 = new TerminalNode(*(yyvsp[-1].string));
		CommonNodePtr tmp2 = new TerminalNode(*(yyvsp[0].string));
		(yyval.node)->addChild(tmp1);
		(yyval.node)->addChild(tmp2);		
		trk->addFunctionParams(dynamic_cast<IdDirDeclarator*>((yyvsp[-2].node))->getId(), std::vector<std::string>());		
	}
#line 2662 "src/parser.tab.cpp"
    break;

  case 141: /* pointer: PTR_TIMES  */
#line 563 "src/parser.y"
                    {(yyval.node) = new TerminalNode(*(yyvsp[0].string));}
#line 2668 "src/parser.tab.cpp"
    break;

  case 142: /* pointer: PTR_TIMES type_qualifier_list  */
#line 564 "src/parser.y"
                                        { (yyval.node) = new PointerNode((yyvsp[0].node));}
#line 2674 "src/parser.tab.cpp"
    break;

  case 143: /* pointer: PTR_TIMES pointer  */
#line 565 "src/parser.y"
                            { (yyval.node) = new PointerNode(*(yyvsp[-1].string), (yyvsp[0].node)); }
#line 2680 "src/parser.tab.cpp"
    break;

  case 144: /* pointer: PTR_TIMES type_qualifier_list pointer  */
#line 566 "src/parser.y"
                                                {(yyval.node) = new PointerNode(*(yyvsp[-2].string), (yyvsp[-1].node), (yyvsp[0].node));}
#line 2686 "src/parser.tab.cpp"
    break;

  case 145: /* type_qualifier_list: type_qualifier  */
#line 571 "src/parser.y"
                         { }
#line 2692 "src/parser.tab.cpp"
    break;

  case 146: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 573 "src/parser.y"
        {}
#line 2698 "src/parser.tab.cpp"
    break;

  case 147: /* parameter_type_list: parameter_list  */
#line 578 "src/parser.y"
                         {(yyval.node) = (yyvsp[0].node);}
#line 2704 "src/parser.tab.cpp"
    break;

  case 148: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 579 "src/parser.y"
                                        {}
#line 2710 "src/parser.tab.cpp"
    break;

  case 149: /* parameter_list: parameter_declaration  */
#line 584 "src/parser.y"
                                {(yyval.node) = new ParamListNode((yyvsp[0].node));}
#line 2716 "src/parser.tab.cpp"
    break;

  case 150: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 586 "src/parser.y"
        {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->addChild((yyvsp[0].node));
	}
#line 2725 "src/parser.tab.cpp"
    break;

  case 151: /* parameter_declaration: declaration_specifiers declarator  */
#line 594 "src/parser.y"
                                            { (yyval.node) = new ParameterDeclarationNode((yyvsp[-1].node), (yyvsp[0].node));}
#line 2731 "src/parser.tab.cpp"
    break;

  case 152: /* parameter_declaration: declaration_specifiers abstract_declarator  */
#line 595 "src/parser.y"
                                                     {(yyval.node) = new ParameterDeclarationNode((yyvsp[-1].node), (yyvsp[0].node));}
#line 2737 "src/parser.tab.cpp"
    break;

  case 153: /* parameter_declaration: declaration_specifiers  */
#line 596 "src/parser.y"
                                 { (yyval.node) = new ParameterDeclarationNode((yyvsp[0].node)); }
#line 2743 "src/parser.tab.cpp"
    break;

  case 154: /* identifier_list: IDENTIFIER  */
#line 601 "src/parser.y"
                     {(yyval.node) = new IdListNode(*(yyvsp[0].string));}
#line 2749 "src/parser.tab.cpp"
    break;

  case 155: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 603 "src/parser.y"
        {
		(yyval.node) = (yyvsp[-2].node);
		dynamic_cast<IdListNode*>((yyval.node))->addChildId(*(yyvsp[0].string));
	}
#line 2758 "src/parser.tab.cpp"
    break;

  case 156: /* type_name: specifier_qualifier_list  */
#line 612 "src/parser.y"
        {

	}
#line 2766 "src/parser.tab.cpp"
    break;

  case 157: /* type_name: specifier_qualifier_list abstract_declarator  */
#line 616 "src/parser.y"
        {
		
	}
#line 2774 "src/parser.tab.cpp"
    break;

  case 158: /* abstract_declarator: pointer  */
#line 623 "src/parser.y"
                  { (yyval.node) = new AbstractDeclaratorNode((yyvsp[0].node));}
#line 2780 "src/parser.tab.cpp"
    break;

  case 159: /* abstract_declarator: direct_abstract_declarator  */
#line 624 "src/parser.y"
                                     { (yyval.node) = new AbstractDeclaratorNode((yyvsp[0].node));}
#line 2786 "src/parser.tab.cpp"
    break;

  case 160: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 625 "src/parser.y"
                                             { (yyval.node) = new AbstractDeclaratorNode((yyvsp[-1].node), (yyvsp[0].node));}
#line 2792 "src/parser.tab.cpp"
    break;

  case 161: /* direct_abstract_declarator: L_BRAC abstract_declarator R_BRAC  */
#line 629 "src/parser.y"
                                            {}
#line 2798 "src/parser.tab.cpp"
    break;

  case 162: /* direct_abstract_declarator: L_SQ L_SQ  */
#line 630 "src/parser.y"
                    {}
#line 2804 "src/parser.tab.cpp"
    break;

  case 163: /* direct_abstract_declarator: L_SQ constant_expression R_SQ  */
#line 631 "src/parser.y"
                                        {}
#line 2810 "src/parser.tab.cpp"
    break;

  case 164: /* direct_abstract_declarator: direct_abstract_declarator L_SQ L_SQ  */
#line 632 "src/parser.y"
                                               {}
#line 2816 "src/parser.tab.cpp"
    break;

  case 165: /* direct_abstract_declarator: direct_abstract_declarator L_SQ constant_expression R_SQ  */
#line 633 "src/parser.y"
                                                                   {}
#line 2822 "src/parser.tab.cpp"
    break;

  case 166: /* direct_abstract_declarator: L_BRAC R_BRAC  */
#line 634 "src/parser.y"
                        {}
#line 2828 "src/parser.tab.cpp"
    break;

  case 167: /* direct_abstract_declarator: L_BRAC parameter_type_list R_BRAC  */
#line 635 "src/parser.y"
                                            {}
#line 2834 "src/parser.tab.cpp"
    break;

  case 168: /* direct_abstract_declarator: direct_abstract_declarator L_BRAC R_BRAC  */
#line 636 "src/parser.y"
                                                   {}
#line 2840 "src/parser.tab.cpp"
    break;

  case 169: /* direct_abstract_declarator: direct_abstract_declarator L_BRAC parameter_type_list R_BRAC  */
#line 637 "src/parser.y"
                                                                       {}
#line 2846 "src/parser.tab.cpp"
    break;

  case 170: /* initializer: assignment_expression  */
#line 643 "src/parser.y"
                                { (yyval.node) = new InitializerNode((yyvsp[0].node)); }
#line 2852 "src/parser.tab.cpp"
    break;

  case 171: /* initializer: L_CURL initializer_list R_CURL  */
#line 644 "src/parser.y"
                                         { (yyval.node) = new InitializerNode(*(yyvsp[-2].string), (yyvsp[-1].node), *(yyvsp[0].string));}
#line 2858 "src/parser.tab.cpp"
    break;

  case 172: /* initializer: L_CURL initializer_list COMMA R_CURL  */
#line 645 "src/parser.y"
                                               { (yyval.node) = new InitializerNode(*(yyvsp[-3].string), (yyvsp[-2].node), *(yyvsp[-1].string), *(yyvsp[0].string));}
#line 2864 "src/parser.tab.cpp"
    break;

  case 173: /* initializer_list: initializer  */
#line 650 "src/parser.y"
                      { (yyval.node) = new InitializerListNode((yyvsp[0].node));}
#line 2870 "src/parser.tab.cpp"
    break;

  case 174: /* initializer_list: initializer_list COMMA initializer  */
#line 652 "src/parser.y"
        {
		(yyval.node) = new InitializerListNode((yyvsp[-2].node));
		(yyval.node)->addChild((yyvsp[0].node));
	}
#line 2879 "src/parser.tab.cpp"
    break;

  case 175: /* statement: labeled_statement  */
#line 660 "src/parser.y"
                            { (yyval.node) = (yyvsp[0].node);}
#line 2885 "src/parser.tab.cpp"
    break;

  case 176: /* statement: compound_statement  */
#line 661 "src/parser.y"
                             { (yyval.node) = new StatementNode((yyvsp[0].node));}
#line 2891 "src/parser.tab.cpp"
    break;

  case 177: /* statement: expression_statement  */
#line 662 "src/parser.y"
                               { (yyval.node) = new StatementNode((yyvsp[0].node));}
#line 2897 "src/parser.tab.cpp"
    break;

  case 178: /* statement: selection_statement  */
#line 663 "src/parser.y"
                              { (yyval.node) = new StatementNode((yyvsp[0].node));}
#line 2903 "src/parser.tab.cpp"
    break;

  case 179: /* statement: iteration_statement  */
#line 664 "src/parser.y"
                              { (yyval.node) = new StatementNode((yyvsp[0].node));}
#line 2909 "src/parser.tab.cpp"
    break;

  case 180: /* statement: jump_statement  */
#line 665 "src/parser.y"
                         { (yyval.node) = new StatementNode((yyvsp[0].node));}
#line 2915 "src/parser.tab.cpp"
    break;

  case 181: /* labeled_statement: IDENTIFIER COLON statement  */
#line 671 "src/parser.y"
                                     {}
#line 2921 "src/parser.tab.cpp"
    break;

  case 182: /* labeled_statement: CASE constant_expression COLON statement  */
#line 672 "src/parser.y"
                                                   {(yyval.node) = new LabelStatementNode(*(yyvsp[-3].string), (yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 2927 "src/parser.tab.cpp"
    break;

  case 183: /* labeled_statement: DEFAULT COLON statement  */
#line 673 "src/parser.y"
                                  { (yyval.node) = new DefualtStatementNode(*(yyvsp[-2].string), (yyvsp[0].node)); }
#line 2933 "src/parser.tab.cpp"
    break;

  case 184: /* compound_statement: L_CURL R_CURL  */
#line 678 "src/parser.y"
                        {(yyval.node) = new CompoundStatementNode(*(yyvsp[-1].string), *(yyvsp[0].string));}
#line 2939 "src/parser.tab.cpp"
    break;

  case 185: /* compound_statement: L_CURL statement_list R_CURL  */
#line 679 "src/parser.y"
                                       {(yyval.node) = new CompoundStatementNode(*(yyvsp[-2].string), (yyvsp[-1].node),*(yyvsp[0].string));}
#line 2945 "src/parser.tab.cpp"
    break;

  case 186: /* compound_statement: L_CURL declaration_list R_CURL  */
#line 680 "src/parser.y"
                                         {(yyval.node) = new CompoundStatementNode(*(yyvsp[-2].string), (yyvsp[-1].node),*(yyvsp[0].string));}
#line 2951 "src/parser.tab.cpp"
    break;

  case 187: /* compound_statement: L_CURL declaration_list statement_list R_CURL  */
#line 681 "src/parser.y"
                                                        {(yyval.node) = new CompoundStatementNode(*(yyvsp[-3].string), (yyvsp[-2].node), (yyvsp[-1].node), *(yyvsp[0].string));}
#line 2957 "src/parser.tab.cpp"
    break;

  case 188: /* declaration_list: declaration  */
#line 685 "src/parser.y"
                      { (yyval.node) = new DeclarationListNode((yyvsp[0].node));}
#line 2963 "src/parser.tab.cpp"
    break;

  case 189: /* declaration_list: declaration_list declaration  */
#line 687 "src/parser.y"
        {
		(yyval.node) = (yyvsp[-1].node);
		(yyval.node)->addChild((yyvsp[0].node));
	}
#line 2972 "src/parser.tab.cpp"
    break;

  case 190: /* statement_list: statement  */
#line 694 "src/parser.y"
                    { (yyval.node) = new StatementListNode((yyvsp[0].node));}
#line 2978 "src/parser.tab.cpp"
    break;

  case 191: /* statement_list: statement_list statement  */
#line 696 "src/parser.y"
        {
		(yyval.node) = (yyvsp[-1].node);
		(yyval.node)->addChild((yyvsp[0].node));
	}
#line 2987 "src/parser.tab.cpp"
    break;

  case 192: /* expression_statement: SEMI  */
#line 703 "src/parser.y"
               {(yyval.node) = new ExpressionStatementNode(*(yyvsp[0].string));}
#line 2993 "src/parser.tab.cpp"
    break;

  case 193: /* expression_statement: expression SEMI  */
#line 704 "src/parser.y"
                          {(yyval.node) = new ExpressionStatementNode((yyvsp[-1].node), *(yyvsp[0].string));}
#line 2999 "src/parser.tab.cpp"
    break;

  case 194: /* selection_statement: IF L_BRAC expression R_BRAC statement  */
#line 708 "src/parser.y"
                                                             { (yyval.node) = new IfNoElseNode(*(yyvsp[-4].string), *(yyvsp[-3].string), (yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 3005 "src/parser.tab.cpp"
    break;

  case 195: /* selection_statement: IF L_BRAC expression R_BRAC statement ELSE statement  */
#line 709 "src/parser.y"
                                                               { (yyval.node) = new IfElseNode(*(yyvsp[-6].string), *(yyvsp[-5].string), (yyvsp[-4].node), *(yyvsp[-3].string), (yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 3011 "src/parser.tab.cpp"
    break;

  case 196: /* selection_statement: SWITCH L_BRAC expression R_BRAC statement  */
#line 711 "src/parser.y"
        {
		// trk->allocateMemory( trk->getCurrentScopeId() , 8); // bug in code not enough time to debug// overestimeate but that is ok
		// trk->setScopeAsCaller( trk->getCurrentScopeId() );
		(yyval.node) = new SwitchNode(*(yyvsp[-4].string), *(yyvsp[-3].string), (yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));
	}
#line 3021 "src/parser.tab.cpp"
    break;

  case 197: /* iteration_statement: WHILE L_BRAC expression R_BRAC statement  */
#line 719 "src/parser.y"
                                                   {(yyval.node) = new WhileNode(*(yyvsp[-4].string), *(yyvsp[-3].string), (yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node));}
#line 3027 "src/parser.tab.cpp"
    break;

  case 198: /* iteration_statement: DO statement WHILE L_BRAC expression R_BRAC SEMI  */
#line 720 "src/parser.y"
                                                           {}
#line 3033 "src/parser.tab.cpp"
    break;

  case 199: /* iteration_statement: FOR L_BRAC expression_statement expression_statement R_BRAC statement  */
#line 721 "src/parser.y"
                                                                                {(yyval.node) = new ForTwoStatementNode(*(yyvsp[-5].string), *(yyvsp[-4].string), (yyvsp[-3].node), (yyvsp[-2].node),*(yyvsp[-1].string), (yyvsp[0].node)); }
#line 3039 "src/parser.tab.cpp"
    break;

  case 200: /* iteration_statement: FOR L_BRAC expression_statement expression_statement expression R_BRAC statement  */
#line 722 "src/parser.y"
                                                                                           {(yyval.node) = new ForThreeStatementNode(*(yyvsp[-6].string), *(yyvsp[-5].string), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), *(yyvsp[-1].string), (yyvsp[0].node)); }
#line 3045 "src/parser.tab.cpp"
    break;

  case 201: /* jump_statement: GOTO IDENTIFIER SEMI  */
#line 726 "src/parser.y"
                               {}
#line 3051 "src/parser.tab.cpp"
    break;

  case 202: /* jump_statement: CONTINUE SEMI  */
#line 727 "src/parser.y"
                        { (yyval.node) = new BreakContinueNode(*(yyvsp[-1].string), *(yyvsp[0].string));}
#line 3057 "src/parser.tab.cpp"
    break;

  case 203: /* jump_statement: BREAK SEMI  */
#line 728 "src/parser.y"
                     { (yyval.node) = new BreakContinueNode(*(yyvsp[-1].string), *(yyvsp[0].string));}
#line 3063 "src/parser.tab.cpp"
    break;

  case 204: /* jump_statement: RETURN SEMI  */
#line 729 "src/parser.y"
                      { (yyval.node) = new ReturnNode(*(yyvsp[-1].string), *(yyvsp[0].string));}
#line 3069 "src/parser.tab.cpp"
    break;

  case 205: /* jump_statement: RETURN expression SEMI  */
#line 730 "src/parser.y"
                                 { (yyval.node) = new ReturnNode(*(yyvsp[-2].string), (yyvsp[-1].node), *(yyvsp[0].string));}
#line 3075 "src/parser.tab.cpp"
    break;

  case 206: /* program: translation_unit  */
#line 734 "src/parser.y"
                           { root = (yyval.node) = new ProgramNode((yyvsp[0].node)); }
#line 3081 "src/parser.tab.cpp"
    break;

  case 207: /* translation_unit: external_declaration  */
#line 738 "src/parser.y"
                               {(yyval.node) = new TranslationUnitNode((yyvsp[0].node));}
#line 3087 "src/parser.tab.cpp"
    break;

  case 208: /* translation_unit: translation_unit external_declaration  */
#line 740 "src/parser.y"
        {
		(yyval.node) = (yyvsp[-1].node);
		(yyval.node)->addChild((yyvsp[0].node));
	}
#line 3096 "src/parser.tab.cpp"
    break;

  case 209: /* external_declaration: function_definition  */
#line 747 "src/parser.y"
                              {(yyval.node) = new ExternalDeclarationNode((yyvsp[0].node));}
#line 3102 "src/parser.tab.cpp"
    break;

  case 210: /* external_declaration: declaration  */
#line 748 "src/parser.y"
                      {(yyval.node) = new ExternalDeclarationNode((yyvsp[0].node));}
#line 3108 "src/parser.tab.cpp"
    break;

  case 212: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 755 "src/parser.y"
        { 
		(yyval.node) = new FunctionNode((yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)); 
		if (trk->isCaller(trk->currentScopeId) == 0)
		{
			trk->setScopeAsCallee(trk->currentScopeId);
		}
		trk->resetScope();
	}
#line 3121 "src/parser.tab.cpp"
    break;


#line 3125 "src/parser.tab.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 767 "src/parser.y"


extern char yytext[];
extern int column;

void yyerror(std::string s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s.c_str());
}

CommonNode *root; // Definition of variable (to match declaration earlier)

CommonNode *parseAST()
{
  root=0;
  yyparse();
  std::cout << "Parsing complete" << std::endl;
  return root;
}

Tracker *getTracker()
{
	return trk;
}
