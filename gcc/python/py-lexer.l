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

#include "y.py.h"

  extern int yyparse (void);
  int lang_token_action (char *yytext);

  /* Stack required for INDENT and DEDENT tokens @see
   * - http://docs.python.org/reference/lexical_analysis.html
   */
  static VEC(gpy_int,gc) * gpy_indent_stack;

  /* Whenver we pass a [, { or (, we may not generate a
   * NEWLINE token unless we passed the closing ], } or ).
   * implicit_lining is a counter which keeps track of the
   * nesting levels.
   */
  static unsigned int implicit_lining = 0;

  /* The indentation level which is calculated according to
   * the python indentation rules at @see
   * - http://docs.python.org/reference/lexical_analysis.html
   */
  static unsigned int indentation = 0;

  /* The top entry of the indendation stack gpy_indent_stack */
  static unsigned int top_len = 0;

  /* We may not generate a NEWLINE token unless we saw a real
   * language token. Empty lines consisting soley of spaces,
   * tabs, formfeeds and comments must be ignored.
   */
  static unsigned int token_count = 0;

  /* maybe_dedent is true if we must potentially generate dedent tokens
   * in lang_token_action. This is per default true once we start a 
   * new line because we might directly see a token without any whitespaces
   * so that we must generate DEDENT tokens.
   *
   * It is false if we know for sure that INDENT tokens will be generated.
   */
  static bool maybe_dedent = true;

  /* indentation_mode is true only once we start a new line. It tells the
   * scanner to calculate the indentation value. If false, no indentation
   * value is generated. This is the default case after we scanned the first
   * real language token.
   */
  static bool indentation_mode = true;

  /* This flag is used in lang_token_ction to control the generation
   * of INDENT and DEDENT tokens. INDENT and DEDENT tokens will potentially
   * only be generated at the beginning of each line and BEFORE the first
   * real language token is returned to the parser. Once the first language
   * token is recognized, gen_indentation is set to false.
   */
  static bool gen_indentation = true;

#define NO_TOKEN -1

  /* The LANG_TOKEN_ACTION macro allows us to define common actions associated
   * with each real language tokens (really returned to the parser) before
   * the token is really returned. 
   *
   * This MUST NOT be used for tokens which aren't passed to the parser, though
   * ignored by the scanner.
   */
#define LANG_TOKEN_ACTION			\
  do						\
    {						\
/*fprintf(stdout, "LANG_TOKEN_ACTION\n");*/	\
      int tk = lang_token_action (yytext);	\
      if (tk != NO_TOKEN)			\
	return tk;				\
    } while (0);                                                

#define UNPUT_TOKEN() yyless(0)

%}

%option yylineno
%x xLINE_CONT xINDENTATION

DIGIT        [0-9]
ID           [_a-zA-Z][a-zA_Z0-9_$]*
QSTRING      \"[^\"\n]*[\"\n]
NEWLINES     (\r\n|\r|\n)
FORMFEED     [\f] 
WHITESPACE   [ \t]

%%

#.*                     ; /* comment */

class                   { LANG_TOKEN_ACTION; return CLASS; }
def                     { LANG_TOKEN_ACTION; return DEF; }
except                  { LANG_TOKEN_ACTION; return EXCEPT; }
finally                 { LANG_TOKEN_ACTION; return FINALLY; }
try                     { LANG_TOKEN_ACTION; return TRY; }

as                      { LANG_TOKEN_ACTION; return AS; }
assert                  { LANG_TOKEN_ACTION; return ASSERT; }
del                     { LANG_TOKEN_ACTION; return DEL; }
exec                    { LANG_TOKEN_ACTION; return EXEC; }
from                    { LANG_TOKEN_ACTION; return FROM; }
global                  { LANG_TOKEN_ACTION; return GLOBAL; }
import                  { LANG_TOKEN_ACTION; return IMPORT; }
in                      { LANG_TOKEN_ACTION; return IN; }
is                      { LANG_TOKEN_ACTION; return IS; }
lambda                  { LANG_TOKEN_ACTION; return LAMBDA; }
pass                    { LANG_TOKEN_ACTION; return PASS; }
raise                   { LANG_TOKEN_ACTION; return RAISE; }
with                    { LANG_TOKEN_ACTION; return WITH; }
yield                   { LANG_TOKEN_ACTION; return YIELD; }

