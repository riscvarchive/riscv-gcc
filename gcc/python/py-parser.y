%{
/* This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* Grammar largely bassed on
 * - http://docs.python.org/release/2.5.2/ref/grammar.txt
 */

#include "config.h"
#include "system.h"
#include "ansidecl.h"
#include "coretypes.h"
#include "opts.h"
#include "tree.h"
#include "gimple.h"
#include "toplev.h"
#include "debug.h"
#include "options.h"
#include "flags.h"
#include "convert.h"
#include "diagnostic-core.h"
#include "langhooks.h"
#include "langhooks-def.h"
#include "target.h"
#include <gmp.h>
#include <mpfr.h>

#include "vec.h"
#include "hashtab.h"

#include "gpython.h"
#include "py-il-dot.h"
#include "py-il-tree.h"
#include "py-vec.h"

#if !defined(YYLLOC_DEFAULT)
# define YYLLOC_DEFAULT(Current, Rhs, N)                           \
  do								   \
    if (N)							   \
      {								   \
	(Current).line = YYRHSLOC(Rhs, 1).line;			   \
	(Current).column = YYRHSLOC(Rhs, 1).column;		   \
      }								   \
    else							   \
      {								   \
	(Current).line = YYRHSLOC(Rhs, 0).line;			   \
	(Current).column = YYRHSLOC(Rhs, 0).column;		   \
      }								   \
  while (0)
#endif

static VEC(gpydot,gc) * gpy_symbol_stack;
extern int yylineno;

extern int yylex (void);
extern void yyerror (const char *);
%}

%union {
  char * string;
  long int integer;
  gpy_dot_tree_t * symbol;
}

%debug
/* Locations will be added later to add debugging information */
%locations

%error-verbose
%start declarations

%token CLASS "class"
%token DEF "def"
%token BREAK "break"
%token CONTINUE "continue"
%token RETURN "return"
%token FOR "for"
%token WHILE "while"
%token IN "in"
%token PRINT "print"

%token EXCEPT "except"
%token FINALLY "finally"
%token TRY "try"

%token AS "as"
%token ASSERT "assert"
%token DEL "del"
%token EXEC "exec"
%token FROM "from"
%token GLOBAL "global"
%token IMPORT "import"
%token IS "is"
%token LAMBDA "lambda"
%token PASS "pass"
%token RAISE "raise"
%token WITH "with"
%token YIELD "yield"

%token IF "if"
%token ELIF "elif"
%token ELSE "else"

%token OR "or"
%token AND "and"
%token NOT "not"

%token V_TRUE "True"
%token V_FALSE "False"

%token NEWLINE
%token INDENT
%token DEDENT

%token EQUAL_EQUAL
%token NOT_EQUAL
%token LESS
%token GREATER
%token LESS_EQUAL
%token GREATER_EQUAL

%token NONE
%token<string> IDENTIFIER
%token<string> STRING
%token<integer> INTEGER
%token<decimal> DOUBLE

%type<symbol> statement
%type<symbol> compound_stmt
%type<symbol> stmt_list
%type<symbol> simple_stmt
%type<symbol> expression_stmt
%type<symbol> assignment_stmt
%type<symbol> target_list
%type<symbol> target
%type<symbol> expression_list
%type<symbol> funcdef
%type<symbol> classdef
%type<symbol> suite
%type<symbol> suite_statement_list
%type<symbol> indent_stmt
%type<symbol> literal
%type<symbol> m_expr
%type<symbol> a_expr
%type<symbol> u_expr
%type<symbol> atom
%type<symbol> primary
%type<symbol> expression
%type<symbol> conditional_expression
%type<symbol> call
%type<symbol> shift_expr
%type<symbol> comparison
%type<symbol> decl
%type<symbol> argument_list
%type<symbol> argument_list_stmt
%type<symbol> parameter_list
%type<symbol> parameter_list_stmt
%type<symbol> print_stmt
%type<symbol> attributeref
%type<symbol> ident

%type<symbol> funcname
%type<symbol> classname

%left '-' '+'
%left '*' '/'
%right '='
%nonassoc UMINUS

%%

declarations: /* epsilon */
            | declarations decl
            {
	      if ($2)
		{
		  gpy_stmt_process_decl ($2); 
		}
	    }
            ;

decl: NEWLINE
    { $$ = NULL; }
    | statement
    ;

compound_stmt: funcdef
             | classdef
             ;

classdef: CLASS classname ':' suite
        {
	  gpy_dot_tree_t *dot = dot_build_class_decl ($2, $4);
	  $$ = dot;
	}
        ;

classname: IDENTIFIER
         { $$ = dot_build_identifier ($1); }
         ;

