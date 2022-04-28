/* smslda also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for smslda instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn_zpsf -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
int64_t adlsms (int64_t rt, uint32_t ra, uint32_t rb)
{
  return __rv_smslda (rt, ra, rb);
}

static __attribute__ ((noinline))
int64_t adlsms_v (int64_t rt, int16x2_t ra, int16x2_t rb)
{
  return __rv_v_smslda (rt, ra, rb);
}
/* { dg-final { scan-assembler-times "smslda" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
