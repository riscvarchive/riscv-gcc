/* kslra32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for kslra32 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t arlsk (uint64_t ra, uint32_t rb)
{
  return __rv_kslra32 (ra, rb);
}

static __attribute__ ((noinline))
int32x2_t arlsk_v (int32x2_t ra, uint32_t rb)
{
  return __rv_v_kslra32 (ra, rb);
}
/* { dg-final { scan-assembler-times "kslra32" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
