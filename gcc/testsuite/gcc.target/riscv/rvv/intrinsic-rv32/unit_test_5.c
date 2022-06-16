/* { dg-do compile } */
/* { dg-additional-options "-fno-schedule-insns -fno-schedule-insns2 -std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include "riscv_vector.h"

int32_t a = 0xAAAA;
int64_t global_var = 0xAAAAAAAAAAAAAAAA;
vint64m8_t foo1 (vint64m8_t v, size_t vl)
{
  v = vadd_vx_i64m8 (v,global_var,vl);
  return v;
}

vint32m1_t foo2 ()
{
  return vmv_v_x_i32m1 (a,128);
}

float fa = 0xAAAA;
vfloat32m1_t foo3 ()
{
  return vfmv_v_f_f32m1 (fa,128);
}

/* { dg-final { scan-assembler-times {vlse} 3 } } */
/* { dg-final { scan-assembler-not {vmv.v.x} } } */
/* { dg-final { scan-assembler-not {vfmv.v.f} } } */
/* { dg-final { scan-assembler-not {sw} } } */