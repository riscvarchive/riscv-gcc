/* This is a test program for maddr32, msubr32 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
int32_t madd (int32_t ra, int32_t rb, int32_t rc)
{
  return __rv_maddr32 (ra, rb, rc);
}

static __attribute__ ((noinline))
int32_t msub (int32_t ra, int32_t rb, int32_t rc)
{
  return __rv_msubr32 (ra, rb, rc);
}

/* { dg-final { scan-assembler-times "msubr32" 1 } } */
/* { dg-final { scan-assembler-times "maddr32" 1 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
