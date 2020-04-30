/* Subroutines used for expanding RISC-V builtins.
   Copyright (C) 2011-2020 Free Software Foundation, Inc.
   Contributed by Andrew Waterman (andrew@sifive.com).

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

#define IN_TARGET_CODE 1

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tree.h"
#include "gimple-expr.h"
#include "memmodel.h"
#include "expmed.h"
#include "profile-count.h"
#include "optabs.h"
#include "recog.h"
#include "diagnostic-core.h"
#include "stor-layout.h"
#include "expr.h"
#include "langhooks.h"

/* We don't want the PTR definition from ansi-decl.h.  */
#undef PTR

/* An iterator to call a macro with every supported scalar integer mode with
   its size in bits..  */
#define _SCALAR_INT_ITERATOR(MACRO)	\
  MACRO (8, QI)				\
  MACRO (16, HI)			\
  MACRO (32, SI)			\
  MACRO (64, DI)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector and integer modes.  */
#define _RVV_INT_ITERATOR(MACRO)	\
  MACRO ( 8, 1,  8, vnx16qi, QI)	\
  MACRO ( 8, 2,  4, vnx32qi, QI)	\
  MACRO ( 8, 4,  2, vnx64qi, QI)	\
  MACRO ( 8, 8,  1,vnx128qi, QI)	\
  MACRO (16, 1, 16,  vnx8hi, HI)	\
  MACRO (16, 2,  8, vnx16hi, HI)	\
  MACRO (16, 4,  4, vnx32hi, HI)	\
  MACRO (16, 8,  2, vnx64hi, HI)	\
  MACRO (32, 1, 32,  vnx4si, SI)	\
  MACRO (32, 2, 16,  vnx8si, SI)	\
  MACRO (32, 4,  8, vnx16si, SI)	\
  MACRO (32, 8,  4, vnx32si, SI)	\
  MACRO (64, 1, 64,  vnx2di, DI)	\
  MACRO (64, 2, 32,  vnx4di, DI)	\
  MACRO (64, 4, 16,  vnx8di, DI)	\
  MACRO (64, 8,  8, vnx16di, DI)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   except LMUL1, along with its corresponding vector and integer modes.  */
#define _RVV_INT_ITERATOR_NOTM1(MACRO)	\
  MACRO ( 8, 2,  4, vnx32qi, QI)	\
  MACRO ( 8, 4,  2, vnx64qi, QI)	\
  MACRO ( 8, 8,  1,vnx128qi, QI)	\
  MACRO (16, 2,  8, vnx16hi, HI)	\
  MACRO (16, 4,  4, vnx32hi, HI)	\
  MACRO (16, 8,  2, vnx64hi, HI)	\
  MACRO (32, 2, 16,  vnx8si, SI)	\
  MACRO (32, 4,  8, vnx16si, SI)	\
  MACRO (32, 8,  4, vnx32si, SI)	\
  MACRO (64, 2, 32,  vnx4di, DI)	\
  MACRO (64, 4, 16,  vnx8di, DI)	\
  MACRO (64, 8,  8, vnx16di, DI)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   except SEW8, along with its corresponding vector and integer modes.  */
#define _RVV_INT_ITERATOR_NO_SEW8(MACRO)\
  MACRO (16, 1, 16,  vnx8hi, HI)	\
  MACRO (16, 2,  8, vnx16hi, HI)	\
  MACRO (16, 4,  4, vnx32hi, HI)	\
  MACRO (16, 8,  2, vnx64hi, HI)	\
  MACRO (32, 1, 32,  vnx4si, SI)	\
  MACRO (32, 2, 16,  vnx8si, SI)	\
  MACRO (32, 4,  8, vnx16si, SI)	\
  MACRO (32, 8,  4, vnx32si, SI)	\
  MACRO (64, 1, 64,  vnx2di, DI)	\
  MACRO (64, 2, 32,  vnx4di, DI)	\
  MACRO (64, 4, 16,  vnx8di, DI)	\
  MACRO (64, 8,  8, vnx16di, DI)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   for shift operations, along with its corresponding vector
   and integer modes.  */
#define _RVV_INT_ITERATOR_SHIFT(MACRO)	\
  MACRO (16, 1, 16,  vnx8hi, HI)	\
  MACRO (32, 1, 32,  vnx4si, SI)	\
  MACRO (32, 2, 16,  vnx8si, SI)	\
  MACRO (32, 4,  8, vnx16si, SI)	\
  MACRO (32, 8,  4, vnx32si, SI)	\
  MACRO (64, 1, 64,  vnx2di, DI)	\
  MACRO (64, 2, 32,  vnx4di, DI)	\
  MACRO (64, 4, 16,  vnx8di, DI)	\
  MACRO (64, 8,  8, vnx16di, DI)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, integer modes and extra arguments.  */
