/* bitrev also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for bitrev instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t vertib (uint64_t ra, uint32_t rb)
{
  return __rv_bitrev (ra, rb);
}

static __attribute__ ((noinline))
uint64_t ivertib (uint64_t ra)
{
  return __rv_bitrev (ra, 3);
}

/* { dg-final { scan-assembler-times "bitrev" 3 } } */
/* { dg-final { scan-assembler-times "bitrevi" 1 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
