/* zunpkd832 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for zunpkd832 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t dkpnuz (uint64_t a)
{
  return __rv_zunpkd832 (a);
}

static __attribute__ ((noinline))
uint16x4_t dkpnuz_v (uint8x8_t a)
{
  return __rv_v_zunpkd832 (a);
}
/* { dg-final { scan-assembler-times "zunpkd832" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