#define _RVV_INT_ITERATOR_ARG(MACRO, ...)	\
  MACRO ( 8, 1,  8, vnx16qi, QI, __VA_ARGS__)	\
  MACRO ( 8, 2,  4, vnx32qi, QI, __VA_ARGS__)	\
  MACRO ( 8, 4,  2, vnx64qi, QI, __VA_ARGS__)	\
  MACRO ( 8, 8,  1,vnx128qi, QI, __VA_ARGS__)	\
  MACRO (16, 1, 16,  vnx8hi, HI, __VA_ARGS__)	\
  MACRO (16, 2,  8, vnx16hi, HI, __VA_ARGS__)	\
  MACRO (16, 4,  4, vnx32hi, HI, __VA_ARGS__)	\
  MACRO (16, 8,  2, vnx64hi, HI, __VA_ARGS__)	\
  MACRO (32, 1, 32,  vnx4si, SI, __VA_ARGS__)	\
  MACRO (32, 2, 16,  vnx8si, SI, __VA_ARGS__)	\
  MACRO (32, 4,  8, vnx16si, SI, __VA_ARGS__)	\
  MACRO (32, 8,  4, vnx32si, SI, __VA_ARGS__)	\
  MACRO (64, 1, 64,  vnx2di, DI, __VA_ARGS__)	\
  MACRO (64, 2, 32,  vnx4di, DI, __VA_ARGS__)	\
  MACRO (64, 4, 16,  vnx8di, DI, __VA_ARGS__)	\
  MACRO (64, 8,  8, vnx16di, DI, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, integer modes, and info for
   corresponding widening vector type and extra arguments.

   MACRO (SEW, LMUL, MLEN, VMODE, SMODE, WSEW, WLMUL, WVMODE, WSMODE)  */
#define _RVV_WINT_ITERATOR(MACRO)			\
  MACRO ( 8, 1,  8, vnx16qi, QI, 16, 2, vnx16hi, HI)	\
  MACRO ( 8, 2,  4, vnx32qi, QI, 16, 4, vnx32hi, HI)	\
  MACRO ( 8, 4,  2, vnx64qi, QI, 16, 8, vnx64hi, HI)	\
  MACRO (16, 1, 16,  vnx8hi, HI, 32, 2,  vnx8si, SI)	\
  MACRO (16, 2,  8, vnx16hi, HI, 32, 4, vnx16si, SI)	\
  MACRO (16, 4,  4, vnx32hi, HI, 32, 8, vnx32si, SI)	\
  MACRO (32, 1, 32,  vnx4si, SI, 64, 2,  vnx4di, DI)	\
  MACRO (32, 2, 16,  vnx8si, SI, 64, 4,  vnx8di, DI)	\
  MACRO (32, 4,  8, vnx16si, SI, 64, 8, vnx16di, DI)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, integer modes, and info for
   corresponding quad-widening vector type and extra arguments.

   MACRO (SEW, LMUL, MLEN, VMODE, SMODE, QSEW, QLMUL, QVMODE, QSMODE)  */
#define _RVV_QINT_ITERATOR(MACRO)			\
  MACRO ( 8, 1,  8, vnx16qi, QI, 32, 4, vnx16si, SI)	\
  MACRO ( 8, 2,  4, vnx32qi, QI, 32, 8, vnx32si, SI)	\
  MACRO (16, 1, 16,  vnx8hi, HI, 64, 4,  vnx8di, DI)	\
  MACRO (16, 2,  8, vnx16hi, HI, 64, 8, vnx16di, DI)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   except LMUL1, along with its corresponding vector, integer modes, and
   info for corresponding widening vector type and extra arguments.

   MACRO (SEW, LMUL, MLEN, VMODE, SMODE, WSEW, WLMUL, WVMODE, WSMODE)  */
#define _RVV_WINT_ITERATOR_NOTM1(MACRO)	\
  MACRO ( 8, 2,  4, vnx32qi, QI, 16, 4, vnx32hi, HI)	\
  MACRO ( 8, 4,  2, vnx64qi, QI, 16, 8, vnx64hi, HI)	\
  MACRO (16, 2,  8, vnx16hi, HI, 32, 4, vnx16si, SI)	\
  MACRO (16, 4,  4, vnx32hi, HI, 32, 8, vnx32si, SI)	\
  MACRO (32, 2, 16,  vnx8si, SI, 64, 4,  vnx8di, DI)	\
  MACRO (32, 4,  8, vnx16si, SI, 64, 8, vnx16di, DI)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, integer modes, and info for
   corresponding widening vector type and extra arguments.

   MACRO (SEW, LMUL, MLEN, VMODE, SMODE, WSEW, WLMUL, WVMODE, WSMODE)  */
#define _RVV_WINT_ITERATOR_ARG(MACRO, ...)				\
  MACRO ( 8, 1,  8, vnx16qi, QI, 16, 2, vnx16hi, HI, __VA_ARGS__)	\
  MACRO ( 8, 2,  4, vnx32qi, QI, 16, 4, vnx32hi, HI, __VA_ARGS__)	\
  MACRO ( 8, 4,  2, vnx64qi, QI, 16, 8, vnx64hi, HI, __VA_ARGS__)	\
  MACRO (16, 1, 16,  vnx8hi, HI, 32, 2,  vnx8si, SI, __VA_ARGS__)	\
  MACRO (16, 2,  8, vnx16hi, HI, 32, 4, vnx16si, SI, __VA_ARGS__)	\
  MACRO (16, 4,  4, vnx32hi, HI, 32, 8, vnx32si, SI, __VA_ARGS__)	\
  MACRO (32, 1, 32,  vnx4si, SI, 64, 2,  vnx4di, DI, __VA_ARGS__)	\
  MACRO (32, 2, 16,  vnx8si, SI, 64, 4,  vnx8di, DI, __VA_ARGS__)	\
  MACRO (32, 4,  8, vnx16si, SI, 64, 8, vnx16di, DI, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, integer modes, and info for
   corresponding quad-widening vector type and extra arguments.

   MACRO (SEW, LMUL, MLEN, VMODE, SMODE, QSEW, QLMUL, QVMODE, QSMODE)  */
#define _RVV_QINT_ITERATOR_ARG(MACRO, ...)				\
  MACRO ( 8, 1,  8, vnx16qi, QI, 32, 4, vnx16si, SI, __VA_ARGS__)	\
  MACRO ( 8, 2,  4, vnx32qi, QI, 32, 8, vnx32si, SI, __VA_ARGS__)	\
  MACRO (16, 1, 16,  vnx8hi, HI, 64, 4,  vnx8di, DI, __VA_ARGS__)	\
  MACRO (16, 2,  8, vnx16hi, HI, 64, 8, vnx16di, DI, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, integer modes and floating point
   modes. */
#define _RVV_INT_FLOAT_ITERATOR(MACRO)	\
  MACRO (16, 1, 16,  vnx8hi, HI,  vnx8hf, HF)	\
  MACRO (16, 2,  8, vnx16hi, HI, vnx16hf, HF)	\
  MACRO (16, 4,  4, vnx32hi, HI, vnx32hf, HF)	\
  MACRO (16, 8,  2, vnx64hi, HI, vnx64hf, HF)	\
  MACRO (32, 1, 32,  vnx4si, SI,  vnx4sf, SF)	\
  MACRO (32, 2, 16,  vnx8si, SI,  vnx8sf, SF)	\
  MACRO (32, 4,  8, vnx16si, SI, vnx16sf, SF)	\
  MACRO (32, 8,  4, vnx32si, SI, vnx32sf, SF)	\
  MACRO (64, 1, 64,  vnx2di, DI,  vnx2df, DF)	\
  MACRO (64, 2, 32,  vnx4di, DI,  vnx4df, DF)	\
  MACRO (64, 4, 16,  vnx8di, DI,  vnx8df, DF)	\
  MACRO (64, 8,  8, vnx16di, DI, vnx16df, DF)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector and floating point modes.  */
#define _RVV_FLOAT_ITERATOR(MACRO)	\
  MACRO (16, 1, 16,  vnx8hf, HF)	\
  MACRO (16, 2,  8, vnx16hf, HF)	\
  MACRO (16, 4,  4, vnx32hf, HF)	\
  MACRO (16, 8,  2, vnx64hf, HF)	\
  MACRO (32, 1, 32,  vnx4sf, SF)	\
  MACRO (32, 2, 16,  vnx8sf, SF)	\
  MACRO (32, 4,  8, vnx16sf, SF)	\
  MACRO (32, 8,  4, vnx32sf, SF)	\
  MACRO (64, 1, 64,  vnx2df, DF)	\
  MACRO (64, 2, 32,  vnx4df, DF)	\
  MACRO (64, 4, 16,  vnx8df, DF)	\
  MACRO (64, 8,  8, vnx16df, DF)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   except LMUL1, along with its corresponding vector and floating point
   modes.  */
#define _RVV_FLOAT_ITERATOR_NOTM1(MACRO)	\
  MACRO (16, 2,  8, vnx16hf, HF)		\
  MACRO (16, 4,  4, vnx32hf, HF)		\
  MACRO (16, 8,  2, vnx64hf, HF)		\
  MACRO (32, 2, 16,  vnx8sf, SF)		\
  MACRO (32, 4,  8, vnx16sf, SF)		\
  MACRO (32, 8,  4, vnx32sf, SF)		\
  MACRO (64, 2, 32,  vnx4df, DF)		\
  MACRO (64, 4, 16,  vnx8df, DF)		\
  MACRO (64, 8,  8, vnx16df, DF)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, floating point modes and extra
   arguments.  */
#define _RVV_FLOAT_ITERATOR_ARG(MACRO, ...)	\
  MACRO (16, 1, 16,  vnx8hf, HF, __VA_ARGS__)	\
  MACRO (16, 2,  8, vnx16hf, HF, __VA_ARGS__)	\
  MACRO (16, 4,  4, vnx32hf, HF, __VA_ARGS__)	\
  MACRO (16, 8,  2, vnx64hf, HF, __VA_ARGS__)	\
  MACRO (32, 1, 32,  vnx4sf, SF, __VA_ARGS__)	\
  MACRO (32, 2, 16,  vnx8sf, SF, __VA_ARGS__)	\
  MACRO (32, 4,  8, vnx16sf, SF, __VA_ARGS__)	\
  MACRO (32, 8,  4, vnx32sf, SF, __VA_ARGS__)	\
  MACRO (64, 1, 64,  vnx2df, DF, __VA_ARGS__)	\
  MACRO (64, 2, 32,  vnx4df, DF, __VA_ARGS__)	\
  MACRO (64, 4, 16,  vnx8df, DF, __VA_ARGS__)	\
  MACRO (64, 8,  8, vnx16df, DF, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, floating point modes, and info for
   corresponding widening vector type.

   MACRO (SEW, LMUL, MLEN, VMODE, SMODE, WSEW, WLMUL, WVMODE, WSMODE)  */
#define _RVV_WFLOAT_ITERATOR(MACRO)			\
  MACRO (16, 1, 16,  vnx8hf, HF, 32, 2,  vnx8sf, SF)	\
  MACRO (16, 2,  8, vnx16hf, HF, 32, 4, vnx16sf, SF)	\
  MACRO (16, 4,  4, vnx32hf, HF, 32, 8, vnx32sf, SF)	\
  MACRO (32, 1, 32,  vnx4sf, SF, 64, 2,  vnx4df, DF)	\
  MACRO (32, 2, 16,  vnx8sf, SF, 64, 4,  vnx8df, DF)	\
  MACRO (32, 4,  8, vnx16sf, SF, 64, 8, vnx16df, DF)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, floating point modes, and info for
   corresponding widening vector type and extra arguments.

   MACRO (SEW, LMUL, MLEN, VMODE, SMODE, WSEW, WLMUL, WVMODE, WSMODE)  */
#define _RVV_WFLOAT_ITERATOR_ARG(MACRO, ...)				\
  MACRO (16, 1, 16,  vnx8hf, HF, 32, 2,  vnx8sf, SF, __VA_ARGS__)	\
  MACRO (16, 2,  8, vnx16hf, HF, 32, 4, vnx16sf, SF, __VA_ARGS__)	\
  MACRO (16, 4,  4, vnx32hf, HF, 32, 8, vnx32sf, SF, __VA_ARGS__)	\
  MACRO (32, 1, 32,  vnx4sf, SF, 64, 2,  vnx4df, DF, __VA_ARGS__)	\
  MACRO (32, 2, 16,  vnx8sf, SF, 64, 4,  vnx8df, DF, __VA_ARGS__)	\
  MACRO (32, 4,  8, vnx16sf, SF, 64, 8, vnx16df, DF, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, floating point modes, and info for
   corresponding widening integer vector type and extra arguments.

   MACRO (SEW, LMUL, MLEN, FMODE, FSMODE, WSEW, WLMUL, WIMODE, WISMODE)  */
#define _RVV_FLOAT_WINT_ITERATOR_ARG(MACRO, ...)			\
  MACRO (16, 1, 16,  vnx8hf, HF, 32, 2,  vnx8si, SI, __VA_ARGS__)	\
  MACRO (16, 2,  8, vnx16hf, HF, 32, 4, vnx16si, SI, __VA_ARGS__)	\
  MACRO (16, 4,  4, vnx32hf, HF, 32, 8, vnx32si, SI, __VA_ARGS__)	\
  MACRO (32, 1, 32,  vnx4sf, SF, 64, 2,  vnx4di, DI, __VA_ARGS__)	\
  MACRO (32, 2, 16,  vnx8sf, SF, 64, 4,  vnx8di, DI, __VA_ARGS__)	\
  MACRO (32, 4,  8, vnx16sf, SF, 64, 8, vnx16di, DI, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, integer modes, and info for
   corresponding widening floating point vector type and extra arguments.

   MACRO (SEW, LMUL, MLEN, IMODE, ISMODE, WSEW, WLMUL, WFMODE, WFSMODE)  */
#define _RVV_WFLOAT_INT_ITERATOR_ARG(MACRO, ...)			\
  MACRO (16, 1, 16,  vnx8hi, HI, 32, 2,  vnx8sf, SF, __VA_ARGS__)	\
  MACRO (16, 2,  8, vnx16hi, HI, 32, 4, vnx16sf, SF, __VA_ARGS__)	\
  MACRO (16, 4,  4, vnx32hi, HI, 32, 8, vnx32sf, SF, __VA_ARGS__)	\
  MACRO (32, 1, 32,  vnx4si, SI, 64, 2,  vnx4df, DF, __VA_ARGS__)	\
  MACRO (32, 2, 16,  vnx8si, SI, 64, 4,  vnx8df, DF, __VA_ARGS__)	\
  MACRO (32, 4,  8, vnx16si, SI, 64, 8, vnx16df, DF, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, floating point modes, and info for
   corresponding integer vector type and extra arguments.

   MACRO (SEW, LMUL, MLEN, FMODE, FSMODE, IMODE, ISMODE)  */
#define _RVV_FLOAT_INT_ITERATOR_ARG(MACRO, ...)	\
  MACRO (16, 1, 16,  vnx8hf, HF,  vnx8hi, HI, __VA_ARGS__)	\
  MACRO (16, 2,  8, vnx16hf, HF, vnx16hi, HI, __VA_ARGS__)	\
  MACRO (16, 4,  4, vnx32hf, HF, vnx32hi, HI, __VA_ARGS__)	\
  MACRO (16, 8,  2, vnx64hf, HF, vnx64hi, HI, __VA_ARGS__)	\
  MACRO (32, 1, 32,  vnx4sf, SF,  vnx4si, SI, __VA_ARGS__)	\
  MACRO (32, 2, 16,  vnx8sf, SF,  vnx8si, SI, __VA_ARGS__)	\
  MACRO (32, 4,  8, vnx16sf, SF, vnx16si, SI, __VA_ARGS__)	\
  MACRO (32, 8,  4, vnx32sf, SF, vnx32si, SI, __VA_ARGS__)	\
  MACRO (64, 1, 64,  vnx2df, DF,  vnx2di, DI, __VA_ARGS__)	\
  MACRO (64, 2, 32,  vnx4df, DF,  vnx4di, DI, __VA_ARGS__)	\
  MACRO (64, 4, 16,  vnx8df, DF,  vnx8di, DI, __VA_ARGS__)	\
  MACRO (64, 8,  8, vnx16df, DF, vnx16di, DI, __VA_ARGS__)

/* An iterator to call a macro with every supported MLEN and internal
   type numbering on VNx<N>BI for vector masking modes.  */
#define _RVV_MASK_ITERATOR(MACRO)	\
  MACRO (1, 128)			\
  MACRO (2, 64)				\
  MACRO (4, 32)				\
  MACRO (8, 16)				\
  MACRO (16, 8)				\
  MACRO (32, 4)				\
  MACRO (64, 2)

/* An iterator to call a macro with every supported MLEN and internal
   type numbering on VNx<N>BI with extra arguments for vector masking modes.  */
#define _RVV_MASK_ITERATOR_ARG(MACRO, ...)	\
  MACRO (1, 128, __VA_ARGS__)			\
  MACRO (2, 64, __VA_ARGS__)			\
  MACRO (4, 32, __VA_ARGS__)			\
  MACRO (8, 16, __VA_ARGS__)			\
  MACRO (16, 8, __VA_ARGS__)			\
  MACRO (32, 4, __VA_ARGS__)			\
  MACRO (64, 2, __VA_ARGS__)

/* Macros to create an enumeration identifier for a function prototype.  */
#define RISCV_FTYPE_NAME0(A) RISCV_##A##_FTYPE
#define RISCV_FTYPE_NAME1(A, B) RISCV_##A##_FTYPE_##B
#define RISCV_FTYPE_NAME2(A, B, C) RISCV_##A##_FTYPE_##B##_##C
#define RISCV_FTYPE_NAME3(A, B, C, D) RISCV_##A##_FTYPE_##B##_##C##_##D
#define RISCV_FTYPE_NAME4(A, B, C, D, E) RISCV_##A##_FTYPE_##B##_##C##_##D##_##E

/* Classifies the prototype of a built-in function.  */
enum riscv_function_type {
#define DEF_RISCV_FTYPE(NARGS, LIST) RISCV_FTYPE_NAME##NARGS LIST,
#include "config/riscv/riscv-ftypes.def"
#undef DEF_RISCV_FTYPE
  RISCV_MAX_FTYPE_MAX
};

/* Specifies how a built-in function should be converted into rtl.  */
enum riscv_builtin_type {
  /* The function corresponds directly to an .md pattern.  */
  RISCV_BUILTIN_DIRECT,

  /* Likewise, but with return type VOID.  */
  RISCV_BUILTIN_DIRECT_NO_TARGET,
  RISCV_BUILTIN_SHIFT_SCALAR,
  RISCV_BUILTIN_SHIFT_MASK_SCALAR
};

/* Declare an availability predicate for built-in functions.  */
#define AVAIL(NAME, COND)		\
 static unsigned int			\
 riscv_builtin_avail_##NAME (void)	\
 {					\
   return (COND);			\
 }

/* This structure describes a single built-in function.  */
struct riscv_builtin_description {
  /* The code of the main .md file instruction.  See riscv_builtin_type
     for more information.  */
  enum insn_code icode;

  /* The name of the built-in function.  */
  const char *name;

  /* Specifies how the function should be expanded.  */
  enum riscv_builtin_type builtin_type;

  /* The function's prototype.  */
  enum riscv_function_type prototype;

  /* Whether the function is available.  */
  unsigned int (*avail) (void);
};

AVAIL (hard_float, TARGET_HARD_FLOAT)
AVAIL (vector, TARGET_VECTOR)

/* Construct a riscv_builtin_description from the given arguments.

   INSN is the name of the associated instruction pattern, without the
   leading CODE_FOR_riscv_.

   NAME is the name of the function itself, without the leading
   "__builtin_riscv_".

   BUILTIN_TYPE and FUNCTION_TYPE are riscv_builtin_description fields.

   AVAIL is the name of the availability predicate, without the leading
   riscv_builtin_avail_.  */
#define RISCV_BUILTIN(INSN, NAME, BUILTIN_TYPE, FUNCTION_TYPE, AVAIL)	\
  { CODE_FOR_riscv_ ## INSN, "__builtin_riscv_" NAME,			\
    BUILTIN_TYPE, FUNCTION_TYPE, riscv_builtin_avail_ ## AVAIL }

/* Define __builtin_riscv_<INSN>, which is a RISCV_BUILTIN_DIRECT function
   mapped to instruction CODE_FOR_riscv_<INSN>,  FUNCTION_TYPE and AVAIL
   are as for RISCV_BUILTIN.  */
#define DIRECT_BUILTIN(INSN, FUNCTION_TYPE, AVAIL)			\
  RISCV_BUILTIN (INSN, #INSN, RISCV_BUILTIN_DIRECT, FUNCTION_TYPE, AVAIL)

/* Define __builtin_riscv_<INSN>, which is a RISCV_BUILTIN_DIRECT_NO_TARGET
   function mapped to instruction CODE_FOR_riscv_<INSN>,  FUNCTION_TYPE
   and AVAIL are as for RISCV_BUILTIN.  */
#define DIRECT_NO_TARGET_BUILTIN(INSN, FUNCTION_TYPE, AVAIL)		\
  RISCV_BUILTIN (INSN, #INSN, RISCV_BUILTIN_DIRECT_NO_TARGET,		\
		 FUNCTION_TYPE, AVAIL)

/* Same as above, but for using named patterns in the md file.  It drops the
   riscv after CODE_FOR_, but it is otherwise the same.  */
#define RISCV_NAMED(INSN, NAME, BUILTIN_TYPE, FUNCTION_TYPE, AVAIL)	\
  { CODE_FOR_ ## INSN, "__builtin_riscv_" NAME,			\
    BUILTIN_TYPE, FUNCTION_TYPE, riscv_builtin_avail_ ## AVAIL }

/* This has an extra NAME argument, as the builtin name and the pattern name
   are constructed differently.  */
#define DIRECT_NAMED(INSN, NAME, FUNCTION_TYPE, AVAIL)			\
  RISCV_NAMED (INSN, #NAME, RISCV_BUILTIN_DIRECT, FUNCTION_TYPE, AVAIL)

/* This has an extra NAME argument, as the builtin name and the pattern name
   are constructed differently.  */
#define DIRECT_NAMED_NO_TARGET(INSN, NAME, FUNCTION_TYPE, AVAIL)	\
  RISCV_NAMED (INSN, #NAME, RISCV_BUILTIN_DIRECT_NO_TARGET,		\
	       FUNCTION_TYPE, AVAIL)

#define SHIFT_NAMED(INSN, NAME, FUNCTION_TYPE, AVAIL)			\
  RISCV_NAMED (INSN, #NAME, RISCV_BUILTIN_SHIFT_SCALAR, FUNCTION_TYPE, AVAIL)

#define SHIFT_MASK_NAMED(INSN, NAME, FUNCTION_TYPE, AVAIL)		\
  RISCV_NAMED (INSN, #NAME, RISCV_BUILTIN_SHIFT_MASK_SCALAR,		\
	       FUNCTION_TYPE, AVAIL)

/* Argument types.  */
#define RISCV_ATYPE_VOID void_type_node
#define RISCV_ATYPE_UQI unsigned_int8_type_node
#define RISCV_ATYPE_UHI unsigned_int16_type_node
#define RISCV_ATYPE_USI unsigned_int32_type_node
#define RISCV_ATYPE_UDI unsigned_int64_type_node
#define RISCV_ATYPE_QI int8_type_node
#define RISCV_ATYPE_HI int16_type_node
#define RISCV_ATYPE_SI int32_type_node
#define RISCV_ATYPE_DI int64_type_node

#define RISCV_ATYPE_QI_PTR intQI_ptr_type_node
#define RISCV_ATYPE_HI_PTR intHI_ptr_type_node
#define RISCV_ATYPE_SI_PTR intSI_ptr_type_node
#define RISCV_ATYPE_DI_PTR intDI_ptr_type_node
#define RISCV_ATYPE_UQI_PTR unsigned_intQI_ptr_type_node
#define RISCV_ATYPE_UHI_PTR unsigned_intHI_ptr_type_node
#define RISCV_ATYPE_USI_PTR unsigned_intSI_ptr_type_node
#define RISCV_ATYPE_UDI_PTR unsigned_intDI_ptr_type_node

#define RISCV_ATYPE_C_QI_PTR const_intQI_ptr_type_node
#define RISCV_ATYPE_C_HI_PTR const_intHI_ptr_type_node
#define RISCV_ATYPE_C_SI_PTR const_intSI_ptr_type_node
#define RISCV_ATYPE_C_DI_PTR const_intDI_ptr_type_node
#define RISCV_ATYPE_C_UQI_PTR const_unsigned_intQI_ptr_type_node
#define RISCV_ATYPE_C_UHI_PTR const_unsigned_intHI_ptr_type_node
#define RISCV_ATYPE_C_USI_PTR const_unsigned_intSI_ptr_type_node
#define RISCV_ATYPE_C_UDI_PTR const_unsigned_intDI_ptr_type_node

#define RISCV_ATYPE_HF fp16_type_node
#define RISCV_ATYPE_SF float_type_node
#define RISCV_ATYPE_DF double_type_node

#define RISCV_ATYPE_HF_PTR float16_ptr_type_node
#define RISCV_ATYPE_SF_PTR float_ptr_type_node
#define RISCV_ATYPE_DF_PTR double_ptr_type_node

#define RISCV_ATYPE_C_HF_PTR const_float16_ptr_type_node
#define RISCV_ATYPE_C_SF_PTR const_float_ptr_type_node
#define RISCV_ATYPE_C_DF_PTR const_double_ptr_type_node

#define RISCV_ATYPE_VF16M1 rvvfloat16m1_t_node
#define RISCV_ATYPE_VF16M2 rvvfloat16m2_t_node
#define RISCV_ATYPE_VF16M4 rvvfloat16m4_t_node
#define RISCV_ATYPE_VF16M8 rvvfloat16m8_t_node
#define RISCV_ATYPE_VF32M1 rvvfloat32m1_t_node
#define RISCV_ATYPE_VF32M2 rvvfloat32m2_t_node
#define RISCV_ATYPE_VF32M4 rvvfloat32m4_t_node
#define RISCV_ATYPE_VF32M8 rvvfloat32m8_t_node
#define RISCV_ATYPE_VF64M1 rvvfloat64m1_t_node
#define RISCV_ATYPE_VF64M2 rvvfloat64m2_t_node
#define RISCV_ATYPE_VF64M4 rvvfloat64m4_t_node
#define RISCV_ATYPE_VF64M8 rvvfloat64m8_t_node

#define RISCV_ATYPE_VB1 rvvbool1_t_node
#define RISCV_ATYPE_VB2 rvvbool2_t_node
#define RISCV_ATYPE_VB4 rvvbool4_t_node
#define RISCV_ATYPE_VB8 rvvbool8_t_node
#define RISCV_ATYPE_VB16 rvvbool16_t_node
#define RISCV_ATYPE_VB32 rvvbool32_t_node
#define RISCV_ATYPE_VB64 rvvbool64_t_node

#define RISCV_ATYPE_VI8M1 rvvint8m1_t_node
#define RISCV_ATYPE_VI8M2 rvvint8m2_t_node
#define RISCV_ATYPE_VI8M4 rvvint8m4_t_node
#define RISCV_ATYPE_VI8M8 rvvint8m8_t_node
#define RISCV_ATYPE_VI16M1 rvvint16m1_t_node
#define RISCV_ATYPE_VI16M2 rvvint16m2_t_node
#define RISCV_ATYPE_VI16M4 rvvint16m4_t_node
#define RISCV_ATYPE_VI16M8 rvvint16m8_t_node
#define RISCV_ATYPE_VI32M1 rvvint32m1_t_node
#define RISCV_ATYPE_VI32M2 rvvint32m2_t_node
#define RISCV_ATYPE_VI32M4 rvvint32m4_t_node
#define RISCV_ATYPE_VI32M8 rvvint32m8_t_node
#define RISCV_ATYPE_VI64M1 rvvint64m1_t_node
#define RISCV_ATYPE_VI64M2 rvvint64m2_t_node
#define RISCV_ATYPE_VI64M4 rvvint64m4_t_node
#define RISCV_ATYPE_VI64M8 rvvint64m8_t_node

#define RISCV_ATYPE_VUI8M1 rvvuint8m1_t_node
#define RISCV_ATYPE_VUI8M2 rvvuint8m2_t_node
#define RISCV_ATYPE_VUI8M4 rvvuint8m4_t_node
#define RISCV_ATYPE_VUI8M8 rvvuint8m8_t_node
#define RISCV_ATYPE_VUI16M1 rvvuint16m1_t_node
#define RISCV_ATYPE_VUI16M2 rvvuint16m2_t_node
#define RISCV_ATYPE_VUI16M4 rvvuint16m4_t_node
#define RISCV_ATYPE_VUI16M8 rvvuint16m8_t_node
#define RISCV_ATYPE_VUI32M1 rvvuint32m1_t_node
#define RISCV_ATYPE_VUI32M2 rvvuint32m2_t_node
#define RISCV_ATYPE_VUI32M4 rvvuint32m4_t_node
#define RISCV_ATYPE_VUI32M8 rvvuint32m8_t_node
#define RISCV_ATYPE_VUI64M1 rvvuint64m1_t_node
#define RISCV_ATYPE_VUI64M2 rvvuint64m2_t_node
#define RISCV_ATYPE_VUI64M4 rvvuint64m4_t_node
#define RISCV_ATYPE_VUI64M8 rvvuint64m8_t_node

/* Helper type nodes for vector support.  */
tree const_float_ptr_type_node;
tree const_double_ptr_type_node;
tree float16_ptr_type_node;
tree const_float16_type_node;
tree const_float16_ptr_type_node;

#define DECLARE_SCALAR_INT_PTR_TYPE_NODE(WIDTH, MODE)	\
  tree int##WIDTH##_type_node;				\
  tree unsigned_int##WIDTH##_type_node;			\
  tree int##MODE##_ptr_type_node;			\
  tree unsigned_int##MODE##_ptr_type_node;		\
  tree const_int##MODE##_ptr_type_node;			\
  tree const_unsigned_int##MODE##_ptr_type_node;

_SCALAR_INT_ITERATOR(DECLARE_SCALAR_INT_PTR_TYPE_NODE)

/* Vector type nodes.  */
tree rvvint8m1_t_node;
tree rvvint8m2_t_node;
tree rvvint8m4_t_node;
tree rvvint8m8_t_node;
tree rvvint16m1_t_node;
tree rvvint16m2_t_node;
tree rvvint16m4_t_node;
tree rvvint16m8_t_node;
tree rvvint32m1_t_node;
tree rvvint32m2_t_node;
tree rvvint32m4_t_node;
tree rvvint32m8_t_node;
tree rvvint64m1_t_node;
tree rvvint64m2_t_node;
tree rvvint64m4_t_node;
tree rvvint64m8_t_node;

tree rvvuint8m1_t_node;
tree rvvuint8m2_t_node;
tree rvvuint8m4_t_node;
tree rvvuint8m8_t_node;
tree rvvuint16m1_t_node;
tree rvvuint16m2_t_node;
tree rvvuint16m4_t_node;
tree rvvuint16m8_t_node;
tree rvvuint32m1_t_node;
tree rvvuint32m2_t_node;
tree rvvuint32m4_t_node;
tree rvvuint32m8_t_node;
tree rvvuint64m1_t_node;
tree rvvuint64m2_t_node;
tree rvvuint64m4_t_node;
tree rvvuint64m8_t_node;

tree rvvfloat16m1_t_node;
tree rvvfloat16m2_t_node;
tree rvvfloat16m4_t_node;
tree rvvfloat16m8_t_node;
tree rvvfloat32m1_t_node;
tree rvvfloat32m2_t_node;
tree rvvfloat32m4_t_node;
tree rvvfloat32m8_t_node;
tree rvvfloat64m1_t_node;
tree rvvfloat64m2_t_node;
tree rvvfloat64m4_t_node;
tree rvvfloat64m8_t_node;

tree rvvbool1_t_node;
tree rvvbool2_t_node;
tree rvvbool4_t_node;
tree rvvbool8_t_node;
tree rvvbool16_t_node;
tree rvvbool32_t_node;
tree rvvbool64_t_node;

/* RISCV_FTYPE_ATYPESN takes N RISCV_FTYPES-like type codes and lists
   their associated RISCV_ATYPEs.  */
#define RISCV_FTYPE_ATYPES0(A) \
  RISCV_ATYPE_##A
#define RISCV_FTYPE_ATYPES1(A, B) \
  RISCV_ATYPE_##A, RISCV_ATYPE_##B
#define RISCV_FTYPE_ATYPES2(A, B, C) \
  RISCV_ATYPE_##A, RISCV_ATYPE_##B, RISCV_ATYPE_##C
#define RISCV_FTYPE_ATYPES3(A, B, C, D)	\
  RISCV_ATYPE_##A, RISCV_ATYPE_##B, RISCV_ATYPE_##C, RISCV_ATYPE_##D
#define RISCV_FTYPE_ATYPES4(A, B, C, D, E) \
  RISCV_ATYPE_##A, RISCV_ATYPE_##B, RISCV_ATYPE_##C, RISCV_ATYPE_##D, \
  RISCV_ATYPE_##E

#define SETVL_BUILTINS(E, L, MLEN, MODE, SUBMODE)			\
  DIRECT_BUILTIN (vsetvl##E##m##L##_si, RISCV_SI_FTYPE_SI, vector),	\
  DIRECT_BUILTIN (vsetvl##E##m##L##_di, RISCV_DI_FTYPE_DI, vector),

#define SETVTYPE_BUILTINS(E, L, MLEN, MODE, SUBMODE)			\
  DIRECT_NAMED_NO_TARGET (vsetvli_x0_##MODE, vsetvtype##E##m##L, RISCV_VOID_FTYPE, vector),


#define _VINT_LOAD_STORE_BUILTINS(E, L, MLEN, MODE, SUBMODE,		\
				  PNAME, PMODE, SUBTYPE, VCLASS)	\
  DIRECT_NAMED (							\
    vle##MODE##_##PNAME, vle##SUBTYPE##E##m##L##_##PNAME,		\
    RISCV_##VCLASS##E##M##L##_FTYPE_C_##SUBMODE##_PTR,			\
    vector),								\
  DIRECT_NAMED (							\
    vle##MODE##_##PNAME##_mask,						\
    vle##SUBTYPE##E##m##L##_##PNAME##_mask,				\
    RISCV_##VCLASS##E##M##L##_FTYPE_VB##MLEN##_##VCLASS##E##M##L##_C_##SUBMODE##_PTR, \
    vector),								\
  DIRECT_NAMED_NO_TARGET (						\
    vse##MODE##_##PNAME,						\
    vse##SUBTYPE##E##m##L##_##PNAME,					\
    RISCV_VOID_FTYPE_##VCLASS##E##M##L##_C_##SUBMODE##_PTR,		\
    vector),								\
  DIRECT_NAMED_NO_TARGET (						\
    vse##MODE##_##PNAME##_mask,						\
    vse##SUBTYPE##E##m##L##_##PNAME##_mask,				\
    RISCV_VOID_FTYPE_VB##MLEN##_##VCLASS##E##M##L##_C_##SUBMODE##_PTR,	\
    vector),

#define VINT_LOAD_STORE_BUILTINS(E, L, MLEN, MODE, SUBMODE)		\
  _VINT_LOAD_STORE_BUILTINS(E, L, MLEN, MODE, SUBMODE, si, SI,		\
			    int, VI)					\
  _VINT_LOAD_STORE_BUILTINS(E, L, MLEN, MODE, SUBMODE, di, DI,		\
			    int, VI)					\
  _VINT_LOAD_STORE_BUILTINS(E, L, MLEN, MODE, U##SUBMODE, si, SI,	\
			    uint, VUI)					\
  _VINT_LOAD_STORE_BUILTINS(E, L, MLEN, MODE, U##SUBMODE, di, DI,	\
			    uint, VUI)

#define VFLOAT_LOAD_STORE_BUILTINS(E, L, MLEN, MODE, SUBMODE)		\
  _VINT_LOAD_STORE_BUILTINS(E, L, MLEN, MODE, SUBMODE, si, SI,		\
			    float, VF)					\
  _VINT_LOAD_STORE_BUILTINS(E, L, MLEN, MODE, SUBMODE, di, DI,		\
			    float, VF)

#define _VINT_STRIDED_LOAD_STORE_BUILTINS(E, L, MLEN, MODE, SUBMODE,	\
					  PNAME, PMODE, SUBTYPE, VCLASS)\
  DIRECT_NAMED (							\
    vlse##MODE##_##PNAME, vlse##SUBTYPE##E##m##L##_##PNAME,		\
    RISCV_##VCLASS##E##M##L##_FTYPE_C_##SUBMODE##_PTR_##PMODE,		\
    vector),								\
  DIRECT_NAMED (							\
    vlse##MODE##_##PNAME##_mask,					\
    vlse##SUBTYPE##E##m##L##_##PNAME##_mask,				\
    RISCV_##VCLASS##E##M##L##_FTYPE_VB##MLEN##_##VCLASS##E##M##L##_C_##SUBMODE##_PTR_##PMODE, \
    vector),								\
  DIRECT_NAMED_NO_TARGET (						\
    vsse##MODE##_##PNAME,						\
    vsse##SUBTYPE##E##m##L##_##PNAME,					\
    RISCV_VOID_FTYPE_##VCLASS##E##M##L##_C_##SUBMODE##_PTR_##PMODE,	\
    vector),								\
  DIRECT_NAMED_NO_TARGET (						\
    vsse##MODE##_##PNAME##_mask,					\
    vsse##SUBTYPE##E##m##L##_##PNAME##_mask,				\
    RISCV_VOID_FTYPE_VB##MLEN##_##VCLASS##E##M##L##_C_##SUBMODE##_PTR_##PMODE,\
    vector),								\

#define VINT_STRIDED_LOAD_STORE_BUILTINS(E, L, MLEN, MODE, SUBMODE)	\
  _VINT_STRIDED_LOAD_STORE_BUILTINS(E, L, MLEN, MODE, SUBMODE, si, SI,	\
				    int, VI)				\
  _VINT_STRIDED_LOAD_STORE_BUILTINS(E, L, MLEN, MODE, SUBMODE, di, DI,	\
				    int, VI)				\
  _VINT_STRIDED_LOAD_STORE_BUILTINS(E, L, MLEN, MODE, U##SUBMODE, si, SI,\
				    uint, VUI)				\
  _VINT_STRIDED_LOAD_STORE_BUILTINS(E, L, MLEN, MODE, U##SUBMODE, di, DI,\
				    uint, VUI)

#define VFLOAT_STRIDED_LOAD_STORE_BUILTINS(E, L, MLEN, MODE, SUBMODE)	\
  _VINT_STRIDED_LOAD_STORE_BUILTINS(E, L, MLEN, MODE, SUBMODE, si, SI,	\
				    float, VF)				\
  _VINT_STRIDED_LOAD_STORE_BUILTINS(E, L, MLEN, MODE, SUBMODE, di, DI,	\
				    float, VF)

#define VINT_BIN_OP_BUILTINS_NOMASK(E, L, MLEN, MODE, SUBMODE, OP)	\
  DIRECT_NAMED (OP##MODE##3, v##OP##int##E##m##L,			\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_VI##E##M##L,	\
		vector),						\
  DIRECT_NAMED (OP##MODE##3, v##OP##uint##E##m##L,			\
		RISCV_VUI##E##M##L##_FTYPE_VUI##E##M##L##_VUI##E##M##L,	\
		vector),						\
  DIRECT_NAMED (OP##MODE##3_scalar, v##OP##int##E##m##L##_scalar,	\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_##SUBMODE,	\
		vector),						\
  DIRECT_NAMED (OP##MODE##3_scalar, v##OP##uint##E##m##L##_scalar,	\
		RISCV_VUI##E##M##L##_FTYPE_VUI##E##M##L##_U##SUBMODE,	\
		vector),

#define VINT_BIN_OP_BUILTINS(E, L, MLEN, MODE, SUBMODE, OP)		\
  VINT_BIN_OP_BUILTINS_NOMASK(E, L, MLEN, MODE, SUBMODE, OP)		\
  DIRECT_NAMED (OP##MODE##3_mask, v##OP##int##E##m##L##_mask,		\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_VI##E##M##L##_VI##E##M##L,\
		vector),						\
  DIRECT_NAMED (OP##MODE##3_mask, v##OP##uint##E##m##L##_mask,		\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_VUI##E##M##L##_VUI##E##M##L,\
		vector),						\
  DIRECT_NAMED (OP##MODE##3_scalar_mask, v##OP##int##E##m##L##_scalar_mask,\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_VI##E##M##L##_##SUBMODE,\
		vector),						\
  DIRECT_NAMED (OP##MODE##3_scalar_mask, v##OP##uint##E##m##L##_scalar_mask,\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_VUI##E##M##L##_U##SUBMODE,\
		vector),

#define VINT_SCALAR_ONLY_BIN_OP_BUILTINS(E, L, MLEN, MODE, SUBMODE, OP)	\
  DIRECT_NAMED (OP##MODE##3_scalar, v##OP##int##E##m##L##_scalar,	\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_##SUBMODE,	\
		vector),						\
  DIRECT_NAMED (OP##MODE##3_scalar, v##OP##uint##E##m##L##_scalar,	\
		RISCV_VUI##E##M##L##_FTYPE_VUI##E##M##L##_U##SUBMODE,	\
		vector),						\
  DIRECT_NAMED (OP##MODE##3_scalar_mask, v##OP##int##E##m##L##_scalar_mask,\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_VI##E##M##L##_##SUBMODE,\
		vector),						\
  DIRECT_NAMED (OP##MODE##3_scalar_mask, v##OP##uint##E##m##L##_scalar_mask,\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_VUI##E##M##L##_U##SUBMODE,\
		vector),

#define VFLOAT_UNARY_OP_BUILTINS(E, L, MLEN, MODE, SUBMODE, OP)		\
  DIRECT_NAMED (OP##MODE##2, vf##OP##float##E##m##L,			\
		RISCV_VF##E##M##L##_FTYPE_VF##E##M##L,			\
		vector),						\
  DIRECT_NAMED (OP##MODE##2_mask, vf##OP##float##E##m##L##_mask,	\
		RISCV_VF##E##M##L##_FTYPE_VB##MLEN##_VF##E##M##L##_VF##E##M##L,\
		vector),

#define VFLOAT_BIN_OP_BUILTINS(E, L, MLEN, MODE, SUBMODE, OP)		\
  VFLOAT_SCALAR_ONLY_BIN_OP_BUILTINS (E, L, MLEN, MODE, SUBMODE, OP)	\
  DIRECT_NAMED (OP##MODE##3, vf##OP##float##E##m##L,			\
		RISCV_VF##E##M##L##_FTYPE_VF##E##M##L##_VF##E##M##L,	\
		vector),						\
  DIRECT_NAMED (OP##MODE##3_mask, vf##OP##float##E##m##L##_mask,		\
		RISCV_VF##E##M##L##_FTYPE_VB##MLEN##_VF##E##M##L##_VF##E##M##L##_VF##E##M##L,\
		vector),

#define VFLOAT_SCALAR_ONLY_BIN_OP_BUILTINS(E, L, MLEN, MODE,		\
					   SUBMODE, OP)			\
  DIRECT_NAMED (OP##MODE##3_scalar, vf##OP##float##E##m##L##_scalar,	\
		RISCV_VF##E##M##L##_FTYPE_VF##E##M##L##_##SUBMODE,	\
		vector),						\
  DIRECT_NAMED (OP##MODE##3_scalar_mask, vf##OP##float##E##m##L##_scalar_mask,\
		RISCV_VF##E##M##L##_FTYPE_VB##MLEN##_VF##E##M##L##_VF##E##M##L##_##SUBMODE,\
		vector),

#define VFLOAT_CVT_XF_BUILTINS(E, L, MLEN, FMODE, FSMODE,		\
			       IMODE, ISMODE, OP, NAME)			\
  DIRECT_NAMED (OP##FMODE##IMODE##2, vf##NAME##f##E##m##L,		\
		RISCV_VI##E##M##L##_FTYPE_VF##E##M##L,			\
		vector),						\
  DIRECT_NAMED (OP##FMODE##IMODE##2_mask, vf##NAME##f##E##m##L##_mask,	\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_VF##E##M##L,\
		vector),

#define VFLOAT_CVT_XUF_BUILTINS(E, L, MLEN, FMODE, FSMODE,		\
				IMODE, ISMODE, OP, NAME)		\
  DIRECT_NAMED (OP##FMODE##IMODE##2, vf##NAME##f##E##m##L,		\
		RISCV_VUI##E##M##L##_FTYPE_VF##E##M##L,			\
		vector),						\
  DIRECT_NAMED (OP##FMODE##IMODE##2_mask, vf##NAME##f##E##m##L##_mask,	\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_VF##E##M##L,\
		vector),

#define VFLOAT_CVT_FX_BUILTINS(E, L, MLEN, FMODE, FSMODE,		\
			       IMODE, ISMODE, OP, NAME)			\
  DIRECT_NAMED (OP##IMODE##FMODE##2, vf##NAME##f##E##m##L,		\
		RISCV_VF##E##M##L##_FTYPE_VI##E##M##L,			\
		vector),						\
  DIRECT_NAMED (OP##IMODE##FMODE##2_mask, vf##NAME##f##E##m##L##_mask,	\
		RISCV_VF##E##M##L##_FTYPE_VB##MLEN##_VF##E##M##L##_VI##E##M##L,\
		vector),

#define VFLOAT_CVT_FXU_BUILTINS(E, L, MLEN, FMODE, FSMODE,		\
				IMODE, ISMODE, OP, NAME)		\
  DIRECT_NAMED (OP##IMODE##FMODE##2, vf##NAME##f##E##m##L,		\
		RISCV_VF##E##M##L##_FTYPE_VUI##E##M##L,			\
		vector),						\
  DIRECT_NAMED (OP##IMODE##FMODE##2_mask, vf##NAME##f##E##m##L##_mask,	\
		RISCV_VF##E##M##L##_FTYPE_VB##MLEN##_VF##E##M##L##_VUI##E##M##L,\
		vector),

#define VFLOAT_WCVT_XF_BUILTINS(E, L, MLEN, FMODE, FSMODE,		\
				WE, WL, WIMODE, WISMODE, OP, NAME)	\
  DIRECT_NAMED (OP##FMODE##WIMODE##2, vf##NAME##f##E##m##L,		\
		RISCV_VI##WE##M##WL##_FTYPE_VF##E##M##L,		\
		vector),						\
  DIRECT_NAMED (OP##FMODE##WIMODE##2_mask, vf##NAME##f##E##m##L##_mask,	\
		RISCV_VI##WE##M##WL##_FTYPE_VB##MLEN##_VI##WE##M##WL##_VF##E##M##L,\
		vector),

#define VFLOAT_WCVT_XUF_BUILTINS(E, L, MLEN, FMODE, FSMODE,		\
				 WE, WL, WIMODE, WISMODE, OP, NAME)	\
  DIRECT_NAMED (OP##FMODE##WIMODE##2, vf##NAME##f##E##m##L,		\
		RISCV_VUI##WE##M##WL##_FTYPE_VF##E##M##L,		\
		vector),						\
  DIRECT_NAMED (OP##FMODE##WIMODE##2_mask, vf##NAME##f##E##m##L##_mask,	\
		RISCV_VUI##WE##M##WL##_FTYPE_VB##MLEN##_VUI##WE##M##WL##_VF##E##M##L,\
		vector),

#define VFLOAT_WCVT_FX_BUILTINS(E, L, MLEN, IMODE, ISMODE,		\
				WE, WL, WFMODE, WFSMODE, OP, NAME)	\
  DIRECT_NAMED (OP##IMODE##WFMODE##2, vf##NAME##f##E##m##L,		\
		RISCV_VF##WE##M##WL##_FTYPE_VI##E##M##L,		\
		vector),						\
  DIRECT_NAMED (OP##IMODE##WFMODE##2_mask, vf##NAME##f##E##m##L##_mask,	\
		RISCV_VF##WE##M##WL##_FTYPE_VB##MLEN##_VF##WE##M##WL##_VI##E##M##L,\
		vector),

#define VFLOAT_WCVT_FXU_BUILTINS(E, L, MLEN, IMODE, ISMODE,		\
				 WE, WL, WFMODE, WFSMODE, OP, NAME)	\
  DIRECT_NAMED (OP##IMODE##WFMODE##2, vf##NAME##f##E##m##L,		\
		RISCV_VF##WE##M##WL##_FTYPE_VUI##E##M##L,		\
		vector),						\
  DIRECT_NAMED (OP##IMODE##WFMODE##2_mask, vf##NAME##f##E##m##L##_mask,	\
		RISCV_VF##WE##M##WL##_FTYPE_VB##MLEN##_VF##WE##M##WL##_VUI##E##M##L,\
		vector),

#define VFLOAT_WCVT_FF_BUILTINS(E, L, MLEN, VMODE, SMODE,		\
				WE, WL, WVMODE, WSMODE, OP, NAME)	\
  DIRECT_NAMED (OP##VMODE##WVMODE##2, vf##NAME##f##E##m##L,		\
		RISCV_VF##WE##M##WL##_FTYPE_VF##E##M##L,		\
		vector),						\
  DIRECT_NAMED (OP##VMODE##WVMODE##2_mask, vf##NAME##f##E##m##L##_mask,	\
		RISCV_VF##WE##M##WL##_FTYPE_VB##MLEN##_VF##WE##M##WL##_VF##E##M##L,\
		vector),

#define VFLOAT_NCVT_XF_BUILTINS(E, L, MLEN, IMODE, ISMODE,		\
				WE, WL, WFMODE, WFSMODE, OP, NAME)	\
  DIRECT_NAMED (OP##WFMODE##IMODE##2, vf##NAME##f##E##m##L,		\
		RISCV_VI##E##M##L##_FTYPE_VF##WE##M##WL,		\
		vector),						\
  DIRECT_NAMED (OP##WFMODE##IMODE##2_mask, vf##NAME##f##E##m##L##_mask,\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_VF##WE##M##WL,\
		vector),

#define VFLOAT_NCVT_XUF_BUILTINS(E, L, MLEN, IMODE, ISMODE,		\
				 WE, WL, WFMODE, WFSMODE, OP, NAME)	\
  DIRECT_NAMED (OP##WFMODE##IMODE##2, vf##NAME##f##E##m##L,		\
		RISCV_VUI##E##M##L##_FTYPE_VF##WE##M##WL,		\
		vector),						\
  DIRECT_NAMED (OP##WFMODE##IMODE##2_mask, vf##NAME##f##E##m##L##_mask,	\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_VF##WE##M##WL,\
		vector),

#define VFLOAT_NCVT_FX_BUILTINS(E, L, MLEN, FMODE, FSMODE,		\
				WE, WL, WIMODE, WISMODE, OP, NAME)	\
  DIRECT_NAMED (OP##WIMODE##FMODE##2, vf##NAME##f##E##m##L,		\
		RISCV_VF##E##M##L##_FTYPE_VI##WE##M##WL,		\
		vector),						\
  DIRECT_NAMED (OP##WIMODE##FMODE##2_mask, vf##NAME##f##E##m##L##_mask,	\
		RISCV_VF##E##M##L##_FTYPE_VB##MLEN##_VF##E##M##L##_VI##WE##M##WL,\
		vector),

