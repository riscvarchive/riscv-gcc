/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSETVLMAX(STYPE, VCLASST, VCLASS, EM, EMONE, MLEN, SEW)			\
  size_t vlmax##VCLASS##EM(size_t n, STYPE *x, STYPE *y) {		\
    return vsetvlmax_e##EM  ();					\
  }

RVV_INT_REDUC_TEST(VSETVLMAX)

/* { dg-final { scan-assembler-times "vsetvli" 16 } } */
