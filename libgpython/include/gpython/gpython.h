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

#ifndef __GCC_GPYTHON_H__
#define __GCC_GPYTHON_H__

#undef DEBUG
#define DEBUG 1

#if __STDC_VERSION__ < 199901L
# if __GNUC__ >= 2
#  define __func__ __FUNCTION__
# else
#  define __func__ "<unknown>"
# endif
#endif

/* Abstract out some useful compiler attributes from GCC */
#if defined( GUNC )
# define __gpy_fmt_check( x, y )		\
  __attribute__ ((format (printf, x, y)))
# define __gpy_no_return			\
  __attribute__ ((noreturn))
# define __gpy_malloc				\
  __attribute__ ((malloc))
# define __gpy_pure				\
  __attribute__ ((pure))
# define __gpy_unused				\
  __attribute__ ((unused))
# define __gpy_nonnull				\
  __attribute__((nonnull)) 
#else
# define __gpy_fmt_check( x, y )
# define __gpy_no_return
# define __gpy_malloc
# define __gpy_pure
# define __gpy_unused
# define __gpy_nonnull
#endif

#ifdef DEBUG
# define gpy_assert(expr)						\
  ((expr) ? (void) 0 : gpy_assertion_failed(#expr, __LINE__,		\
					    __FILE__, __func__ ));
#else
# define gpy_assert(expr)
#endif

extern void * gpy_malloc (size_t);
extern void * gpy_realloc (void *, size_t);
extern void * gpy_calloc (size_t, size_t);

#define gpy_free(x)   \
  gpy_assert( x );    \
  free( x );	      \
  x = NULL;

#ifdef HAVE_STRDUP
# define gpy_strdup(x) strdup (x)
#else
extern char * gpy_strdup (const char *);
#endif

#ifdef DEBUG
extern void
__gpy_debug__ (const char *, unsigned ,
               const char *, const char *, ...)
  __gpy_fmt_check(4,5);
#endif

extern void
__gpy_error__ (const char *, unsigned ,
               const char *, const char *, ...)
  __gpy_fmt_check(4,5);

extern void
__gpy_fatal__ (const char *, unsigned ,
               const char *, const char *, ...)
  __gpy_fmt_check(4,5);

#ifdef DEBUG
# define debug(...)						\
  __gpy_debug__ (__FILE__, __LINE__, __func__, __VA_ARGS__)
#else
# define debug(...)
#endif

#define fatal(...)						\
  __gpy_fatal__ (__FILE__, __LINE__, __func__, __VA_ARGS__)

#define error( ... )						\
  __gpy_error__ (__FILE__, __LINE__, __func__, __VA_ARGS__)

extern void gpy_assertion_failed (const char *, unsigned, const char *,
				  const char *);

#endif //__GCC_GPYTHON_H__
