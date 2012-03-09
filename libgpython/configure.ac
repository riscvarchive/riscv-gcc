#   Copyright (C) 1992, 1993, 1994, 1995, 1996, 1997, 1998, 1999, 2000,
#   2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010
#   Free Software Foundation, Inc.
#
# This file is free software; you can redistribute it and/or modify it
# under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; see the file COPYING3.  If not see
# <http://www.gnu.org/licenses/>.

##############################################################################
### WARNING: this file contains embedded tabs.  Do not run untabify on this file.
# Process this file with autoconf to produce a configure script, like so:
# aclocal && autoconf && autoheader && automake

AC_PREREQ(2.64)
AC_INIT([GNU Python Runtime Library], 0.1,,[libgpython])
AC_CONFIG_HEADER(config.h)

AC_CONFIG_AUX_DIR([config])
AC_CONFIG_MACRO_DIR([m4])
AM_SANITY_CHECK

AC_PROG_AWK
AC_PROG_CPP
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET
AC_PROG_RANLIB
AC_CHECK_PROGS(AR, ar aal, ar)
AC_PROG_CC_C99
AC_PROG_CXX

AC_PROG_INSTALL

AC_LIBTOOL_DLOPEN
AC_PROG_LIBTOOL
AM_PROG_LIBTOOL

AM_PROG_CC_C_O

AC_C_BIGENDIAN
AC_C_INLINE
AC_C_VOLATILE

AC_CANONICAL_HOST

# Just to make sure we dont do debug on default!
debug=no
AC_ARG_WITH(debug,
  [AS_HELP_STRING([--with-libgpython-debug=yes/no],
    [With Debug symbols, default no.])],
  [debug="$withval"])
if test "x$debug" == "xyes"; then
  AC_DEFINE([DEBUG], 1, [Debug Symbols Flag])  
fi

# a lang needs math functions...
AC_CHECK_LIB([m], [pow], , 
  [AC_MSG_ERROR([System Math library is required!])])

# used for constant folding and rounding
AC_CHECK_LIB([gmp], [__gmpz_init], ,
  [AC_MSG_ERROR([GNU MP not found, see http://gmplib.org/])])
AC_CHECK_LIB([mpfr],[mpfr_init] , ,
  [AC_MSG_ERROR([MPFR not found, see http://www.mpfr.org/])])
AC_CHECK_SIZEOF(mp_limb_t, , [#include <gmp.h>])

AC_CHECK_FUNCS(dlopen)

gl_VISIBILITY

AC_SUBST(CFLAGS)
AC_SUBST(LDFLAGS)

AC_PATH_PROG(MV, mv, mv)
AC_PATH_PROG(RM, rm, rm)
AC_PATH_PROG(CP, cp, cp)
AC_PATH_PROG(SED, sed, sed)
AC_PATH_PROG(CMP, cmp, cmp)
AC_PATH_PROG(CHMOD, chmod, chmod)
AC_PATH_PROG(HOSTNAME, hostname, hostname)

AM_INIT_AUTOMAKE

AC_CHECK_SIZEOF(long)
AC_CHECK_SIZEOF(char)
AC_CHECK_SIZEOF(int)
AC_CHECK_SIZEOF(void*)
AC_CHECK_SIZEOF(short)
AC_CHECK_SIZEOF(double)
AC_CHECK_SIZEOF(float)
AC_CHECK_SIZEOF(size_t)
AC_CHECK_SIZEOF(long int)
AC_CHECK_SIZEOF(long long)

# Checks for header files.
AC_HEADER_SYS_WAIT
AC_HEADER_STDBOOL
AC_HEADER_STDC
AC_CHECK_HEADERS([stdlib.h string.h stdarg.h unistd.h \
		  stdint.h stdio.h getopt.h \
		  assert.h sys/types.h signal.h \
		  fcntl.h pthread.h sys/wait.h \
		  gmp.h mpfr.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST
AC_TYPE_PID_T
AC_TYPE_SIZE_T
AC_CHECK_FUNCS([popen fopen fclose sprintf fprintf strdup \
		strlen strcpy strcmp getopt_long \
		memcpy calloc system sysconf atoi \
		getpid execl fork wait exit atof \
		vfprintf memcmp getc fgets pipe \
		waitpid fdopen])

# Checks for library functions.
AC_FUNC_MALLOC
AC_FUNC_UTIME_NULL
AC_FUNC_VPRINTF
AC_CONFIG_FILES([Makefile])

AC_OUTPUT
dnl libtoolize scans configure.ac  and needs to see some text
m4_define([LIBTOOLIZE_AC_INIT], [])