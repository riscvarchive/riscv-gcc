/* Definitions for 64-bit FreeBSD systems with ELF format.
   Copyright 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2010, 2011
   Free Software Foundation, Inc.

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


#define SUBTARGET_EXTRA_SPECS \
  { "fbsd_dynamic_linker", FBSD_DYNAMIC_LINKER }

#undef CC1_SPEC
#define CC1_SPEC "%(cc1_cpu) %{profile:-p}"

#undef LINK_SPEC
#define LINK_SPEC "\
%{shared} \
  %{!shared: \
    %{!static: \
      %{rdynamic:-export-dynamic} \
      %{" OPT_ARCH64 ": -dynamic-linker " FBSD_DYNAMIC_LINKER "} \
      %{" OPT_ARCH32 ": -dynamic-linker " FBSD_DYNAMIC_LINKER "}} \
    %{static:-static}} \
%{" OPT_ARCH64 ":-melf64lriscv} \
%{" OPT_ARCH32 ":-melf32lriscv}"
