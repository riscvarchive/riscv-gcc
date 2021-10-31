/* sll32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for sll32 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t lls (uint64_t ra, uint32_t rb)
{
  return __rv_sll32 (ra, rb);
}

static __attribute__ ((noinline))
uint32x2_t lls_v (uint32x2_t ra, uint32_t rb)
{
  return __rv_v_sll32 (ra, rb);
}
/* { dg-final { scan-assembler-times "sll32" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
