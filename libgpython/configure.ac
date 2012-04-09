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
AC_INIT(package-unused, version-unused,, libgpython)
AC_CONFIG_HEADER(config.h)
AC_CONFIG_SRCDIR(Makefile.am)

libtool_VERSION=1:0:0
AC_SUBST(libtool_VERSION)

AM_ENABLE_MULTILIB(, ..)

AC_CANONICAL_SYSTEM
target_alias=${target_alias-$host_alias}

AM_INIT_AUTOMAKE([1.9.3 no-define foreign -Wall])
AH_TEMPLATE(PACKAGE, [Name of package])
AH_TEMPLATE(VERSION, [Version number of package])

m4_rename([_AC_ARG_VAR_PRECIOUS],[glibgpython_PRECIOUS])
m4_define([_AC_ARG_VAR_PRECIOUS],[])
AC_PROG_CC

AC_SUBST(CFLAGS)

AM_MAINTAINER_MODE

AC_PROG_LD
AC_PROG_RANLIB
AC_CHECK_TOOL(OBJCOPY, objcopy, missing-objcopy)

AC_LIBTOOL_DLOPEN
AM_PROG_LIBTOOL
AC_SUBST(enable_shared)
AC_SUBST(enable_static)

CC_FOR_BUILD=${CC_FOR_BUILD:-gcc}
AC_SUBST(CC_FOR_BUILD)

AC_PROG_AWK

WARN_FLAGS='-Wall -Wextra -Wwrite-strings -Wcast-qual'
AC_SUBST(WARN_FLAGS)

dnl FIXME: This should be controlled by --enable-maintainer-mode.
WERROR="-Werror"
AC_SUBST(WERROR)

# See if the user wants to configure without libffi.  Some
# architectures don't support it.  FIXME: We should set a default
# based on the host.
AC_ARG_WITH(libffi,
  AS_HELP_STRING([--without-libffi],
                 [don't use libffi]),
  [:],
  [with_libffi=${with_libffi_default-yes}])

LIBFFI=
LIBFFIINCS=
if test "$with_libffi" != no; then
   AC_DEFINE(USE_LIBFFI, 1, [Define if we're to use libffi.])
   LIBFFI=../libffi/libffi_convenience.la
   LIBFFIINCS='-I$(top_srcdir)/../libffi/include -I../libffi/include'
fi
AC_SUBST(LIBFFI)
AC_SUBST(LIBFFIINCS)

dnl Test for the -lm library.
MATH_LIBS=
AC_CHECK_LIB([m], [sqrt], MATH_LIBS=-lm)
AC_SUBST(MATH_LIBS)

dnl Test whether the compiler supports the -pthread option.
AC_CACHE_CHECK([whether -pthread is supported],
[libgpython_cv_lib_pthread],
[CFLAGS_hold=$CFLAGS
CFLAGS="$CFLAGS -pthread"
AC_COMPILE_IFELSE([[int i;]],
[libgpython_cv_lib_pthread=yes],
[libgpython_cv_lib_pthread=no])
CFLAGS=$CFLAGS_hold])
PTHREAD_CFLAGS=
if test "$libgpython_cv_lib_pthread" = yes; then
  PTHREAD_CFLAGS=-pthread
fi
AC_SUBST(PTHREAD_CFLAGS)

dnl Test for the -lpthread library.
PTHREAD_LIBS=
AC_CHECK_LIB([pthread], [pthread_create], PTHREAD_LIBS=-lpthread)
AC_SUBST(PTHREAD_LIBS)

dnl Test if -lrt is required for sched_yield.
AC_SEARCH_LIBS([sched_yield], [rt])

AC_C_BIGENDIAN

GCC_CHECK_UNWIND_GETIPINFO

AC_ARG_ENABLE(sjlj-exceptions,
  AC_HELP_STRING([--enable-sjlj-exceptions],
		 [force use of builtin_setjmp for exceptions]),
  [case "$enableval" in
   yes|no|auto) ;;
   *) AC_MSG_ERROR([unknown argument to --enable-sjlj-exceptions]) ;;
   esac],
  [enable_sjlj_exceptions=auto])

AC_CACHE_CHECK([whether to use setjmp/longjmp exceptions],
[libgpython_cv_lib_sjlj_exceptions],
[AC_LANG_CONFTEST(
  [AC_LANG_SOURCE([
void bar ();
void clean (int *);
void foo ()
{
  int i __attribute__ ((cleanup (clean)));
  bar();
}
])])
CFLAGS_hold=$CFLAGS
CFLAGS="--save-temps -fexceptions"
libgpython_cv_lib_sjlj_exceptions=unknown
AS_IF([ac_fn_c_try_compile],
  [if grep _Unwind_SjLj_Resume conftest.s >/dev/null 2>&1; then
    libgpython_cv_lib_sjlj_exceptions=yes
  elif grep _Unwind_Resume conftest.s >/dev/null 2>&1; then
    libgpython_cv_lib_sjlj_exceptions=no
  fi])
CFLAGS=$CFLAGS_hold
rm -f conftest*
])

if test "$enable_sjlj_exceptions" = "auto"; then
  enable_sjlj_exceptions=$libgpython_cv_lib_sjlj_exceptions
fi

case $enable_sjlj_exceptions in
yes)
  AC_DEFINE(LIBGPYTHON_SJLJ_EXCEPTIONS, 1,
	[Define if the C++ compiler is configured for setjmp/longjmp exceptions.])
  ;;
no)
  ;;
*)
  AC_MSG_ERROR([unable to detect exception model])
  ;;
esac

AC_CHECK_HEADERS(sys/mman.h syscall.h sys/epoll.h sys/ptrace.h sys/syscall.h sys/user.h sys/utsname.h sys/select.h sys/socket.h net/if.h sys/prctl.h sys/mount.h sys/vfs.h sys/statfs.h sys/timex.h sys/sysinfo.h utime.h linux/reboot.h)

AC_CHECK_HEADERS([linux/filter.h linux/netlink.h linux/rtnetlink.h], [], [],
[#ifdef HAVE_SYS_SOCKET_H
#include <sys/socket.h>
#endif
])

# used for constant folding and rounding
AC_CHECK_LIB([gmp], [__gmpz_init], ,
  [AC_MSG_ERROR([GNU MP not found, see http://gmplib.org/])])
AC_CHECK_LIB([mpfr],[mpfr_init] , ,
  [AC_MSG_ERROR([MPFR not found, see http://www.mpfr.org/])])
AC_CHECK_SIZEOF(mp_limb_t, , [#include <gmp.h>])

gl_VISIBILITY

AC_SUBST(CFLAGS)
AC_SUBST(LDFLAGS)

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