#define VFLOAT_NCVT_FXU_BUILTINS(E, L, MLEN, FMODE, FSMODE,		\
				 WE, WL, WIMODE, WISMODE, OP, NAME)	\
  DIRECT_NAMED (OP##WIMODE##FMODE##2, vf##NAME##f##E##m##L,		\
		RISCV_VF##E##M##L##_FTYPE_VUI##WE##M##WL,		\
		vector),						\
  DIRECT_NAMED (OP##WIMODE##FMODE##2_mask, vf##NAME##f##E##m##L##_mask,	\
		RISCV_VF##E##M##L##_FTYPE_VB##MLEN##_VF##E##M##L##_VUI##WE##M##WL,\
		vector),

#define VFLOAT_NCVT_FF_BUILTINS(E, L, MLEN, VMODE, SMODE,		\
				WE, WL, WVMODE, WSMODE, OP, NAME)	\
  DIRECT_NAMED (OP##WVMODE##VMODE##2, vf##NAME##f##E##m##L,		\
		RISCV_VF##E##M##L##_FTYPE_VF##WE##M##WL,		\
		vector),						\
  DIRECT_NAMED (OP##WVMODE##VMODE##2_mask, vf##NAME##f##E##m##L##_mask,	\
		RISCV_VF##E##M##L##_FTYPE_VB##MLEN##_VF##E##M##L##_VF##WE##M##WL,\
		vector),

