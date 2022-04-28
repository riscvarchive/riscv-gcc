/* add32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add32 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t dda (uint64_t ra, uint64_t rb)
{
  return __rv_add32 (ra, rb);
}

static __attribute__ ((noinline))
uint32x2_t ddau_v (uint32x2_t ra, uint32x2_t rb)
{
  return __rv_v_uadd32 (ra, rb);
}

static __attribute__ ((noinline))
int32x2_t ddas_v (int32x2_t ra, int32x2_t rb)
{
  return __rv_v_sadd32 (ra, rb);
}
/* { dg-final { scan-assembler-times "add32" 4 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