break                   { LANG_TOKEN_ACTION; return BREAK; }
continue                { LANG_TOKEN_ACTION; return CONTINUE; }
return                  { LANG_TOKEN_ACTION; return RETURN; }
for                     { LANG_TOKEN_ACTION; return FOR; }
while                   { LANG_TOKEN_ACTION; return WHILE; }
print                   { LANG_TOKEN_ACTION; return PRINT; }

if                      { LANG_TOKEN_ACTION; return IF; }
elif                    { LANG_TOKEN_ACTION; return ELIF; }
else                    { LANG_TOKEN_ACTION; return ELSE; }

\[                      { LANG_TOKEN_ACTION; implicit_lining++; return '['; }
\]                      { LANG_TOKEN_ACTION; implicit_lining++; return ']'; }
\(                      { LANG_TOKEN_ACTION; implicit_lining++; return '('; }
\)                      { LANG_TOKEN_ACTION; implicit_lining--; return ')'; }
\{                      { LANG_TOKEN_ACTION; implicit_lining--; return '{'; }
\}                      { LANG_TOKEN_ACTION; implicit_lining--; return '}'; }

";"                     { LANG_TOKEN_ACTION; return ';'; }
","                     { LANG_TOKEN_ACTION; return ','; }
"."                     { LANG_TOKEN_ACTION; return '.'; }
":"                     { LANG_TOKEN_ACTION; return ':'; }

"="                     { LANG_TOKEN_ACTION; return '='; }
"+"                     { LANG_TOKEN_ACTION; return '+'; }
"-"                     { LANG_TOKEN_ACTION; return '-'; }
"/"                     { LANG_TOKEN_ACTION; return '/'; }
"*"                     { LANG_TOKEN_ACTION; return '*'; }
"|"                     { LANG_TOKEN_ACTION; return '|'; }

"=="                    { LANG_TOKEN_ACTION; return EQUAL_EQUAL; }

"!="                    { LANG_TOKEN_ACTION; return NOT_EQUAL; }
"<"                     { LANG_TOKEN_ACTION; return LESS; }
"<="                    { LANG_TOKEN_ACTION; return LESS_EQUAL; }
">"                     { LANG_TOKEN_ACTION; return GREATER; }
">="                    { LANG_TOKEN_ACTION; return GREATER_EQUAL; }

"or"                    { LANG_TOKEN_ACTION; return OR; }
"and"                   { LANG_TOKEN_ACTION; return AND; }
"not"                   { LANG_TOKEN_ACTION; return NOT; }

"True"                  { LANG_TOKEN_ACTION; return V_TRUE; }
"False"                 { LANG_TOKEN_ACTION; return V_FALSE; }

{QSTRING}               {
  LANG_TOKEN_ACTION;

  yylval.string= xstrdup( (yytext+1) );
  if( yylval.string[ yyleng-2 ] != '\"' ) {
    error ("Un-termintated character string!\n");
  }
  else {
    yylval.string[yyleng-2] = '\0';
  }
  return STRING;
}

{DIGIT}+                {
  LANG_TOKEN_ACTION;
  mpfr_t x;
  mpfr_init2 (x, 32);
  if (mpfr_set_str (x, yytext, 10, GMP_RNDU))
    {
      fatal_error ("error initilizing integer value <%s>!\n", yytext);
    }
  yylval.integer = mpfr_get_si (x, GMP_RNDU);
  mpfr_clear (x);
  return INTEGER;
       }