#define VFLOAT_VFCLASS_BUILTINS(E, L, MLEN, MODE, SUBMODE, OP)		\
  DIRECT_NAMED (OP##MODE##2, vf##OP##float##E##m##L,			\
		RISCV_VUI##E##M##L##_FTYPE_VF##E##M##L,			\
		vector),						\
  DIRECT_NAMED (OP##MODE##2_mask, vf##OP##float##E##m##L##_mask,	\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_VF##E##M##L,\
		vector),

#define VFLOAT_MAC_OP_BUILTINS(E, L, MLEN, MODE, SUBMODE, OP)		\
  DIRECT_NAMED (vf##OP##MODE, vf##OP##_sv_f##E##m##L,			\
		RISCV_VF##E##M##L##_FTYPE_VF##E##M##L##_VF##E##M##L##_VF##E##M##L,\
		vector),						\
  DIRECT_NAMED (vf##OP##MODE##_scalar, vf##OP##_sv_f##E##m##L##_scalar,\
		RISCV_VF##E##M##L##_FTYPE_VF##E##M##L##_##SUBMODE##_VF##E##M##L,\
		vector),						\
  DIRECT_NAMED (vf##OP##MODE##_mask, vf##OP##_sv_f##E##m##L##_mask,	\
		RISCV_VF##E##M##L##_FTYPE_VB##MLEN##_VF##E##M##L##_VF##E##M##L##_VF##E##M##L,\
		vector),						\
  DIRECT_NAMED (vf##OP##MODE##_scalar_mask, vf##OP##_sv_f##E##m##L##_scalar_mask,\
		RISCV_VF##E##M##L##_FTYPE_VB##MLEN##_VF##E##M##L##_##SUBMODE##_VF##E##M##L,\
		vector),

#define VFLOAT_WIDENING_MAC_OP_BUILTINS(E, L, MLEN, MODE, SUBMODE,	\
					WE, WL, WMODE, WSMODE, OP)	\
  DIRECT_NAMED (vf##OP##MODE, vf##OP##_sv_f##E##m##L,			\
		RISCV_VF##WE##M##WL##_FTYPE_VF##WE##M##WL##_VF##E##M##L##_VF##E##M##L,\
		vector),						\
  DIRECT_NAMED (vf##OP##MODE##_scalar, vf##OP##_sv_f##E##m##L##_scalar,	\
		RISCV_VF##WE##M##WL##_FTYPE_VF##WE##M##WL##_##SUBMODE##_VF##E##M##L,\
		vector),						\
  DIRECT_NAMED (vf##OP##MODE##_mask, vf##OP##_sv_f##E##m##L##_mask,	\
		RISCV_VF##WE##M##WL##_FTYPE_VB##MLEN##_VF##WE##M##WL##_VF##E##M##L##_VF##E##M##L,\
		vector),						\
  DIRECT_NAMED (vf##OP##MODE##_scalar_mask, vf##OP##_sv_f##E##m##L##_scalar_mask,\
		RISCV_VF##WE##M##WL##_FTYPE_VB##MLEN##_VF##WE##M##WL##_##SUBMODE##_VF##E##M##L,\
		vector),

#define VINT_ADC_SBC_BUILTINS(E, L, MLEN, MODE, SUBMODE, OP)		\
  DIRECT_NAMED (OP##MODE##4, v##OP##int##E##m##L,			\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_VI##E##M##L##_VB##MLEN, \
		vector),						\
  DIRECT_NAMED (m##OP##MODE##4m, vm##OP##mint##E##m##L,			\
		RISCV_VB##MLEN##_FTYPE_VI##E##M##L##_VI##E##M##L##_VB##MLEN, \
		vector),						\
  DIRECT_NAMED (m##OP##MODE##4, vm##OP##int##E##m##L,			\
		RISCV_VB##MLEN##_FTYPE_VI##E##M##L##_VI##E##M##L, 	\
		vector),						\
  DIRECT_NAMED (OP##MODE##4_scalar, v##OP##int##E##m##L##_scalar,	\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_##SUBMODE##_VB##MLEN, \
		vector),						\
  DIRECT_NAMED (m##OP##MODE##4m_scalar, vm##OP##mint##E##m##L##_scalar,	\
		RISCV_VB##MLEN##_FTYPE_VI##E##M##L##_##SUBMODE##_VB##MLEN, \
		vector),						\
  DIRECT_NAMED (m##OP##MODE##4_scalar, vm##OP##int##E##m##L##_scalar,	\
		RISCV_VB##MLEN##_FTYPE_VI##E##M##L##_##SUBMODE, 	\
		vector),						\
  DIRECT_NAMED (OP##MODE##4, v##OP##uint##E##m##L,			\
		RISCV_VUI##E##M##L##_FTYPE_VUI##E##M##L##_VUI##E##M##L##_VB##MLEN, \
		vector),						\
  DIRECT_NAMED (m##OP##MODE##4m, vm##OP##muint##E##m##L,		\
		RISCV_VB##MLEN##_FTYPE_VUI##E##M##L##_VUI##E##M##L##_VB##MLEN, \
		vector),						\
  DIRECT_NAMED (m##OP##MODE##4, vm##OP##uint##E##m##L,			\
		RISCV_VB##MLEN##_FTYPE_VUI##E##M##L##_VUI##E##M##L, 	\
		vector),						\
  DIRECT_NAMED (OP##MODE##4_scalar, v##OP##uint##E##m##L##_scalar,	\
		RISCV_VUI##E##M##L##_FTYPE_VUI##E##M##L##_U##SUBMODE##_VB##MLEN, \
		vector),						\
  DIRECT_NAMED (m##OP##MODE##4m_scalar, vm##OP##muint##E##m##L##_scalar,\
		RISCV_VB##MLEN##_FTYPE_VUI##E##M##L##_U##SUBMODE##_VB##MLEN, \
		vector),						\
  DIRECT_NAMED (m##OP##MODE##4_scalar, vm##OP##uint##E##m##L##_scalar,	\
		RISCV_VB##MLEN##_FTYPE_VUI##E##M##L##_U##SUBMODE,	\
		vector),

#define ICMP_BUILTINS(E, L, MLEN, MODE, SUBMODE, OP, OPU)		\
  DIRECT_NAMED (s##OP##MODE, vs##OP##int##E##m##L,			\
		RISCV_VB##MLEN##_FTYPE_VI##E##M##L##_VI##E##M##L,	\
		vector),						\
  DIRECT_NAMED (s##OPU##MODE, vs##OPU##uint##E##m##L,			\
		RISCV_VB##MLEN##_FTYPE_VUI##E##M##L##_VUI##E##M##L,	\
		vector),						\
  DIRECT_NAMED (s##OP##MODE##_mask, vs##OP##int##E##m##L##_mask,	\
		RISCV_VB##MLEN##_FTYPE_VB##MLEN##_VB##MLEN##_VI##E##M##L##_VI##E##M##L,	\
		vector),						\
  DIRECT_NAMED (s##OPU##MODE##_mask, vs##OPU##uint##E##m##L##_mask,	\
		RISCV_VB##MLEN##_FTYPE_VB##MLEN##_VB##MLEN##_VUI##E##M##L##_VUI##E##M##L, \
		vector),						\
  DIRECT_NAMED (s##OP##MODE##_scalar, vs##OP##int##E##m##L##_scalar,	\
		RISCV_VB##MLEN##_FTYPE_VI##E##M##L##_##SUBMODE,		\
		vector),						\
  DIRECT_NAMED (s##OPU##MODE##_scalar, vs##OPU##uint##E##m##L##_scalar,	\
		RISCV_VB##MLEN##_FTYPE_VUI##E##M##L##_U##SUBMODE,	\
		vector),						\
  DIRECT_NAMED (s##OP##MODE##_scalar_mask, vs##OP##int##E##m##L##_scalar_mask,	\
		RISCV_VB##MLEN##_FTYPE_VB##MLEN##_VB##MLEN##_VI##E##M##L##_##SUBMODE,\
		vector),						\
  DIRECT_NAMED (s##OPU##MODE##_scalar_mask, vs##OPU##uint##E##m##L##_scalar_mask,\
		RISCV_VB##MLEN##_FTYPE_VB##MLEN##_VB##MLEN##_VUI##E##M##L##_U##SUBMODE,\
		vector),

#define FCMP_BUILTINS(E, L, MLEN, MODE, SUBMODE, OP)			\
  DIRECT_NAMED (OP##MODE, OP##int##E##m##L,				\
		RISCV_VB##MLEN##_FTYPE_VF##E##M##L##_VF##E##M##L,	\
		vector),						\
  DIRECT_NAMED (OP##MODE##_mask, OP##int##E##m##L##_mask,		\
		RISCV_VB##MLEN##_FTYPE_VB##MLEN##_VB##MLEN##_VF##E##M##L##_VF##E##M##L,\
		vector),						\
  DIRECT_NAMED (OP##MODE##_scalar, OP##int##E##m##L##_scalar,		\
		RISCV_VB##MLEN##_FTYPE_VF##E##M##L##_##SUBMODE,		\
		vector),						\
  DIRECT_NAMED (OP##MODE##_scalar_mask, OP##int##E##m##L##_scalar_mask,	\
		RISCV_VB##MLEN##_FTYPE_VB##MLEN##_VB##MLEN##_VF##E##M##L##_##SUBMODE,\
		vector),

#define VINT_BIN_OP_OPU_BUILTINS(E, L, MLEN, MODE, SUBMODE, OP, OPU)	\
  DIRECT_NAMED (OP##MODE##3, vv##OP##int##E##m##L,			\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_VI##E##M##L,	\
		vector),						\
  DIRECT_NAMED (OPU##MODE##3, vv##OPU##uint##E##m##L,			\
		RISCV_VUI##E##M##L##_FTYPE_VUI##E##M##L##_VUI##E##M##L,	\
		vector),						\
  DIRECT_NAMED (OP##MODE##3_mask, vv##OP##int##E##m##L##_mask,		\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_VI##E##M##L##_VI##E##M##L,\
		vector),						\
  DIRECT_NAMED (OPU##MODE##3_mask, vv##OPU##uint##E##m##L##_mask,	\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_VUI##E##M##L##_VUI##E##M##L,\
		vector),						\
  DIRECT_NAMED (OP##MODE##3_scalar, vs##OP##int##E##m##L##_scalar,	\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_##SUBMODE,	\
		vector),						\
  DIRECT_NAMED (OPU##MODE##3_scalar, vs##OPU##uint##E##m##L##_scalar,	\
		RISCV_VUI##E##M##L##_FTYPE_VUI##E##M##L##_U##SUBMODE,	\
		vector),						\
  DIRECT_NAMED (OP##MODE##3_scalar_mask, vs##OP##int##E##m##L##_scalar_mask,\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_VI##E##M##L##_##SUBMODE,\
		vector),						\
  DIRECT_NAMED (OPU##MODE##3_scalar_mask, vs##OPU##uint##E##m##L##_scalar_mask,\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_VUI##E##M##L##_U##SUBMODE,\
		vector),

#define VINT_MULH_BUILTINS_NOMASK(E, L, MLEN, MODE, SUBMODE, OP)	\
  DIRECT_NAMED (OP##s##MODE, vv##OP##int##E##m##L,			\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_VI##E##M##L,	\
		vector),						\
  DIRECT_NAMED (OP##u##MODE, vv##OP##uint##E##m##L,			\
		RISCV_VUI##E##M##L##_FTYPE_VUI##E##M##L##_VUI##E##M##L,	\
		vector),						\
  DIRECT_NAMED (OP##su##MODE, vv##OP##su_int##E##m##L,			\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_VUI##E##M##L,	\
		vector),						\
  DIRECT_NAMED (OP##s##MODE##_scalar, vv##OP##int##E##m##L##_scalar,	\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_##SUBMODE,	\
		vector),						\
  DIRECT_NAMED (OP##u##MODE##_scalar, vv##OP##uint##E##m##L##_scalar,	\
		RISCV_VUI##E##M##L##_FTYPE_VUI##E##M##L##_U##SUBMODE,	\
		vector),						\
  DIRECT_NAMED (OP##su##MODE##_scalar, vv##OP##su_int##E##m##L##_scalar,\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_U##SUBMODE,	\
		vector),

