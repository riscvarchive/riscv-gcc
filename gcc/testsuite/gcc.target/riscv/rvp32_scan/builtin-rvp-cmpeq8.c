/* cmpeq8 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for cmpeq8 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
uint32_t qepmc (uint32_t ra, uint32_t rb)
{
  return __rv_cmpeq8 (ra, rb);
}

static __attribute__ ((noinline))
uint8x4_t qepmcs_v (int8x4_t ra, int8x4_t rb)
{
  return __rv_v_scmpeq8 (ra, rb);
}

static __attribute__ ((noinline))
uint8x4_t qepmcu_v (uint8x4_t ra, uint8x4_t rb)
{
  return __rv_v_ucmpeq8 (ra, rb);
}
/* { dg-final { scan-assembler-times "cmpeq8" 4 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
