/* cmpeq8 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for cmpeq8 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t qepmc (uint64_t ra, uint64_t rb)
{
  return __rv_cmpeq8 (ra, rb);
}

static __attribute__ ((noinline))
uint8x8_t qepmcs_v (int8x8_t ra, int8x8_t rb)
{
  return __rv_v_scmpeq8 (ra, rb);
}

static __attribute__ ((noinline))
uint8x8_t qepmcu_v (uint8x8_t ra, uint8x8_t rb)
{
  return __rv_v_ucmpeq8 (ra, rb);
}
/* { dg-final { scan-assembler-times "cmpeq8" 4 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
