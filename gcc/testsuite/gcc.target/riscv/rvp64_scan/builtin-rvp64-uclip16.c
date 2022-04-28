/* uclip16 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for uclip16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t pilcu (uint64_t ra)
{
  return __rv_uclip16 (ra, 2);
}

static __attribute__ ((noinline))
uint16x4_t pilcu_v (int16x4_t ra)
{
  return __rv_v_uclip16 (ra, 4);
}
/* { dg-final { scan-assembler-times "uclip16" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