funcname: IDENTIFIER
        { $$ = dot_build_identifier ($1); }
        ;

parameter_list_stmt:
                   { $$ = NULL; }
                   | parameter_list
                   { $$ = VEC_pop (gpydot, gpy_symbol_stack); }
		   ;

parameter_list: parameter_list ',' target
              {
		DOT_CHAIN($1) = $3;
		$$ = $3;
	      }
              | target
              {
		VEC_safe_push (gpydot, gc,
			       gpy_symbol_stack, $1);
		$$ = $1;
	      }
              ;

funcdef: DEF funcname '(' parameter_list_stmt ')' ':' suite
       {
	 gpy_dot_tree_t *dot = dot_build_func_decl ($2, $4, $7);
	 $$ = dot;
       }
       ;

suite: stmt_list NEWLINE
     | NEWLINE INDENT suite_statement_list DEDENT
     {
       $$ = VEC_pop (gpydot, gpy_symbol_stack);
       // printf ("poping suite!\n");
     }
     ;

suite_statement_list: suite_statement_list indent_stmt
                   {
		     DOT_CHAIN($1) = $2;
		     $$ = $2;
		   }
                   | indent_stmt
                   {
		     VEC_safe_push (gpydot, gc,
				    gpy_symbol_stack, $1);
		     $$ = $1;
		   }
                   ;

indent_stmt: statement
           ;

statement: stmt_list NEWLINE
         | compound_stmt
         ;

stmt_list: simple_stmt 
         ;

simple_stmt: assignment_stmt
           | expression_stmt
           | print_stmt
           ;

argument_list_stmt:
                  { $$ = NULL; }
                  | argument_list
                  { $$ = VEC_pop (gpydot, gpy_symbol_stack); }
		  ;

argument_list: argument_list ',' expression
             {
	       DOT_CHAIN($1) = $3;
	       $$ = $3;
	     }
             | expression
             {
	       VEC_safe_push (gpydot, gc,
			      gpy_symbol_stack, $1);
	       $$ = $1;
	     }
             ;

print_stmt: PRINT argument_list_stmt
          {
	    gpy_dot_tree_t *dot = dot_build_decl1 (D_PRINT_STMT, $2);
	    $$ = dot;
	  }
	  ;


expression_stmt: expression_list
          ;

assignment_stmt: target_list '=' expression_list
               {
		 gpy_dot_tree_t *dot = dot_build_decl2 (D_MODIFY_EXPR, $1, $3);
		 $$ = dot;
	       }
               ;
  
target_list: target
           ;
  
target: IDENTIFIER
      {
	gpy_dot_tree_t *dot = dot_build_identifier ($1);
	$$ = dot;
      }
      | attributeref
      ;

ident: IDENTIFIER
     { $$ = dot_build_identifier ($1); }
     ;

attributeref: primary '.' ident
            {
	      $$ = dot_build_decl2 (D_ATTRIB_REF, $1, $3);
            }
            ;

expression_list: expression
               ;

expression: conditional_expression
          ;
  
conditional_expression: comparison
                      ;

u_expr: primary
       ;

m_expr: u_expr
      | m_expr '*' u_expr
      {
	gpy_dot_tree_t *dot = dot_build_decl2 (D_MULT_EXPR, $1, $3);
	$$ = dot;
      }
      | m_expr '/' u_expr
      {
	gpy_dot_tree_t *dot = dot_build_decl2 (D_DIVD_EXPR, $1, $3);
	$$ = dot;
      }
      ;
  
a_expr: m_expr
      | a_expr '+' m_expr
      {
	gpy_dot_tree_t *dot = dot_build_decl2 (D_ADD_EXPR, $1, $3);
	$$ = dot;
      }
      | a_expr '-' m_expr
      {
	gpy_dot_tree_t *dot = dot_build_decl2 (D_MINUS_EXPR, $1, $3);
	$$ = dot;
      }
      ;

shift_expr: a_expr
          ;

comparison: shift_expr
          ;

literal: INTEGER
       {
	 gpy_dot_tree_t *dot = dot_build_integer ($1);
	 $$ = dot;
       }
       | STRING
       {
	 gpy_dot_tree_t *dot = dot_build_string ($1);
	 $$ = dot;
       }
       ;

atom: ident
    | literal
    ;

call: IDENTIFIER '(' argument_list_stmt ')'
    {
      gpy_dot_tree_t *dot = dot_build_decl2 (D_CALL_EXPR,
					     dot_build_identifier($1),
					     $3);
      $$ = dot;
    }
    ;

primary: atom
       | call
       | attributeref
       ;

%%

void yyerror( const char *msg )
{
  error( "%s at line %i\n", msg, yylineno );
}