#define VINT_MULH_BUILTINS(E, L, MLEN, MODE, SUBMODE, OP)	\
  VINT_MULH_BUILTINS_NOMASK(E, L, MLEN, MODE, SUBMODE, OP)	\
  DIRECT_NAMED (OP##s##MODE##_mask, vv##OP##int##E##m##L##_mask,\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_VI##E##M##L##_VI##E##M##L,\
		vector),					\
  DIRECT_NAMED (OP##u##MODE##_mask, vv##OP##uint##E##m##L##_mask,\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_VUI##E##M##L##_VUI##E##M##L,\
		vector),					\
  DIRECT_NAMED (OP##su##MODE##_mask, vv##OP##su_int##E##m##L##_mask,\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_VI##E##M##L##_VUI##E##M##L,\
		vector),					\
  DIRECT_NAMED (OP##s##MODE##_scalar_mask, vv##OP##int##E##m##L##_scalar_mask,\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_VI##E##M##L##_##SUBMODE,\
		vector),					\
  DIRECT_NAMED (OP##u##MODE##_scalar_mask, vv##OP##uint##E##m##L##_scalar_mask,\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_VUI##E##M##L##_U##SUBMODE,\
		vector),					\
  DIRECT_NAMED (OP##su##MODE##_scalar_mask, vv##OP##su_int##E##m##L##_scalar_mask,\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_VI##E##M##L##_U##SUBMODE,\
		vector),

#define VINT_WMUL_BUILTINS_NOMASK(E, L, MLEN, MODE, SUBMODE,		\
				  WE, WL, WMODE, WSUBMODE, OP)		\
  DIRECT_NAMED (OP##MODE, vv##OP##int##E##m##L,				\
		RISCV_VI##WE##M##WL##_FTYPE_VI##E##M##L##_VI##E##M##L,	\
		vector),						\
  DIRECT_NAMED (OP##u##MODE, vv##OP##uint##E##m##L,			\
		RISCV_VUI##WE##M##WL##_FTYPE_VUI##E##M##L##_VUI##E##M##L,\
		vector),						\
  DIRECT_NAMED (OP##su##MODE, vv##OP##su_int##E##m##L,			\
		RISCV_VI##WE##M##WL##_FTYPE_VI##E##M##L##_VUI##E##M##L,	\
		vector),						\
  DIRECT_NAMED (OP##MODE##_scalar, vv##OP##int##E##m##L##_scalar,	\
		RISCV_VI##WE##M##WL##_FTYPE_VI##E##M##L##_##SUBMODE,	\
		vector),						\
  DIRECT_NAMED (OP##u##MODE##_scalar, vv##OP##uint##E##m##L##_scalar,	\
		RISCV_VUI##WE##M##WL##_FTYPE_VUI##E##M##L##_U##SUBMODE,	\
		vector),						\
  DIRECT_NAMED (OP##su##MODE##_scalar, vv##OP##su_int##E##m##L##_scalar,\
		RISCV_VI##WE##M##WL##_FTYPE_VI##E##M##L##_U##SUBMODE,	\
		vector),

#define VINT_WMUL_BUILTINS(E, L, MLEN, MODE, SUBMODE,		\
			   WE, WL, WMODE, WSUBMODE, OP)		\
  VINT_WMUL_BUILTINS_NOMASK(E, L, MLEN, MODE, SUBMODE,		\
			    WE, WL, WMODE, WSUBMODE, OP)	\
  DIRECT_NAMED (OP##MODE##_mask, vv##OP##int##E##m##L##_mask,	\
		RISCV_VI##WE##M##WL##_FTYPE_VB##MLEN##_VI##WE##M##WL##_VI##E##M##L##_VI##E##M##L,\
		vector),					\
  DIRECT_NAMED (OP##u##MODE##_mask, vv##OP##uint##E##m##L##_mask,\
		RISCV_VUI##WE##M##WL##_FTYPE_VB##MLEN##_VUI##WE##M##WL##_VUI##E##M##L##_VUI##E##M##L,\
		vector),					\
  DIRECT_NAMED (OP##su##MODE##_mask, vv##OP##su_int##E##m##L##_mask,\
		RISCV_VI##WE##M##WL##_FTYPE_VB##MLEN##_VI##WE##M##WL##_VI##E##M##L##_VUI##E##M##L,\
		vector),					\
  DIRECT_NAMED (OP##MODE##_scalar_mask, vv##OP##int##E##m##L##_scalar_mask,\
		RISCV_VI##WE##M##WL##_FTYPE_VB##MLEN##_VI##WE##M##WL##_VI##E##M##L##_##SUBMODE,\
		vector),					\
  DIRECT_NAMED (OP##u##MODE##_scalar_mask, vv##OP##uint##E##m##L##_scalar_mask,\
		RISCV_VUI##WE##M##WL##_FTYPE_VB##MLEN##_VUI##WE##M##WL##_VUI##E##M##L##_U##SUBMODE,\
		vector),					\
  DIRECT_NAMED (OP##su##MODE##_scalar_mask, vv##OP##su_int##E##m##L##_scalar_mask,\
		RISCV_VI##WE##M##WL##_FTYPE_VB##MLEN##_VI##WE##M##WL##_VI##E##M##L##_U##SUBMODE,\
		vector),

#define VFLOAT_WMUL_BUILTINS(E, L, MLEN, VMODE, SDEMODE,		\
			     WE, WL, WVMODE, WSMODE, OP)		\
  DIRECT_NAMED (OP##VMODE##_vv, v##OP##_vv_f##E##m##L,			\
		RISCV_VF##WE##M##WL##_FTYPE_VF##E##M##L##_VF##E##M##L,	\
		vector),						\
  DIRECT_NAMED (OP##VMODE##_vv_scalar, v##OP##_vv_f##E##m##L##_scalar,	\
		RISCV_VF##WE##M##WL##_FTYPE_VF##E##M##L##_##SDEMODE,	\
		vector),						\
  DIRECT_NAMED (OP##VMODE##_vv_mask, v##OP##_vv_f##E##m##L##_mask,	\
		RISCV_VF##WE##M##WL##_FTYPE_VB##MLEN##_VF##WE##M##WL##_VF##E##M##L##_VF##E##M##L,\
		vector),						\
  DIRECT_NAMED (OP##VMODE##_vv_scalar_mask, v##OP##_vv_f##E##m##L##_scalar_mask,\
		RISCV_VF##WE##M##WL##_FTYPE_VB##MLEN##_VF##WE##M##WL##_VF##E##M##L##_##SDEMODE,\
		vector),

#define VINT_MAC_OP_BUILTINS_NOMASK(E, L, MLEN, MODE, SUBMODE, OP)	\
  DIRECT_NAMED (v##OP##MODE, v##OP##_sv_i##E##m##L,			\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_VI##E##M##L##_VI##E##M##L,\
		vector),						\
  DIRECT_NAMED (v##OP##MODE##_scalar, v##OP##_sv_i##E##m##L##_scalar,	\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_##SUBMODE##_VI##E##M##L,\
		vector),						\
  DIRECT_NAMED (v##OP##MODE, v##OP##_sv_u##E##m##L,			\
		RISCV_VUI##E##M##L##_FTYPE_VUI##E##M##L##_VUI##E##M##L##_VUI##E##M##L,\
		vector),						\
  DIRECT_NAMED (v##OP##MODE##_scalar, v##OP##_sv_u##E##m##L##_scalar,	\
		RISCV_VUI##E##M##L##_FTYPE_VUI##E##M##L##_U##SUBMODE##_VUI##E##M##L,\
		vector),

#define VINT_MAC_OP_BUILTINS(E, L, MLEN, MODE, SUBMODE, OP)		\
  VINT_MAC_OP_BUILTINS_NOMASK(E, L, MLEN, MODE, SUBMODE, OP)		\
  DIRECT_NAMED (v##OP##MODE##_mask, v##OP##_sv_i##E##m##L##_mask,	\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_VI##E##M##L##_VI##E##M##L,\
		vector),						\
  DIRECT_NAMED (v##OP##MODE##_mask, v##OP##_sv_u##E##m##L##_mask,	\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_VUI##E##M##L##_VUI##E##M##L,\
		vector),						\
  DIRECT_NAMED (v##OP##MODE##_scalar_mask, v##OP##_sv_i##E##m##L##_scalar_mask,\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_##SUBMODE##_VI##E##M##L,\
		vector),						\
  DIRECT_NAMED (v##OP##MODE##_scalar_mask, v##OP##_sv_u##E##m##L##_scalar_mask,\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_U##SUBMODE##_VUI##E##M##L,\
		vector),

#define VINT_WIDENING_MAC_OP_BUILTINS_SCALAR_NOMASK(E, L, MLEN, MODE, SUBMODE,\
						    WE, WL, WVMODE, WSMODE, OP, NAME)\
  DIRECT_NAMED (OP##MODE##WVMODE##4_scalar, v##NAME##_sv_i##E##m##L##_scalar,\
		RISCV_VI##WE##M##WL##_FTYPE_VI##WE##M##WL##_##SUBMODE##_VI##E##M##L,\
		vector),						\
  DIRECT_NAMED (u##OP##MODE##WVMODE##4_scalar, v##NAME##_sv_u##E##m##L##_scalar,\
		RISCV_VUI##WE##M##WL##_FTYPE_VUI##WE##M##WL##_U##SUBMODE##_VUI##E##M##L,\
		vector),						\
  DIRECT_NAMED (su##OP##MODE##WVMODE##4_scalar, v##NAME##su_sv_i##E##m##L##_scalar,\
		RISCV_VI##WE##M##WL##_FTYPE_VI##WE##M##WL##_##SUBMODE##_VUI##E##M##L,\
		vector),						\
  DIRECT_NAMED (us##OP##MODE##WVMODE##4_scalar, v##NAME##us_sv_i##E##m##L##_scalar,\
		RISCV_VI##WE##M##WL##_FTYPE_VI##WE##M##WL##_U##SUBMODE##_VI##E##M##L,\
		vector),

#define VINT_WIDENING_MAC_OP_BUILTINS_SCALAR(E, L, MLEN, MODE, SUBMODE,\
					     WE, WL, WVMODE, WSMODE, OP, NAME)\
  VINT_WIDENING_MAC_OP_BUILTINS_SCALAR_NOMASK(E, L, MLEN, MODE, SUBMODE,\
					      WE, WL, WVMODE, WSMODE, OP, NAME)\
  DIRECT_NAMED (OP##MODE##WVMODE##4_scalar_mask, v##NAME##_sv_i##E##m##L##_scalar_mask,\
		RISCV_VI##WE##M##WL##_FTYPE_VB##MLEN##_VI##WE##M##WL##_##SUBMODE##_VI##E##M##L,\
		vector),						\
  DIRECT_NAMED (u##OP##MODE##WVMODE##4_scalar_mask, v##NAME##_sv_u##E##m##L##_scalar_mask,\
		RISCV_VUI##WE##M##WL##_FTYPE_VB##MLEN##_VUI##WE##M##WL##_U##SUBMODE##_VUI##E##M##L,\
		vector),						\
  DIRECT_NAMED (su##OP##MODE##WVMODE##4_scalar_mask, v##NAME##su_sv_i##E##m##L##_scalar_mask,\
		RISCV_VI##WE##M##WL##_FTYPE_VB##MLEN##_VI##WE##M##WL##_##SUBMODE##_VUI##E##M##L,\
		vector),						\
  DIRECT_NAMED (us##OP##MODE##WVMODE##4_scalar_mask, v##NAME##us_sv_i##E##m##L##_scalar_mask,\
		RISCV_VI##WE##M##WL##_FTYPE_VB##MLEN##_VI##WE##M##WL##_U##SUBMODE##_VI##E##M##L,\
		vector),

#define VINT_WIDENING_MAC_OP_BUILTINS_NOMASK(E, L, MLEN, MODE, SUBMODE,\
					     WE, WL, WVMODE, WSMODE, OP, NAME)\
  DIRECT_NAMED (OP##MODE##WVMODE##4, v##NAME##_sv_i##E##m##L,		\
		RISCV_VI##WE##M##WL##_FTYPE_VI##WE##M##WL##_VI##E##M##L##_VI##E##M##L,\
		vector),						\
  DIRECT_NAMED (u##OP##MODE##WVMODE##4, v##NAME##_sv_u##E##m##L,	\
		RISCV_VUI##WE##M##WL##_FTYPE_VUI##WE##M##WL##_VUI##E##M##L##_VUI##E##M##L,\
		vector),						\
  DIRECT_NAMED (su##OP##MODE##WVMODE##4, v##NAME##su_sv_i##E##m##L,	\
		RISCV_VI##WE##M##WL##_FTYPE_VI##WE##M##WL##_VI##E##M##L##_VUI##E##M##L,\
		vector),

#define VINT_WIDENING_MAC_OP_BUILTINS(E, L, MLEN, MODE, SUBMODE,\
				      WE, WL, WVMODE, WSMODE, OP, NAME)\
  VINT_WIDENING_MAC_OP_BUILTINS_NOMASK(E, L, MLEN, MODE, SUBMODE,\
				       WE, WL, WVMODE, WSMODE, OP, NAME)\
  DIRECT_NAMED (OP##MODE##WVMODE##4_mask, v##NAME##_sv_i##E##m##L##_mask,\
		RISCV_VI##WE##M##WL##_FTYPE_VB##MLEN##_VI##WE##M##WL##_VI##E##M##L##_VI##E##M##L,\
		vector),						\
  DIRECT_NAMED (u##OP##MODE##WVMODE##4_mask, v##NAME##_sv_u##E##m##L##_mask,\
		RISCV_VUI##WE##M##WL##_FTYPE_VB##MLEN##_VUI##WE##M##WL##_VUI##E##M##L##_VUI##E##M##L,\
		vector),						\
  DIRECT_NAMED (su##OP##MODE##WVMODE##4_mask, v##NAME##su_sv_i##E##m##L##_mask,\
		RISCV_VI##WE##M##WL##_FTYPE_VB##MLEN##_VI##WE##M##WL##_VI##E##M##L##_VUI##E##M##L,\
		vector),

#define MASK_LOGICAL_BUILTINS(MLEN, N, OP)				\
  DIRECT_NAMED (OP##vnx##N##bi3, v##OP##bool##MLEN,			\
		RISCV_VB##MLEN##_FTYPE_VB##MLEN##_VB##MLEN,		\
		vector),

#define MASK_SCALAR_UNARY_BUILTINS(MLEN, N, OP)				\
  DIRECT_NAMED (OP##vnx##N##bi2_si, v##OP##bool##MLEN##_si,		\
		RISCV_SI_FTYPE_VB##MLEN,				\
		vector),						\
  DIRECT_NAMED (OP##vnx##N##bi2_di, v##OP##bool##MLEN##_di,		\
		RISCV_DI_FTYPE_VB##MLEN,				\
		vector),						\
  DIRECT_NAMED (OP##vnx##N##bi2_si_mask, v##OP##bool##MLEN##_si_mask,	\
		RISCV_SI_FTYPE_VB##MLEN##_VB##MLEN,			\
		vector),						\
  DIRECT_NAMED (OP##vnx##N##bi2_di_mask, v##OP##bool##MLEN##_di_mask,	\
		RISCV_DI_FTYPE_VB##MLEN##_VB##MLEN,			\
		vector),

#define MASK_NULLARY_BUILTINS(MLEN, N, OP)				\
  DIRECT_NAMED (OP##vnx##N##bi, v##OP##bool##MLEN,			\
		RISCV_VB##MLEN##_FTYPE,					\
		vector),

#define UNMAKED_MASK_UNARY_BUILTINS(MLEN, N, OP)			\
  DIRECT_NAMED (OP##vnx##N##bi, v##OP##bool##MLEN,			\
		RISCV_VB##MLEN##_FTYPE_VB##MLEN,			\
		vector),						\

#define MASK_UNARY_BUILTINS(MLEN, N, OP)				\
  UNMAKED_MASK_UNARY_BUILTINS(MLEN, N, OP)				\
  DIRECT_NAMED (OP##vnx##N##bi_mask, v##OP##bool##MLEN##_mask,		\
		RISCV_VB##MLEN##_FTYPE_VB##MLEN##_VB##MLEN##_VB##MLEN,	\
		vector),						\

#define IOTA_BUILTINS(E, L, MLEN, MODE, SUBMODE)			\
  DIRECT_NAMED (iota##MODE##2, viotaint##E##m##L,			\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN,			\
		vector),						\
  DIRECT_NAMED (iota##MODE##2, viotauint##E##m##L,			\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN,			\
		vector),						\
  DIRECT_NAMED (iota##MODE##2_mask, viotaint##E##m##L##_mask,		\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_VB##MLEN,\
		vector),						\
  DIRECT_NAMED (iota##MODE##2_mask, viotauint##E##m##L##_mask,		\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_VB##MLEN,\
		vector),

#define VID_BUILTINS(E, L, MLEN, MODE, SUBMODE)				\
  DIRECT_NAMED (vid##MODE, viduint##E##m##L,				\
		RISCV_VUI##E##M##L##_FTYPE,				\
		vector),						\
  DIRECT_NAMED (vid##MODE##_mask, viduint##E##m##L##_mask,		\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L,	\
		vector),

