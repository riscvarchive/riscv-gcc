/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_FLOAT_TEST_ARG(RVV_UNARY_BUILTIN_VEC_MASKED_TEST, sqrt)

/* { dg-final { scan-assembler-times "vfsqrt.v" 12 } } */