{ID}                    {
  LANG_TOKEN_ACTION;
  yylval.string = xstrdup (yytext);
  return IDENTIFIER;
}

\\                      {
  BEGIN xLINE_CONT;
}

<xLINE_CONT>{NEWLINES}  { 
  BEGIN INITIAL;
 }

<xLINE_CONT>.           {
  fatal_error("non newline character after line continuation character!\n");
  BEGIN INITIAL;
 }

{NEWLINES}              {
  if (implicit_lining == 0 && token_count > 0)
    {
      indentation = 0;
      indentation_mode = true;
      gen_indentation = true;
      maybe_dedent = true;

      token_count = 0;

      /*fprintf(stdout, "DEBUG: NEWLINE\n");*/
      return NEWLINE;
    }
}

{FORMFEED}              { /* can be ignored or undefined behavior, so just ignored */}

{WHITESPACE}+           {
  if (indentation_mode == true)
    {
      /*fprintf(stdout, "DEBUG: determine INDENT: '%s' (%i) (%d)\n",
	      yytext, yytext[0], strlen(yytext)); */
      for (unsigned int i = 0; i < strlen(yytext); i++)
	{
	  if (yytext[i] == ' ')
	    indentation++;
	  else
	    /* tabs fill up the indentation to a multiple of 8 chars */
	    indentation = (indentation + 0x8) & ~((unsigned int)0x7);
	}
      /* fprintf(stdout, "INDENTATION: %u\n", indentation); */

      if (indentation > top_len)
	maybe_dedent = false;

      indentation_mode = false;
    }
	    }

<<EOF>>                 {
  if( top_len != 0 )
    {
      printf ("DEDENT EOF!\n");
      VEC_pop( gpy_int, gpy_indent_stack );
      top_len = VEC_index( gpy_int, gpy_indent_stack,
			   VEC_length( gpy_int, gpy_indent_stack )-1 );
      return DEDENT;
    }
  else
    return 0; 
  }

%%

int yywrap (void)
{
  return 1;
}

int gpy_lex_parse (const char * in)
{
  VEC_safe_push (gpy_int, gc, gpy_indent_stack, 0);
  top_len = 0;

  int retval = 1;
  FILE * fd = fopen (in, "rb");
  if (fd)
    {
      yyin = fd;
      retval = yyparse ();
      fclose (fd);
      yylex_destroy ();
    }
  else
    {
      fprintf (stderr, "error opening <%s>!\n", in );
      retval = 0;
    }
  return retval;
}

int lang_token_action (char *yytext)
{
  if (++token_count > 0)
    {
      indentation_mode = false;
    }

  /* fprintf(stdout, "TOKENCOUNT: %d\n", token_count); */
  if (gen_indentation == true)
    {
      if (maybe_dedent == true)
	{
	  if (indentation < top_len)
	    {
              maybe_dedent = true;
              /* unput the space to re-match this rule */
              UNPUT_TOKEN();
              // fprintf(stdout, "DEDENT: top(%u) - %u\n", top_len, indentation);
              VEC_pop(gpy_int, gpy_indent_stack);
              top_len = VEC_index( gpy_int, gpy_indent_stack,
				   VEC_length( gpy_int, gpy_indent_stack )-1 );

              gen_indentation = true;

              // fprintf(stdout, "DEBUG: DEDENT\n");
              return DEDENT;
	    }
	  else if (indentation == top_len)
	    {
              maybe_dedent = false;
	    }
	  else
	    {
	      fatal_error("unmatched indentation!\n");
	    }
	}
      else
	{
	  if (indentation > top_len)
	    {
              VEC_safe_push (gpy_int, gc, gpy_indent_stack, indentation);
              top_len = indentation;
              gen_indentation = false;

              UNPUT_TOKEN();
              fprintf(stdout, "DEBUG: INDENT\n");
              return INDENT;
	    }
	}
    }

  gen_indentation = false;
  return NO_TOKEN;
}