#define VINT_WIDENING_ADD_SUB_BUILTINS_NOMASK(E, L, MLEN, VMODE, SDEMODE,\
					      WE, WL, WVMODE, WSMODE, OP)\
  DIRECT_NAMED (OP##VMODE##_vv, v##OP##_vv_i##E##m##L,			\
		RISCV_VI##WE##M##WL##_FTYPE_VI##E##M##L##_VI##E##M##L,	\
		vector),						\
  DIRECT_NAMED (OP##u##VMODE##_vv, v##OP##_vv_u##E##m##L,		\
		RISCV_VUI##WE##M##WL##_FTYPE_VUI##E##M##L##_VUI##E##M##L,\
		vector),						\
  DIRECT_NAMED (OP##VMODE##_vv_scalar, v##OP##_vv_i##E##m##L##_scalar,	\
		RISCV_VI##WE##M##WL##_FTYPE_VI##E##M##L##_##SDEMODE,	\
		vector),						\
  DIRECT_NAMED (OP##u##VMODE##_vv_scalar, v##OP##_vv_u##E##m##L##_scalar,\
		RISCV_VUI##WE##M##WL##_FTYPE_VUI##E##M##L##_U##SDEMODE,	\
		vector),						\
  DIRECT_NAMED (OP##VMODE##_wv, v##OP##_wv_i##E##m##L,			\
		RISCV_VI##WE##M##WL##_FTYPE_VI##WE##M##WL##_VI##E##M##L,\
		vector),						\
  DIRECT_NAMED (OP##u##VMODE##_wv, v##OP##_wv_u##E##m##L,		\
		RISCV_VUI##WE##M##WL##_FTYPE_VUI##WE##M##WL##_VUI##E##M##L,\
		vector),						\
  DIRECT_NAMED (OP##VMODE##_wv_scalar, v##OP##_wv_i##E##m##L##_scalar,	\
		RISCV_VI##WE##M##WL##_FTYPE_VI##WE##M##WL##_##SDEMODE,	\
		vector),						\
  DIRECT_NAMED (OP##u##VMODE##_wv_scalar, v##OP##_wv_u##E##m##L##_scalar,\
		RISCV_VUI##WE##M##WL##_FTYPE_VUI##WE##M##WL##_##U##SDEMODE,\
		vector),

#define VINT_WIDENING_ADD_SUB_BUILTINS(E, L, MLEN, VMODE, SDEMODE,	\
				       WE, WL, WVMODE, WSMODE, OP)	\
  VINT_WIDENING_ADD_SUB_BUILTINS_NOMASK(E, L, MLEN, VMODE, SDEMODE,	\
					WE, WL, WVMODE, WSMODE, OP)	\
  DIRECT_NAMED (OP##VMODE##_vv_mask, v##OP##_vv_i##E##m##L##_mask,	\
		RISCV_VI##WE##M##WL##_FTYPE_VB##MLEN##_VI##WE##M##WL##_VI##E##M##L##_VI##E##M##L,\
		vector),						\
  DIRECT_NAMED (OP##u##VMODE##_vv_mask, v##OP##_vv_u##E##m##L##_mask,	\
		RISCV_VUI##WE##M##WL##_FTYPE_VB##MLEN##_VUI##WE##M##WL##_VUI##E##M##L##_VUI##E##M##L,\
		vector),						\
  DIRECT_NAMED (OP##VMODE##_vv_scalar_mask, v##OP##_vv_i##E##m##L##_scalar_mask,\
		RISCV_VI##WE##M##WL##_FTYPE_VB##MLEN##_VI##WE##M##WL##_VI##E##M##L##_##SDEMODE,\
		vector),						\
  DIRECT_NAMED (OP##u##VMODE##_vv_scalar_mask, v##OP##_vv_u##E##m##L##_scalar_mask,\
		RISCV_VUI##WE##M##WL##_FTYPE_VB##MLEN##_VUI##WE##M##WL##_VUI##E##M##L##_U##SDEMODE,\
		vector),						\
  DIRECT_NAMED (OP##VMODE##_wv_mask, v##OP##_wv_i##E##m##L##_mask,	\
		RISCV_VI##WE##M##WL##_FTYPE_VB##MLEN##_VI##WE##M##WL##_VI##WE##M##WL##_VI##E##M##L,\
		vector),						\
  DIRECT_NAMED (OP##u##VMODE##_wv_mask, v##OP##_wv_u##E##m##L##_mask,	\
		RISCV_VUI##WE##M##WL##_FTYPE_VB##MLEN##_VUI##WE##M##WL##_VUI##WE##M##WL##_VUI##E##M##L,\
		vector),						\
  DIRECT_NAMED (OP##VMODE##_wv_scalar_mask, v##OP##_wv_i##E##m##L##_scalar_mask,\
		RISCV_VI##WE##M##WL##_FTYPE_VB##MLEN##_VI##WE##M##WL##_VI##WE##M##WL##_##SDEMODE,\
		vector),						\
  DIRECT_NAMED (OP##u##VMODE##_wv_scalar_mask, v##OP##_wv_u##E##m##L##_scalar_mask,\
		RISCV_VUI##WE##M##WL##_FTYPE_VB##MLEN##_VUI##WE##M##WL##_VUI##WE##M##WL##_U##SDEMODE,\
		vector),

#define VFLOAT_WIDENING_ADD_SUB_BUILTINS_NOMASK(E, L, MLEN, VMODE, SDEMODE,\
						WE, WL, WVMODE, WSMODE, OP)\
  DIRECT_NAMED (OP##VMODE##_vv, v##OP##_vv_f##E##m##L,			\
		RISCV_VF##WE##M##WL##_FTYPE_VF##E##M##L##_VF##E##M##L,	\
		vector),						\
  DIRECT_NAMED (OP##VMODE##_vv_scalar, v##OP##_vv_f##E##m##L##_scalar,	\
		RISCV_VF##WE##M##WL##_FTYPE_VF##E##M##L##_##SDEMODE,	\
		vector),						\
  DIRECT_NAMED (OP##VMODE##_wv, v##OP##_wv_f##E##m##L,			\
		RISCV_VF##WE##M##WL##_FTYPE_VF##WE##M##WL##_VF##E##M##L,\
		vector),						\
  DIRECT_NAMED (OP##VMODE##_wv_scalar, v##OP##_wv_f##E##m##L##_scalar,	\
		RISCV_VF##WE##M##WL##_FTYPE_VF##WE##M##WL##_##SDEMODE,	\
		vector),

#define VFLOAT_WIDENING_ADD_SUB_BUILTINS(E, L, MLEN, VMODE, SDEMODE,	\
					 WE, WL, WVMODE, WSMODE, OP)	\
  VFLOAT_WIDENING_ADD_SUB_BUILTINS_NOMASK(E, L, MLEN, VMODE, SDEMODE,	\
					  WE, WL, WVMODE, WSMODE, OP)	\
  DIRECT_NAMED (OP##VMODE##_vv_mask, v##OP##_vv_f##E##m##L##_mask,	\
		RISCV_VF##WE##M##WL##_FTYPE_VB##MLEN##_VF##WE##M##WL##_VF##E##M##L##_VF##E##M##L,\
		vector),						\
  DIRECT_NAMED (OP##VMODE##_vv_scalar_mask, v##OP##_vv_f##E##m##L##_scalar_mask,\
		RISCV_VF##WE##M##WL##_FTYPE_VB##MLEN##_VF##WE##M##WL##_VF##E##M##L##_##SDEMODE,\
		vector),						\
  DIRECT_NAMED (OP##VMODE##_wv_mask, v##OP##_wv_f##E##m##L##_mask,	\
		RISCV_VF##WE##M##WL##_FTYPE_VB##MLEN##_VF##WE##M##WL##_VF##WE##M##WL##_VF##E##M##L,\
		vector),						\
  DIRECT_NAMED (OP##VMODE##_wv_scalar_mask, v##OP##_wv_f##E##m##L##_scalar_mask,\
		RISCV_VF##WE##M##WL##_FTYPE_VB##MLEN##_VF##WE##M##WL##_VF##WE##M##WL##_##SDEMODE,\
		vector),

#define VINT_REDUC_OP_BUILTINS(E, L, MLEN, MODE, SUBMODE, OP, OPU)	\
  DIRECT_NAMED (reduc_##OP##MODE, reduc_##OP##int##E##m##L,		\
		RISCV_VI##E##M1_FTYPE_VI##E##M1_VI##E##M##L,		\
		vector),						\
  DIRECT_NAMED (reduc_##OPU##MODE, reduc_##OPU##uint##E##m##L,		\
		RISCV_VUI##E##M1_FTYPE_VUI##E##M1_VUI##E##M##L,		\
		vector),						\
  DIRECT_NAMED (reduc_##OP##MODE##_mask, reduc_##OP##int##E##m##L##_mask, \
		RISCV_VI##E##M1_FTYPE_VB##MLEN##_VI##E##M1_VI##E##M##L, \
		vector),						\
  DIRECT_NAMED (reduc_##OPU##MODE##_mask, reduc_##OPU##uint##E##m##L##_mask,\
		RISCV_VUI##E##M1_FTYPE_VB##MLEN##_VUI##E##M1_VUI##E##M##L, \
		vector),

#define VINT_WREDUC_OP_BUILTINS(SEW, LMUL, MLEN, VMODE, SDEMODE,	\
				WSEW, WLMUL, WVMODE, WSMODE, OP, OPU)	\
  DIRECT_NAMED (wreduc_##OP##VMODE, wreduc_##OP##int##SEW##m##LMUL,	\
		RISCV_VI##WSEW##M1_FTYPE_VI##WSEW##M1_VI##SEW##M##LMUL,	\
		vector),						\
  DIRECT_NAMED (wreduc_##OPU##VMODE, wreduc_##OPU##uint##SEW##m##LMUL,	\
		RISCV_VUI##WSEW##M1_FTYPE_VUI##WSEW##M1_VUI##SEW##M##LMUL,	\
		vector),						\
  DIRECT_NAMED (wreduc_##OP##VMODE##_mask, wreduc_##OP##int##SEW##m##LMUL##_mask, \
		RISCV_VI##WSEW##M1_FTYPE_VB##MLEN##_VI##WSEW##M1_VI##SEW##M##LMUL, \
		vector),						\
  DIRECT_NAMED (wreduc_##OPU##VMODE##_mask, wreduc_##OPU##uint##SEW##m##LMUL##_mask,\
		RISCV_VUI##WSEW##M1_FTYPE_VB##MLEN##_VUI##WSEW##M1_VUI##SEW##M##LMUL, \
		vector),

#define VFLOAT_REDUC_OP_BUILTINS(E, L, MLEN, MODE, SUBMODE, OP)		\
  DIRECT_NAMED (reduc_##OP##MODE, freduc_##OP##float##E##m##L,		\
		RISCV_VF##E##M1_FTYPE_VF##E##M1_VF##E##M##L,		\
		vector),						\
  DIRECT_NAMED (reduc_##OP##MODE##_mask, freduc_##OP##float##E##m##L##_mask, \
		RISCV_VF##E##M1_FTYPE_VB##MLEN##_VF##E##M1_VF##E##M##L, \
		vector),

#define VFLOAT_WREDUC_OP_BUILTINS(SEW, LMUL, MLEN, VMODE, SDEMODE,	\
				  WSEW, WLMUL, WVMODE, WSMODE, OP)	\
  DIRECT_NAMED (wreduc_##OP##VMODE, fwreduc_##OP##float##SEW##m##LMUL,	\
		RISCV_VF##WSEW##M1_FTYPE_VF##WSEW##M1_VF##SEW##M##LMUL,	\
		vector),						\
  DIRECT_NAMED (wreduc_##OP##VMODE##_mask, fwreduc_##OP##float##SEW##m##LMUL##_mask, \
		RISCV_VF##WSEW##M1_FTYPE_VB##MLEN##_VF##WSEW##M1_VF##SEW##M##LMUL, \
		vector),

#define VREINTERPRET_INT(E, L, MLEN, IMODE, ISUBMODE)			\
  DIRECT_NAMED (mov##IMODE,						\
		vreinterpret_i##E##_u##E##_v_##E##m##L,			\
		RISCV_VI##E##M##L##_FTYPE_VUI##E##M##L,			\
		vector),						\
  DIRECT_NAMED (mov##IMODE,						\
		vreinterpret_u##E##_i##E##_v_##E##m##L,			\
		RISCV_VUI##E##M##L##_FTYPE_VI##E##M##L,			\
		vector),

#define VREINTERPRET(E, L, MLEN, IMODE, ISUBMODE, FMODE, FSUBMODE)	\
  DIRECT_NAMED (reinterpret_##FMODE##IMODE,				\
		vreinterpret_f##E##_i##E##_v_##E##m##L,			\
		RISCV_VF##E##M##L##_FTYPE_VI##E##M##L,			\
		vector),						\
  DIRECT_NAMED (reinterpret_##FMODE##IMODE,				\
		vreinterpret_f##E##_u##E##_v_##E##m##L,			\
		RISCV_VF##E##M##L##_FTYPE_VUI##E##M##L,			\
		vector),						\
  DIRECT_NAMED (reinterpret_##IMODE##FMODE,				\
		vreinterpret_i##E##_f##E##_v_##E##m##L,			\
		RISCV_VI##E##M##L##_FTYPE_VF##E##M##L,			\
		vector),						\
  DIRECT_NAMED (reinterpret_##IMODE##FMODE,				\
		vreinterpret_u##E##_f##E##_v_##E##m##L,			\
		RISCV_VUI##E##M##L##_FTYPE_VF##E##M##L,			\
		vector),

#define VINT_SHIFT_BUILTINS_NOMASK(E, L, MLEN, MODE, OP)		\
  DIRECT_NAMED (OP##MODE##3, v##OP##int##E##m##L,			\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_VUI##E##M##L,	\
		vector),						\
  SHIFT_NAMED (OP##MODE##3_scalar, v##OP##int##E##m##L##_scalar,	\
	       RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_UQI,		\
	       vector),

#define VINT_SHIFT_BUILTINS(E, L, MLEN, MODE, SUBMODE, OP)		\
  VINT_SHIFT_BUILTINS_NOMASK(E, L, MLEN, MODE, OP)			\
  DIRECT_NAMED (OP##MODE##3_mask, v##OP##int##E##m##L##_mask,		\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_VI##E##M##L##_VUI##E##M##L,\
		vector),						\
  SHIFT_MASK_NAMED (OP##MODE##3_scalar_mask, v##OP##int##E##m##L##_scalar_mask,\
		    RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_VI##E##M##L##_UQI,\
		    vector),

#define VUINT_SHIFT_BUILTINS_NOMASK(E, L, MLEN, MODE, OP)		\
  DIRECT_NAMED (OP##MODE##3, v##OP##uint##E##m##L,			\
		RISCV_VUI##E##M##L##_FTYPE_VUI##E##M##L##_VUI##E##M##L,	\
		vector),						\
  SHIFT_NAMED (OP##MODE##3_scalar, v##OP##uint##E##m##L##_scalar,	\
	       RISCV_VUI##E##M##L##_FTYPE_VUI##E##M##L##_UQI,		\
	       vector),

#define VUINT_SHIFT_BUILTINS(E, L, MLEN, MODE, SUBMODE, OP)		\
  VUINT_SHIFT_BUILTINS_NOMASK(E, L, MLEN, MODE, OP)			\
  DIRECT_NAMED (OP##MODE##3_mask, v##OP##uint##E##m##L##_mask,		\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_VUI##E##M##L##_VUI##E##M##L,\
		vector),						\
  SHIFT_MASK_NAMED (OP##MODE##3_scalar_mask, v##OP##uint##E##m##L##_scalar_mask,\
		    RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_VUI##E##M##L##_UQI,\
		    vector),

#define VINT_NARROWING_SHIFT_BUILTINS_NOMASK(E, L, MLEN, VMODE, SDEMODE,	\
					     WE, WL, WVMODE, WSMODE, OP)	\
  DIRECT_NAMED (OP##VMODE##3_nv, OP##int##WE##m##WL,				\
		RISCV_VI##E##M##L##_FTYPE_VI##WE##M##WL##_VUI##E##M##L,		\
		vector),							\
  SHIFT_NAMED (OP##VMODE##3_nv_scalar, OP##int##WE##m##WL##_scalar,		\
	       RISCV_VI##E##M##L##_FTYPE_VI##WE##M##WL##_UQI,			\
	       vector),

#define VINT_NARROWING_SHIFT_BUILTINS(E, L, MLEN, VMODE, SDEMODE,		\
				      WE, WL, WVMODE, WSMODE, OP)		\
  VINT_NARROWING_SHIFT_BUILTINS_NOMASK(E, L, MLEN, VMODE, SDEMODE,		\
				       WE, WL, WVMODE, WSMODE, OP)		\
  DIRECT_NAMED (OP##VMODE##3_nv_mask, OP##int##WE##m##WL##_mask,		\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_VI##WE##M##WL##_VUI##E##M##L,\
		vector),							\
  SHIFT_MASK_NAMED (OP##VMODE##3_nv_scalar_mask, OP##int##WE##m##WL##_scalar_mask,\
		    RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_VI##WE##M##WL##_UQI,\
		    vector),

#define VUINT_NARROWING_SHIFT_BUILTINS_NOMASK(E, L, MLEN, VMODE, SDEMODE,	\
					      WE, WL, WVMODE, WSMODE, OP)	\
  DIRECT_NAMED (OP##VMODE##3_nv, OP##uint##WE##m##WL,				\
		RISCV_VUI##E##M##L##_FTYPE_VUI##WE##M##WL##_VUI##E##M##L,	\
		vector),							\
  SHIFT_NAMED (OP##VMODE##3_nv_scalar, OP##uint##WE##m##WL##_scalar,		\
	       RISCV_VUI##E##M##L##_FTYPE_VUI##WE##M##WL##_UQI,			\
	       vector),

#define VUINT_NARROWING_SHIFT_BUILTINS(E, L, MLEN, VMODE, SDEMODE,	\
				       WE, WL, WVMODE, WSMODE, OP)	\
  VUINT_NARROWING_SHIFT_BUILTINS_NOMASK(E, L, MLEN, VMODE, SDEMODE,	\
					WE, WL, WVMODE, WSMODE, OP)	\
  DIRECT_NAMED (OP##VMODE##3_nv_mask, OP##uint##WE##m##WL##_mask,	\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_VUI##WE##M##WL##_VUI##E##M##L,\
		vector),						\
  SHIFT_MASK_NAMED (OP##VMODE##3_nv_scalar_mask, OP##uint##WE##m##WL##_scalar_mask,\
		    RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_VUI##WE##M##WL##_UQI,\
		    vector),

