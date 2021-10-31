/* cras32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for cras32 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t sarc (uint64_t ra, uint64_t rb)
{
  return __rv_cras32 (ra, rb);
}

static __attribute__ ((noinline))
uint32x2_t sarcu_v (uint32x2_t ra, uint32x2_t rb)
{
  return __rv_v_ucras32 (ra, rb);
}

static __attribute__ ((noinline))
int32x2_t sarcs_v (int32x2_t ra, int32x2_t rb)
{
  return __rv_v_scras32 (ra, rb);
}
/* { dg-final { scan-assembler-times "cras32" 4 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
