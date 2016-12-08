/* Definitions for RISC-V GNU/Linux systems with ELF format.
   Copyright (C) 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006,
   2007, 2008, 2010, 2011 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#define TARGET_OS_CPP_BUILTINS()				\
  do {								\
    GNU_USER_TARGET_OS_CPP_BUILTINS();				\
  } while (0)

#define GLIBC_DYNAMIC_LINKER32 "/lib32/ld.so.1"
#define GLIBC_DYNAMIC_LINKER64 "/lib/ld.so.1"

#define LINK_SPEC "\
%{shared} \
  %{!shared: \
    %{!static: \
      %{rdynamic:-export-dynamic} \
      %{" OPT_ARCH64LL ": -dynamic-linker " GNU_USER_DYNAMIC_LINKER64 "} \
      %{" OPT_ARCH64LU ": -dynamic-linker " GNU_USER_DYNAMIC_LINKER64 "} \
      %{" OPT_ARCH64UL ": -dynamic-linker " GNU_USER_DYNAMIC_LINKER64 "} \
      %{" OPT_ARCH64UU ": -dynamic-linker " GNU_USER_DYNAMIC_LINKER64 "} \
      %{" OPT_ARCH32LL ": -dynamic-linker " GNU_USER_DYNAMIC_LINKER32 "} \
      %{" OPT_ARCH32LU ": -dynamic-linker " GNU_USER_DYNAMIC_LINKER32 "} \
      %{" OPT_ARCH32UL ": -dynamic-linker " GNU_USER_DYNAMIC_LINKER32 "} \
      %{" OPT_ARCH32UU ": -dynamic-linker " GNU_USER_DYNAMIC_LINKER32 "}} \
    %{static:-static}} \
%{" OPT_ARCH64LL ":-melf64lriscv} \
%{" OPT_ARCH64LU ":-melf64lriscv} \
%{" OPT_ARCH64UL ":-melf64lriscv} \
%{" OPT_ARCH64UU ":-melf64lriscv} \
%{" OPT_ARCH32LL ":-melf32lriscv} \
%{" OPT_ARCH32LU ":-melf32lriscv} \
%{" OPT_ARCH32UL ":-melf32lriscv} \
%{" OPT_ARCH32UU ":-melf32lriscv}"
