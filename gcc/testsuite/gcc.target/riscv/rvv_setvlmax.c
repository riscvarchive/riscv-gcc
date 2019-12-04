/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSETVLMAX(STYPE, VCLASS, EM, EMONE, MLEN)			\
  size_t vlmax##VCLASS##EM(size_t n, STYPE *x, STYPE *y) {		\
    return rvv_setvlmax_##EM  ();					\
  }

RVV_INT_REDUC_TEST(VSETVLMAX)

/* { dg-final { scan-assembler-times "vsetvli" 16 } } */