#define VINT_MERGE_BUILTINS(E, L, MLEN, MODE, SUBMODE, OP, NAME)	\
  DIRECT_NAMED (OP##MODE##cc, v##NAME##i##E##m##L##_mask,		\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_VI##E##M##L,\
		vector),						\
  DIRECT_NAMED (OP##MODE##cc, v##NAME##u##E##m##L##_mask,		\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_VUI##E##M##L,\
		vector),						\
  DIRECT_NAMED (OP##MODE##cc_scalar, v##NAME##i##E##m##L##_scalar_mask,	\
		RISCV_VI##E##M##L##_FTYPE_VB##MLEN##_VI##E##M##L##_##SUBMODE,\
		vector),						\
  DIRECT_NAMED (OP##MODE##cc_scalar, v##NAME##u##E##m##L##_scalar_mask,	\
		RISCV_VUI##E##M##L##_FTYPE_VB##MLEN##_VUI##E##M##L##_U##SUBMODE,\
		vector),

#define VFLOAT_MERGE_BUILTINS(E, L, MLEN, MODE, SUBMODE, OP, NAME)	\
  DIRECT_NAMED (OP##MODE##cc_scalar, v##NAME##f##E##m##L##_scalar_mask,	\
		RISCV_VF##E##M##L##_FTYPE_VB##MLEN##_VF##E##M##L##_##SUBMODE,\
		vector),

static const struct riscv_builtin_description riscv_builtins[] = {
  DIRECT_BUILTIN (frflags, RISCV_USI_FTYPE, hard_float),
  DIRECT_NO_TARGET_BUILTIN (fsflags, RISCV_VOID_FTYPE_USI, hard_float)

  _RVV_INT_ITERATOR (SETVL_BUILTINS)
  _RVV_INT_ITERATOR (SETVTYPE_BUILTINS)

  _RVV_INT_ITERATOR (VINT_STRIDED_LOAD_STORE_BUILTINS)
  _RVV_FLOAT_ITERATOR (VFLOAT_STRIDED_LOAD_STORE_BUILTINS)

  _RVV_INT_ITERATOR (VINT_LOAD_STORE_BUILTINS)
  _RVV_FLOAT_ITERATOR (VFLOAT_LOAD_STORE_BUILTINS)

  _RVV_INT_ITERATOR_ARG (VINT_BIN_OP_BUILTINS, add)
  _RVV_INT_ITERATOR_ARG (VINT_BIN_OP_BUILTINS, sub)
  _RVV_INT_ITERATOR_ARG (VINT_SCALAR_ONLY_BIN_OP_BUILTINS, rsub)
  _RVV_INT_ITERATOR_ARG (VINT_BIN_OP_BUILTINS, mul)

  _RVV_INT_ITERATOR_ARG (VINT_MERGE_BUILTINS, mov, merge)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_MERGE_BUILTINS, mov, merge)

  _RVV_INT_ITERATOR_ARG (VINT_SHIFT_BUILTINS, vashl)
  _RVV_INT_ITERATOR_ARG (VINT_SHIFT_BUILTINS, vashr)
  _RVV_INT_ITERATOR_ARG (VUINT_SHIFT_BUILTINS, vashl)
  _RVV_INT_ITERATOR_ARG (VUINT_SHIFT_BUILTINS, vlshr)

  _RVV_WINT_ITERATOR_ARG (VUINT_NARROWING_SHIFT_BUILTINS, vnsrl)
  _RVV_WINT_ITERATOR_ARG (VINT_NARROWING_SHIFT_BUILTINS, vnsra)

  _RVV_INT_ITERATOR_ARG (VINT_ADC_SBC_BUILTINS, adc)
  _RVV_INT_ITERATOR_ARG (VINT_ADC_SBC_BUILTINS, sbc)

  _RVV_WINT_ITERATOR_ARG (VINT_WIDENING_ADD_SUB_BUILTINS, wadd)
  _RVV_WINT_ITERATOR_ARG (VINT_WIDENING_ADD_SUB_BUILTINS, wsub)
  _RVV_WINT_ITERATOR_ARG (VINT_WMUL_BUILTINS, wmul)
  _RVV_WINT_ITERATOR_ARG (VINT_WIDENING_MAC_OP_BUILTINS, madd, wmacc)
  _RVV_WINT_ITERATOR_ARG (VINT_WIDENING_MAC_OP_BUILTINS_SCALAR, madd, wmacc)
  _RVV_QINT_ITERATOR_ARG (VINT_WIDENING_MAC_OP_BUILTINS, madd, qmacc)
  _RVV_QINT_ITERATOR_ARG (VINT_WIDENING_MAC_OP_BUILTINS_SCALAR, madd, qmacc)

  _RVV_INT_ITERATOR_ARG (VINT_BIN_OP_BUILTINS, and)
  _RVV_INT_ITERATOR_ARG (VINT_BIN_OP_BUILTINS, ior)
  _RVV_INT_ITERATOR_ARG (VINT_BIN_OP_BUILTINS, xor)
  _RVV_INT_ITERATOR_ARG (ICMP_BUILTINS, eq, eq)
  _RVV_INT_ITERATOR_ARG (ICMP_BUILTINS, ne, ne)
  _RVV_INT_ITERATOR_ARG (ICMP_BUILTINS, lt, ltu)
  _RVV_INT_ITERATOR_ARG (ICMP_BUILTINS, le, leu)
  _RVV_INT_ITERATOR_ARG (ICMP_BUILTINS, gt, gtu)
  _RVV_INT_ITERATOR_ARG (ICMP_BUILTINS, ge, geu)

  _RVV_INT_ITERATOR_ARG (VINT_BIN_OP_OPU_BUILTINS, smax, umax)
  _RVV_INT_ITERATOR_ARG (VINT_BIN_OP_OPU_BUILTINS, smin, umin)

  _RVV_INT_ITERATOR_ARG (VINT_BIN_OP_OPU_BUILTINS, div, udiv)
  _RVV_INT_ITERATOR_ARG (VINT_BIN_OP_OPU_BUILTINS, mod, umod)

  _RVV_INT_ITERATOR_ARG (VINT_MAC_OP_BUILTINS, macc)
  _RVV_INT_ITERATOR_ARG (VINT_MAC_OP_BUILTINS, madd)
  _RVV_INT_ITERATOR_ARG (VINT_MAC_OP_BUILTINS, nmsac)
  _RVV_INT_ITERATOR_ARG (VINT_MAC_OP_BUILTINS, nmsub)

  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_BIN_OP_BUILTINS, add)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_BIN_OP_BUILTINS, sub)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_SCALAR_ONLY_BIN_OP_BUILTINS, rsub)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_BIN_OP_BUILTINS, mul)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_BIN_OP_BUILTINS, div)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_SCALAR_ONLY_BIN_OP_BUILTINS, rdiv)
  _RVV_INT_ITERATOR_ARG (VINT_MULH_BUILTINS, mulh)

  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_BIN_OP_BUILTINS, max)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_BIN_OP_BUILTINS, min)

  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_BIN_OP_BUILTINS, copysign)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_BIN_OP_BUILTINS, ncopysign)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_BIN_OP_BUILTINS, xorsign)

  _RVV_FLOAT_ITERATOR_ARG (FCMP_BUILTINS, feq)
  _RVV_FLOAT_ITERATOR_ARG (FCMP_BUILTINS, fne)
  _RVV_FLOAT_ITERATOR_ARG (FCMP_BUILTINS, flt)
  _RVV_FLOAT_ITERATOR_ARG (FCMP_BUILTINS, fle)
  _RVV_FLOAT_ITERATOR_ARG (FCMP_BUILTINS, fgt)
  _RVV_FLOAT_ITERATOR_ARG (FCMP_BUILTINS, fge)

  _RVV_FLOAT_INT_ITERATOR_ARG (VFLOAT_CVT_FX_BUILTINS, float, fcvt_fx)
  _RVV_FLOAT_INT_ITERATOR_ARG (VFLOAT_CVT_FXU_BUILTINS, floatuns, fcvt_fxu)
  _RVV_FLOAT_INT_ITERATOR_ARG (VFLOAT_CVT_XF_BUILTINS, lrint, fcvt_xf)
  _RVV_FLOAT_INT_ITERATOR_ARG (VFLOAT_CVT_XF_BUILTINS, fix_trunc, fcvt_rtz_xf)
  _RVV_FLOAT_INT_ITERATOR_ARG (VFLOAT_CVT_XUF_BUILTINS, fcvt_xuf, fcvt_xuf)
  _RVV_FLOAT_INT_ITERATOR_ARG (VFLOAT_CVT_XUF_BUILTINS,
			       fixuns_trunc, fcvt_rtz_xuf)
  _RVV_WFLOAT_INT_ITERATOR_ARG (VFLOAT_WCVT_FX_BUILTINS, float, wfcvt_fx)
  _RVV_WFLOAT_INT_ITERATOR_ARG (VFLOAT_WCVT_FXU_BUILTINS, floatuns, wfcvt_fxu)
  _RVV_FLOAT_WINT_ITERATOR_ARG (VFLOAT_WCVT_XF_BUILTINS, lrint, wfcvt_xf)
  _RVV_FLOAT_WINT_ITERATOR_ARG (VFLOAT_WCVT_XF_BUILTINS, fix_trunc, wfcvt_rtz_xf)
  _RVV_FLOAT_WINT_ITERATOR_ARG (VFLOAT_WCVT_XUF_BUILTINS, fcvt_xuf, wfcvt_xuf)
  _RVV_FLOAT_WINT_ITERATOR_ARG (VFLOAT_WCVT_XUF_BUILTINS,
				fixuns_trunc, wfcvt_rtz_xuf)
  _RVV_WFLOAT_ITERATOR_ARG (VFLOAT_WCVT_FF_BUILTINS, extend, wfcvt_ff)

  _RVV_FLOAT_WINT_ITERATOR_ARG (VFLOAT_NCVT_FX_BUILTINS, float, nfcvt_fx)
  _RVV_FLOAT_WINT_ITERATOR_ARG (VFLOAT_NCVT_FXU_BUILTINS, floatuns, nfcvt_fxu)
  _RVV_WFLOAT_INT_ITERATOR_ARG (VFLOAT_NCVT_XF_BUILTINS, lrint, nfcvt_xf)
  _RVV_WFLOAT_INT_ITERATOR_ARG (VFLOAT_NCVT_XF_BUILTINS, fix_trunc, nfcvt_rtz_xf)
  _RVV_WFLOAT_INT_ITERATOR_ARG (VFLOAT_NCVT_XUF_BUILTINS, fcvt_xuf, nfcvt_xuf)
  _RVV_WFLOAT_INT_ITERATOR_ARG (VFLOAT_NCVT_XUF_BUILTINS,
				fixuns_trunc, nfcvt_rtz_xuf)
  _RVV_WFLOAT_ITERATOR_ARG (VFLOAT_NCVT_FF_BUILTINS, trunc, nfcvt_ff)
  _RVV_WFLOAT_ITERATOR_ARG (VFLOAT_NCVT_FF_BUILTINS, trunc_rod, nfcvt_rod_ff)

  _RVV_MASK_ITERATOR_ARG (MASK_NULLARY_BUILTINS, clr)
  _RVV_MASK_ITERATOR_ARG (MASK_NULLARY_BUILTINS, set)
  _RVV_MASK_ITERATOR_ARG (MASK_UNARY_BUILTINS, sbf)
  _RVV_MASK_ITERATOR_ARG (MASK_UNARY_BUILTINS, sof)
  _RVV_MASK_ITERATOR_ARG (MASK_UNARY_BUILTINS, sif)
  _RVV_MASK_ITERATOR_ARG (UNMAKED_MASK_UNARY_BUILTINS, not)
  _RVV_MASK_ITERATOR_ARG (MASK_LOGICAL_BUILTINS, and)
  _RVV_MASK_ITERATOR_ARG (MASK_LOGICAL_BUILTINS, xor)
  _RVV_MASK_ITERATOR_ARG (MASK_LOGICAL_BUILTINS, or)
  _RVV_MASK_ITERATOR_ARG (MASK_LOGICAL_BUILTINS, nand)
  _RVV_MASK_ITERATOR_ARG (MASK_LOGICAL_BUILTINS, nor)
  _RVV_MASK_ITERATOR_ARG (MASK_LOGICAL_BUILTINS, xnor)
  _RVV_MASK_ITERATOR_ARG (MASK_LOGICAL_BUILTINS, andnot)
  _RVV_MASK_ITERATOR_ARG (MASK_LOGICAL_BUILTINS, ornot)
  _RVV_MASK_ITERATOR_ARG (MASK_SCALAR_UNARY_BUILTINS, popc)
  _RVV_MASK_ITERATOR_ARG (MASK_SCALAR_UNARY_BUILTINS, first)
  _RVV_INT_ITERATOR (IOTA_BUILTINS)
  _RVV_INT_ITERATOR (VID_BUILTINS)

  _RVV_INT_ITERATOR_ARG (VINT_REDUC_OP_BUILTINS, sum, sum)
  _RVV_INT_ITERATOR_ARG (VINT_REDUC_OP_BUILTINS, max, maxu)
  _RVV_INT_ITERATOR_ARG (VINT_REDUC_OP_BUILTINS, min, minu)
  _RVV_INT_ITERATOR_ARG (VINT_REDUC_OP_BUILTINS, and, and)
  _RVV_INT_ITERATOR_ARG (VINT_REDUC_OP_BUILTINS, or, or)
  _RVV_INT_ITERATOR_ARG (VINT_REDUC_OP_BUILTINS, xor, xor)

  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_UNARY_OP_BUILTINS, sqrt)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_REDUC_OP_BUILTINS, sum)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_REDUC_OP_BUILTINS, osum)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_REDUC_OP_BUILTINS, max)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_REDUC_OP_BUILTINS, min)

  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_MAC_OP_BUILTINS, macc)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_MAC_OP_BUILTINS, nmacc)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_MAC_OP_BUILTINS, msac)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_MAC_OP_BUILTINS, nmsac)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_MAC_OP_BUILTINS, madd)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_MAC_OP_BUILTINS, nmadd)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_MAC_OP_BUILTINS, msub)
  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_MAC_OP_BUILTINS, nmsub)

  _RVV_WFLOAT_ITERATOR_ARG (VFLOAT_WIDENING_MAC_OP_BUILTINS, wmacc)
  _RVV_WFLOAT_ITERATOR_ARG (VFLOAT_WIDENING_MAC_OP_BUILTINS, wnmacc)
  _RVV_WFLOAT_ITERATOR_ARG (VFLOAT_WIDENING_MAC_OP_BUILTINS, wmsac)
  _RVV_WFLOAT_ITERATOR_ARG (VFLOAT_WIDENING_MAC_OP_BUILTINS, wnmsac)

  _RVV_WINT_ITERATOR_ARG (VINT_WREDUC_OP_BUILTINS, sum, sumu)
  _RVV_WFLOAT_ITERATOR_ARG (VFLOAT_WREDUC_OP_BUILTINS, sum)
  _RVV_WFLOAT_ITERATOR_ARG (VFLOAT_WREDUC_OP_BUILTINS, osum)

  _RVV_WFLOAT_ITERATOR_ARG (VFLOAT_WIDENING_ADD_SUB_BUILTINS, fwadd)
  _RVV_WFLOAT_ITERATOR_ARG (VFLOAT_WIDENING_ADD_SUB_BUILTINS, fwsub)
  _RVV_WFLOAT_ITERATOR_ARG (VFLOAT_WMUL_BUILTINS, fwmul)

  _RVV_FLOAT_ITERATOR_ARG (VFLOAT_VFCLASS_BUILTINS, vfclass)

  _RVV_INT_FLOAT_ITERATOR (VREINTERPRET)
  _RVV_INT_ITERATOR (VREINTERPRET_INT)
};

/* Index I is the function declaration for riscv_builtins[I], or null if the
   function isn't defined on this target.  */
static GTY(()) tree riscv_builtin_decls[ARRAY_SIZE (riscv_builtins)];

/* Get the index I of the function declaration for riscv_builtin_decls[I]
   using the instruction code or return null if not defined for the target.  */
static GTY(()) int riscv_builtin_decl_index[NUM_INSN_CODES];

#define GET_BUILTIN_DECL(CODE) \
  riscv_builtin_decls[riscv_builtin_decl_index[(CODE)]]

/* Type node for fp16.  */
tree fp16_type_node;

/* Return the function type associated with function prototype TYPE.  */

static tree
riscv_build_function_type (enum riscv_function_type type)
{
  static tree types[(int) RISCV_MAX_FTYPE_MAX];

  if (types[(int) type] == NULL_TREE)
    switch (type)
      {
#define DEF_RISCV_FTYPE(NUM, ARGS)					\
  case RISCV_FTYPE_NAME##NUM ARGS:					\
    types[(int) type]							\
      = build_function_type_list (RISCV_FTYPE_ATYPES##NUM ARGS,		\
				  NULL_TREE);				\
    break;
#include "config/riscv/riscv-ftypes.def"
#undef DEF_RISCV_FTYPE
      default:
	gcc_unreachable ();
      }

  return types[(int) type];
}

/* Create a builtin vector type with a name.  Taking care not to give
   the canonical type a name.  */

static tree
riscv_vector_type (const char *name, tree elt_type, enum machine_mode mode)
{
  tree result = build_vector_type_for_mode (elt_type, mode);

  /* Copy so we don't give the canonical type a name.  */
  result = build_variant_type_copy (result);

  (*lang_hooks.types.register_builtin_type) (result, name);

  return result;
}

/* Implement TARGET_INIT_BUILTINS.  */

