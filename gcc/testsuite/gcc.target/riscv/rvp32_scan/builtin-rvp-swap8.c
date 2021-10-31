/* swap8 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for wsbh instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
uint32_t paws (uint32_t a)
{
  return __rv_swap8 (a);
}
/* { dg-final { scan-assembler-times "swap8" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
