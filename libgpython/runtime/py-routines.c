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

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdarg.h>
#include <stdbool.h>

#include <gpython/gpython.h>
#include <gpython/vectors.h>
#include <gpython/objects.h>

#ifndef HAVE_STRDUP
char * gpy_strdup (const char * str)
{
  register size_t len = gpy_strlen (str) + 1;
  register char *ret = gpy_malloc (len);
  memcpy (ret, str, len);
  return ret;
}
#endif

inline
void gpy_assertion_failed( const char * expr, unsigned line,
			   const char * file, const char * func )
{
  fprintf( stderr, "assertion of <%s> failed at <%s:%s:%u>!\n",
	   expr, file, func, line );
  /* Call cleanups .... */

  exit( EXIT_FAILURE );
}

#ifdef DEBUG
inline
void __gpy_debug__( const char * file, unsigned line,
                    const char * functor, const char * fmt, ... )
{
  fprintf( stderr, "debug: <%s:%s:%u> -> ",
           file, functor, line );
  va_list args;
  va_start( args, fmt );
  vfprintf( stderr, fmt, args );
  va_end( args );
}
#endif

inline
void __gpy_error__( const char * file, unsigned line,
                    const char * functor, const char * fmt, ... )
{
  fprintf( stderr, "error: <%s:%s:%u> -> ",
           file, functor, line );
  va_list args;
  va_start( args, fmt );
  vfprintf( stderr, fmt, args );
  va_end( args );
}

inline
void __gpy_fatal__( const char * file, unsigned line,
		    const char * functor, const char * fmt, ... )
{
  fprintf( stderr, "fatal: <%s:%s:%u> -> ",
           file, functor, line );
  va_list args;
  va_start( args, fmt );
  vfprintf( stderr, fmt, args );
  va_end( args );

  /* Call cleanups .... */

  exit( EXIT_FAILURE );
}

/* --- memory allocators --- */

inline
void * gpy_malloc( size_t s )
{
  register void * retval = malloc( s );
  if( !retval )
    fatal("virtual memory exhausted!\n");

  return retval;
}

inline
void * gpy_realloc( void * p, size_t s )
{
  register void * retval = realloc( p, s );
  if( !retval )
    fatal("virtual memory exhausted!\n");

  return retval;
}

inline
void * gpy_calloc( size_t n, size_t s )
{
  register void * retval = calloc( n , s );
  if( !retval )
    fatal("virtual memory exhausted!\n");

  return retval;
}
