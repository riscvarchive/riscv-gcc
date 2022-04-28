/* sclip16 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for sclip16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t pilcs (int64_t ra)
{
  return __rv_sclip16 (ra, 2);
}

static __attribute__ ((noinline))
int16x4_t pilcs_v (int16x4_t ra)
{
  return __rv_v_sclip16 (ra, 4);
}
/* { dg-final { scan-assembler-times "sclip16" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
