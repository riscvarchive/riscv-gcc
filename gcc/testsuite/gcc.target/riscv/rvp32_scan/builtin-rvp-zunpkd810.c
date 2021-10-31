/* zunpkd810 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for zunpkd810 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
uint32_t dkpnuz (uint32_t a)
{
  return __rv_zunpkd810 (a);
}

static __attribute__ ((noinline))
uint16x2_t dkpnuz_v (uint8x4_t a)
{
  return __rv_v_zunpkd810 (a);
}
/* { dg-final { scan-assembler-times "zunpkd810" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
