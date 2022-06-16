/* { dg-do compile } */
/* { dg-additional-options "-fno-schedule-insns -fno-schedule-insns2 -std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include "riscv_vector.h"

vint64m8_t 
foo1 (int64_t op1, int m)
{
  vint64m8_t v = vmv_v_x_i64m8(op1, 31);
  for (int i = 0; i < m; i++) {
    v = vadd_vx_i64m8 (v,op1,31);
  }
  return v;
}

vint64m8_t 
foo2 (int64_t op1, int m)
{
  vint64m8_t v = vmv_v_x_i64m8(op1, 31);
  v = vadd_vx_i64m8 (v,op1,31);
  return v;
}

vint64m8_t 
foo3 (int64_t op1, int m, size_t vl)
{
  vint64m8_t v = vmv_v_x_i64m8(op1, vl);
  for (int i = 0; i < m; i++) {
    v = vadd_vx_i64m8 (v,op1,vl);
  }
  return v;
}

vint64m8_t 
foo4 (int64_t op1, int m, size_t vl)
{
  vint64m8_t v = vmv_v_x_i64m8(op1, vl);
  v = vadd_vx_i64m8 (v,op1,vl);
  return v;
}

vint64m8_t 
foo5 (int64_t op1, int m, size_t vl)
{
  vint64m8_t v = vmv_v_x_i64m8(op1, 128);
  for (int i = 0; i < m; i++) {
    v = vadd_vx_i64m8 (v,op1,128);
  }
  return v;
}

vint64m8_t 
foo6 (int64_t op1, int m, size_t vl)
{
  vint64m8_t v = vmv_v_x_i64m8(op1, 128);
  v = vadd_vx_i64m8 (v,op1,128);
  return v;
}

/* { dg-final { scan-assembler-times {vlse64.v} 6 } } */
/* { dg-final { scan-assembler-times {vadd.vv} 6 } } */
/* { dg-final { scan-assembler-not {vadd.vx} } } */