void
riscv_init_builtins (void)
{
  int8_type_node = intQI_type_node;
  unsigned_int8_type_node = unsigned_intQI_type_node;
  int16_type_node = intHI_type_node;
  unsigned_int16_type_node = unsigned_intHI_type_node;

  if (TARGET_64BIT)
    {
      int32_type_node = intSI_type_node;
      unsigned_int32_type_node = unsigned_intSI_type_node;
    }
  else
    {
      /* int32_t/uint32_t defined as `long`/`unsigned long` in RV32,
	  but intSI_type_node/unsigned_intSI_type_node is
	  `int` and `unsigned int`, so use long_integer_type_node and
	  long_unsigned_type_node here for type consistent.  */
      int32_type_node = long_integer_type_node;
      unsigned_int32_type_node = long_unsigned_type_node;
    }

  int64_type_node = intDI_type_node;
  unsigned_int64_type_node = unsigned_intDI_type_node;

  /* _Float16 is C specific.  So we need a language independent type for
     half floats.  Use __fp16 same as the arm/aarch64 ports.  */
  fp16_type_node = make_node (REAL_TYPE);
  TYPE_PRECISION (fp16_type_node) = 16;
  layout_type (fp16_type_node);
  (*lang_hooks.types.register_builtin_type) (fp16_type_node, "__fp16");

  if (TARGET_VECTOR)
    {
      /* These types exist only for the ld/st intrinsics.  */
      const_float_ptr_type_node
	= build_pointer_type (build_type_variant (float_type_node, 1, 0));
      const_double_ptr_type_node
	= build_pointer_type (build_type_variant (double_type_node, 1, 0));
      float16_ptr_type_node = build_pointer_type (fp16_type_node);
      const_float16_type_node = build_type_variant (fp16_type_node, 1, 0);
      const_float16_ptr_type_node
	= build_pointer_type (const_float16_type_node);

      #define DEFINE_SCALAR_PTR_TYPE_NODE(WIDTH, MODE)			\
        int##MODE##_ptr_type_node					\
	  = build_pointer_type (int##WIDTH##_type_node); 		\
        unsigned_int##MODE##_ptr_type_node				\
	  = build_pointer_type (unsigned_int##WIDTH##_type_node);	\
        const_int##MODE##_ptr_type_node					\
	  = build_pointer_type (					\
	      build_type_variant (int##WIDTH##_type_node, 1, 0));	\
	const_unsigned_int##MODE##_ptr_type_node			\
	  = build_pointer_type (					\
	      build_type_variant (unsigned_int##WIDTH##_type_node, 1, 0));

      _SCALAR_INT_ITERATOR(DEFINE_SCALAR_PTR_TYPE_NODE);

      rvvint8m1_t_node
	= riscv_vector_type ("vint8m1_t", intQI_type_node, VNx16QImode);
      rvvint8m2_t_node
	= riscv_vector_type ("vint8m2_t", intQI_type_node, VNx32QImode);
      rvvint8m4_t_node
	= riscv_vector_type ("vint8m4_t", intQI_type_node, VNx64QImode);
      rvvint8m8_t_node
	= riscv_vector_type ("vint8m8_t", intQI_type_node, VNx128QImode);

      rvvint16m1_t_node
	= riscv_vector_type ("vint16m1_t", intHI_type_node, VNx8HImode);
      rvvint16m2_t_node
	= riscv_vector_type ("vint16m2_t", intHI_type_node, VNx16HImode);
      rvvint16m4_t_node
	= riscv_vector_type ("vint16m4_t", intHI_type_node, VNx32HImode);
      rvvint16m8_t_node
	= riscv_vector_type ("vint16m8_t", intHI_type_node, VNx64HImode);

      rvvint32m1_t_node
	= riscv_vector_type ("vint32m1_t", intSI_type_node, VNx4SImode);
      rvvint32m2_t_node
	= riscv_vector_type ("vint32m2_t", intSI_type_node, VNx8SImode);
      rvvint32m4_t_node
	= riscv_vector_type ("vint32m4_t", intSI_type_node, VNx16SImode);
      rvvint32m8_t_node
	= riscv_vector_type ("vint32m8_t", intSI_type_node, VNx32SImode);

      rvvint64m1_t_node
	= riscv_vector_type ("vint64m1_t", intDI_type_node, VNx2DImode);
      rvvint64m2_t_node
	= riscv_vector_type ("vint64m2_t", intDI_type_node, VNx4DImode);
      rvvint64m4_t_node
	= riscv_vector_type ("vint64m4_t", intDI_type_node, VNx8DImode);
      rvvint64m8_t_node
	= riscv_vector_type ("vint64m8_t", intDI_type_node, VNx16DImode);

      rvvuint8m1_t_node
	= riscv_vector_type ("vuint8m1_t", unsigned_intQI_type_node,
			     VNx16QImode);
      rvvuint8m2_t_node
	= riscv_vector_type ("vuint8m2_t", unsigned_intQI_type_node,
			     VNx32QImode);
      rvvuint8m4_t_node
	= riscv_vector_type ("vuint8m4_t", unsigned_intQI_type_node,
			     VNx64QImode);
      rvvuint8m8_t_node
	= riscv_vector_type ("vuint8m8_t", unsigned_intQI_type_node,
			     VNx128QImode);

      rvvuint16m1_t_node
	= riscv_vector_type ("vuint16m1_t", unsigned_intHI_type_node,
			     VNx8HImode);
      rvvuint16m2_t_node
	= riscv_vector_type ("vuint16m2_t", unsigned_intHI_type_node,
			     VNx16HImode);
      rvvuint16m4_t_node
	= riscv_vector_type ("vuint16m4_t", unsigned_intHI_type_node,
			     VNx32HImode);
      rvvuint16m8_t_node
	= riscv_vector_type ("vuint16m8_t", unsigned_intHI_type_node,
			     VNx64HImode);

      rvvuint32m1_t_node
	= riscv_vector_type ("vuint32m1_t", unsigned_intSI_type_node,
			     VNx4SImode);
      rvvuint32m2_t_node
	= riscv_vector_type ("vuint32m2_t", unsigned_intSI_type_node,
			     VNx8SImode);
      rvvuint32m4_t_node
	= riscv_vector_type ("vuint32m4_t", unsigned_intSI_type_node,
			     VNx16SImode);
      rvvuint32m8_t_node
	= riscv_vector_type ("vuint32m8_t", unsigned_intSI_type_node,
			     VNx32SImode);

      rvvuint64m1_t_node
	= riscv_vector_type ("vuint64m1_t", unsigned_intDI_type_node,
			     VNx2DImode);
      rvvuint64m2_t_node
	= riscv_vector_type ("vuint64m2_t", unsigned_intDI_type_node,
			     VNx4DImode);
      rvvuint64m4_t_node
	= riscv_vector_type ("vuint64m4_t", unsigned_intDI_type_node,
			     VNx8DImode);
      rvvuint64m8_t_node
	= riscv_vector_type ("vuint64m8_t", unsigned_intDI_type_node,
			     VNx16DImode);

      rvvfloat16m1_t_node
	= riscv_vector_type ("vfloat16m1_t", fp16_type_node, VNx8HFmode);
      rvvfloat16m2_t_node
	= riscv_vector_type ("vfloat16m2_t", fp16_type_node, VNx16HFmode);
      rvvfloat16m4_t_node
	= riscv_vector_type ("vfloat16m4_t", fp16_type_node, VNx32HFmode);
      rvvfloat16m8_t_node
	= riscv_vector_type ("vfloat16m8_t", fp16_type_node, VNx64HFmode);

      rvvfloat32m1_t_node
	= riscv_vector_type ("vfloat32m1_t", float_type_node, VNx4SFmode);
      rvvfloat32m2_t_node
	= riscv_vector_type ("vfloat32m2_t", float_type_node, VNx8SFmode);
      rvvfloat32m4_t_node
	= riscv_vector_type ("vfloat32m4_t", float_type_node, VNx16SFmode);
      rvvfloat32m8_t_node
	= riscv_vector_type ("vfloat32m8_t", float_type_node, VNx32SFmode);

      rvvfloat64m1_t_node
	= riscv_vector_type ("vfloat64m1_t", double_type_node, VNx2DFmode);
      rvvfloat64m2_t_node
	= riscv_vector_type ("vfloat64m2_t", double_type_node, VNx4DFmode);
      rvvfloat64m4_t_node
	= riscv_vector_type ("vfloat64m4_t", double_type_node, VNx8DFmode);
      rvvfloat64m8_t_node
	= riscv_vector_type ("vfloat64m8_t", double_type_node, VNx16DFmode);

      rvvbool1_t_node
	= riscv_vector_type ("vbool1_t", boolean_type_node, VNx128BImode);
      rvvbool2_t_node
	= riscv_vector_type ("vbool2_t", boolean_type_node, VNx64BImode);
      rvvbool4_t_node
	= riscv_vector_type ("vbool4_t", boolean_type_node, VNx32BImode);
      rvvbool8_t_node
	= riscv_vector_type ("vbool8_t", boolean_type_node, VNx16BImode);
      rvvbool16_t_node
	= riscv_vector_type ("vbool16_t", boolean_type_node, VNx8BImode);
      rvvbool32_t_node
	= riscv_vector_type ("vbool32_t", boolean_type_node, VNx4BImode);
      rvvbool64_t_node
	= riscv_vector_type ("vbool64_t", boolean_type_node, VNx2BImode);

    }

  for (size_t i = 0; i < ARRAY_SIZE (riscv_builtins); i++)
    {
      const struct riscv_builtin_description *d = &riscv_builtins[i];
      if (d->avail ())
	{
	  tree type = riscv_build_function_type (d->prototype);
	  riscv_builtin_decls[i]
	    = add_builtin_function (d->name, type, i, BUILT_IN_MD, NULL, NULL);
	  riscv_builtin_decl_index[d->icode] = i;
	}
    }
}

/* Implement TARGET_BUILTIN_DECL.  */

tree
riscv_builtin_decl (unsigned int code, bool initialize_p ATTRIBUTE_UNUSED)
{
  if (code >= ARRAY_SIZE (riscv_builtins))
    return error_mark_node;
  return riscv_builtin_decls[code];
}

/* Take argument ARGNO from EXP's argument list and convert it into
   an expand operand.  Store the operand in *OP.  */

static void
riscv_prepare_builtin_arg (struct expand_operand *op, tree exp, unsigned argno)
{
  tree arg = CALL_EXPR_ARG (exp, argno);
  create_input_operand (op, expand_normal (arg), TYPE_MODE (TREE_TYPE (arg)));
}

/* Expand instruction ICODE as part of a built-in function sequence.
   Use the first NOPS elements of OPS as the instruction's operands.
   HAS_TARGET_P is true if operand 0 is a target; it is false if the
   instruction has no target.

   Return the target rtx if HAS_TARGET_P, otherwise return const0_rtx.  */

static rtx
riscv_expand_builtin_insn (enum insn_code icode, unsigned int n_ops,
			   struct expand_operand *ops, bool has_target_p)
{
  switch (icode)
    {
#define EXPAND_SETVTYPE_BUILTINS(E, L, MLEN, MODE, SUBMODE)	\
      case CODE_FOR_vsetvli_x0_##MODE:				\
	emit_insn (gen_vsetvli_x0_##MODE () );			\
	break;

_RVV_INT_ITERATOR (EXPAND_SETVTYPE_BUILTINS)

#undef EXPAND_SETVTYPE_BUILTINS

    default:
      if (!maybe_expand_insn (icode, n_ops, ops))
	{
	  error ("invalid argument to built-in function");
	  return has_target_p ? gen_reg_rtx (ops[0].mode) : const0_rtx;
	}
      break;
    }
  return has_target_p ? ops[0].value : const0_rtx;
}

/* Expand a RISCV_BUILTIN_DIRECT or RISCV_BUILTIN_DIRECT_NO_TARGET function;
   HAS_TARGET_P says which.  EXP is the CALL_EXPR that calls the function
   and ICODE is the code of the associated .md pattern.  TARGET, if nonnull,
   suggests a good place to put the result.  */

static rtx
riscv_expand_builtin_direct (enum insn_code icode, rtx target, tree exp,
			     bool has_target_p)
{
  struct expand_operand ops[MAX_RECOG_OPERANDS];

  /* Map any target to operand 0.  */
  int opno = 0;
  if (has_target_p)
    create_output_operand (&ops[opno++], target, TYPE_MODE (TREE_TYPE (exp)));

  /* Map the arguments to the other operands.  */
  gcc_assert (opno + call_expr_nargs (exp)
	      == insn_data[icode].n_generator_args);
  for (int argno = 0; argno < call_expr_nargs (exp); argno++)
    riscv_prepare_builtin_arg (&ops[opno++], exp, argno);

  return riscv_expand_builtin_insn (icode, opno, ops, has_target_p);
}

/* Return a legitimate rtx for instruction ICODE's return value.  Use TARGET
   if it's not null, has the right mode, and satisfies operand 0's
   predicate.  */
static rtx
riscv_legitimize_target (enum insn_code icode, rtx target)
{
  enum machine_mode mode = insn_data[icode].operand[0].mode;

  if (! target
      || GET_MODE (target) != mode
      || ! (*insn_data[icode].operand[0].predicate) (target, mode))
    return gen_reg_rtx (mode);
  else
    return target;
}

/* Given that ARG is being passed as operand OPNUM to instruction ICODE,
   check whether ARG satisfies the operand's constraints.  If it doesn't,
   copy ARG to a temporary register and return that.  Otherwise return ARG
   itself.  */
static rtx
riscv_legitimize_argument (enum insn_code icode, int opnum, rtx arg)
{
  enum machine_mode mode = insn_data[icode].operand[opnum].mode;

  if ((*insn_data[icode].operand[opnum].predicate) (arg, mode))
    return arg;
  else
    {
      rtx tmp_rtx = gen_reg_rtx (mode);
      convert_move (tmp_rtx, arg, false);
      return tmp_rtx;
    }
}

static rtx
riscv_expand_builtin_shift_scalar (enum insn_code icode, rtx target, tree exp)
{
  rtx pat;
  rtx op0 = expand_normal (CALL_EXPR_ARG (exp, 0));
  rtx op1 = expand_normal (CALL_EXPR_ARG (exp, 1));

  /* Map any target to operand 0.  */
  target = riscv_legitimize_target (icode, target);

  op0 = riscv_legitimize_argument (icode, 1, op0);
  op1 = riscv_legitimize_argument (icode, 2, op1);

  /* Emit and return the new instruction. */
  pat = GEN_FCN (icode) (target, op0, op1);

  if (! pat)
    return NULL_RTX;

  emit_insn (pat);
  return target;
}

static rtx
riscv_expand_builtin_shift_mask_scalar (enum insn_code icode,
					rtx target, tree exp)
{
  rtx pat;
  rtx op0 = expand_normal (CALL_EXPR_ARG (exp, 0));
  rtx op1 = expand_normal (CALL_EXPR_ARG (exp, 1));
  rtx op2 = expand_normal (CALL_EXPR_ARG (exp, 2));
  rtx op3 = expand_normal (CALL_EXPR_ARG (exp, 3));

  /* Map any target to operand 0.  */
  target = riscv_legitimize_target (icode, target);

  op0 = riscv_legitimize_argument (icode, 1, op0);
  op1 = riscv_legitimize_argument (icode, 2, op1);
  op2 = riscv_legitimize_argument (icode, 3, op2);
  op3 = riscv_legitimize_argument (icode, 4, op3);

  /* Emit and return the new instruction. */
  pat = GEN_FCN (icode) (target, op0, op1, op2, op3);

  if (! pat)
    return NULL_RTX;

  emit_insn (pat);
  return target;
}

/* Implement TARGET_EXPAND_BUILTIN.  */

rtx
riscv_expand_builtin (tree exp, rtx target, rtx subtarget ATTRIBUTE_UNUSED,
		      machine_mode mode ATTRIBUTE_UNUSED,
		      int ignore ATTRIBUTE_UNUSED)
{
  tree fndecl = TREE_OPERAND (CALL_EXPR_FN (exp), 0);
  unsigned int fcode = DECL_MD_FUNCTION_CODE (fndecl);
  const struct riscv_builtin_description *d = &riscv_builtins[fcode];

  switch (d->builtin_type)
    {
    case RISCV_BUILTIN_SHIFT_SCALAR:
      return riscv_expand_builtin_shift_scalar (d->icode, target, exp);
    case RISCV_BUILTIN_SHIFT_MASK_SCALAR:
      return riscv_expand_builtin_shift_mask_scalar (d->icode, target, exp);
    case RISCV_BUILTIN_DIRECT:
      return riscv_expand_builtin_direct (d->icode, target, exp, true);

    case RISCV_BUILTIN_DIRECT_NO_TARGET:
      return riscv_expand_builtin_direct (d->icode, target, exp, false);
    }

  gcc_unreachable ();
}

/* Implement TARGET_ATOMIC_ASSIGN_EXPAND_FENV.  */

void
riscv_atomic_assign_expand_fenv (tree *hold, tree *clear, tree *update)
{
  if (!TARGET_HARD_FLOAT)
    return;

  tree frflags = GET_BUILTIN_DECL (CODE_FOR_riscv_frflags);
  tree fsflags = GET_BUILTIN_DECL (CODE_FOR_riscv_fsflags);
  tree old_flags = create_tmp_var_raw (RISCV_ATYPE_USI);

  *hold = build4 (TARGET_EXPR, RISCV_ATYPE_USI, old_flags,
		  build_call_expr (frflags, 0), NULL_TREE, NULL_TREE);
  *clear = build_call_expr (fsflags, 1, old_flags);
  *update = NULL_TREE;
}
