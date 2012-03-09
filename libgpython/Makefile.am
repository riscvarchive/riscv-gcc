## Process this file with automake to produce Makefile.in
lib_LTLIBRARIES = libgpython.la

AM_CPPFLAGS = -I$(top_srcdir)/include
AM_YFLAGS = -d --verbose

library_includedir=$(includedir)/gpython
library_include_HEADERS = \
include/gpython/gpython.h \
include/gpython/vectors.h \
include/gpython/objects.h

libgpython_la_CFLAGS = -DPYHON -DSHARED
libgpython_la_LDFLAGS = -release 0.0.1
libgpython_la_SOURCES = \
runtime/obj-class.c \
runtime/obj-functor.c \
runtime/obj-integer.c \
runtime/obj-list.c \
runtime/py-runtime.c \
runtime/py-type-utils.c \
runtime/py-routines.c \
runtime/py-vectors.c
