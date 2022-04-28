/* This is a test program for srli16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
uint32_t ilrs (uint32_t ra)
{
  return __rv_srl16 (ra, 4);
}

static __attribute__ ((noinline))
uint16x2_t ilrs_v (uint16x2_t ra)
{
  return __rv_v_srl16 (ra, 4);
}
/* { dg-final { scan-assembler-times "srli16" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
