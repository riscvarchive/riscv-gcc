/* ukcrsa32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for ukcrsa32 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t asrcku (uint64_t ra, uint64_t rb)
{
  return __rv_ukcrsa32 (ra, rb);
}

static __attribute__ ((noinline))
uint32x2_t asrcku_v (uint32x2_t ra, uint32x2_t rb)
{
  return __rv_v_ukcrsa32 (ra, rb);
}
/* { dg-final { scan-assembler-times "ukcrsa32" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
