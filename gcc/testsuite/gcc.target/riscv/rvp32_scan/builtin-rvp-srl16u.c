/* This is a test program for srl16.u instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
uint32_t u_61lrs (uint32_t ra, uint32_t rb)
{
  return __rv_srl16_u (ra, rb);
}

static __attribute__ ((noinline))
uint16x2_t u_61lrs_v (uint16x2_t ra, uint32_t rb)
{
  return __rv_v_srl16_u (ra, rb);
}
/* { dg-final { scan-assembler-times "srl16.u" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
