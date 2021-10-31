/* This is a test program for sra8.u instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
uint32_t u8ars (uint32_t ra, uint32_t rb)
{
  return __rv_sra8_u (ra, rb);
}

static __attribute__ ((noinline))
int8x4_t u8ars_v (int8x4_t ra, uint32_t rb)
{
  return __rv_v_sra8_u (ra, rb);
}
/* { dg-final { scan-assembler-times "sra8.u" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
