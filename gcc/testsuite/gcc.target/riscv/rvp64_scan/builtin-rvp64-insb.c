/* insb also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for insb instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t bsni (uint64_t ra, uint32_t rb)
{
  return __rv_insb (ra, rb, 1);
}
/* { dg-final { scan-assembler-times "insb" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
