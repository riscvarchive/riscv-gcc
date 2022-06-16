/* { dg-do compile } */
/* { dg-additional-options "-fno-schedule-insns -fno-schedule-insns2 -std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include "riscv_vector.h"

vint64m8_t foo1 (vbool8_t mask, vint64m8_t v, int64_t s)
{
  v = vadd_vx_i64m8 (v,s,31);
  v = vadd_vx_i64m8_tu (v,v,s,31);
  v = vadd_vx_i64m8_ta (v,s,31);
  v = vadd_vx_i64m8_tama (mask,v,s,31);
  v = vadd_vx_i64m8_tamu (mask,v,v,s,31);
  v = vadd_vx_i64m8_tuma (mask,v,v,s,31);
  v = vadd_vx_i64m8_tumu (mask,v,v,s,31);
  return v;
}

vuint64m8_t foo2 (vbool8_t mask, vuint64m8_t v, uint64_t s)
{
  v = vadd_vx_u64m8 (v,s,31);
  v = vadd_vx_u64m8_tu (v,v,s,31);
  v = vadd_vx_u64m8_ta (v,s,31);
  v = vadd_vx_u64m8_tama (mask,v,s,31);
  v = vadd_vx_u64m8_tamu (mask,v,v,s,31);
  v = vadd_vx_u64m8_tuma (mask,v,v,s,31);
  v = vadd_vx_u64m8_tumu (mask,v,v,s,31);
  return v;
}

vint64m8_t foo3 (vbool8_t mask, vint64m8_t v)
{
  v = vadd_vx_i64m8 (v,66666666666,31);
  v = vadd_vx_i64m8_tu (v,v,66666666666,31);
  v = vadd_vx_i64m8_ta (v,66666666666,31);
  v = vadd_vx_i64m8_tama (mask,v,66666666666,31);
  v = vadd_vx_i64m8_tamu (mask,v,v,66666666666,31);
  v = vadd_vx_i64m8_tuma (mask,v,v,66666666666,31);
  v = vadd_vx_i64m8_tumu (mask,v,v,66666666666,31);
  return v;
}

vuint64m8_t foo4 (vbool8_t mask, vuint64m8_t v)
{
  v = vadd_vx_u64m8 (v,66666666666,31);
  v = vadd_vx_u64m8_tu (v,v,66666666666,31);
  v = vadd_vx_u64m8_ta (v,66666666666,31);
  v = vadd_vx_u64m8_tama (mask,v,66666666666,31);
  v = vadd_vx_u64m8_tamu (mask,v,v,66666666666,31);
  v = vadd_vx_u64m8_tuma (mask,v,v,66666666666,31);
  v = vadd_vx_u64m8_tumu (mask,v,v,66666666666,31);
  return v;
}

vint64m8_t foo5 (vbool8_t mask, vint64m8_t v, int64_t s, size_t m)
{
  int64_t tmp = s >> 3;
  for (int i = 0; i < m; i++) {
    v = vadd_vx_i64m8 (v,tmp,31);
    v = vadd_vx_i64m8_tu (v,v,tmp,31);
    v = vadd_vx_i64m8_ta (v,tmp,31);
    v = vadd_vx_i64m8_tama (mask,v,tmp,31);
    v = vadd_vx_i64m8_tamu (mask,v,v,tmp,31);
    v = vadd_vx_i64m8_tuma (mask,v,v,tmp,31);
    v = vadd_vx_i64m8_tumu (mask,v,v,tmp,31);
  }
  return v;
}

vuint64m8_t foo6 (vbool8_t mask, vuint64m8_t v, int64_t s, size_t m)
{
  uint64_t tmp = s >> 3;
  for (int i = 0; i < m; i++) {
    v = vadd_vx_u64m8 (v,tmp,31);
    v = vadd_vx_u64m8_tu (v,v,tmp,31);
    v = vadd_vx_u64m8_ta (v,tmp,31);
    v = vadd_vx_u64m8_tama (mask,v,tmp,31);
    v = vadd_vx_u64m8_tamu (mask,v,v,tmp,31);
    v = vadd_vx_u64m8_tuma (mask,v,v,tmp,31);
    v = vadd_vx_u64m8_tumu (mask,v,v,tmp,31);
  }
  return v;
}

vint64m1_t foo7 (vbool64_t mask, vint64m1_t v, int64_t s, size_t m)
{
  int64_t tmp1 = s >> 1;
  int64_t tmp2 = s >> 2;
  int64_t tmp3 = s >> 3;
  int64_t tmp4 = s >> 4;
  int64_t tmp5 = s >> 5;
  int64_t tmp6 = s >> 6;
  int64_t tmp7 = s >> 7;
  
  for (int i = 0; i < m; i++) {
    v = vadd_vx_i64m1 (v,tmp1,31);
    v = vadd_vx_i64m1_tu (v,v,tmp2,31);
    v = vadd_vx_i64m1_ta (v,tmp3,31);
    v = vadd_vx_i64m1_tama (mask,v,tmp4,31);
    v = vadd_vx_i64m1_tamu (mask,v,v,tmp5,31);
    v = vadd_vx_i64m1_tuma (mask,v,v,tmp6,31);
    v = vadd_vx_i64m1_tumu (mask,v,v,tmp7,31);
  }
  return v;
}

vuint64m1_t foo8 (vbool64_t mask, vuint64m1_t v, int64_t s, size_t m)
{
  uint64_t tmp1 = s >> 1;
  uint64_t tmp2 = s >> 2;
  uint64_t tmp3 = s >> 3;
  uint64_t tmp4 = s >> 4;
  uint64_t tmp5 = s >> 5;
  uint64_t tmp6 = s >> 6;
  uint64_t tmp7 = s >> 7;
  for (int i = 0; i < m; i++) {
    v = vadd_vx_u64m1 (v,tmp1,31);
    v = vadd_vx_u64m1_tu (v,v,tmp2,31);
    v = vadd_vx_u64m1_ta (v,tmp3,31);
    v = vadd_vx_u64m1_tama (mask,v,tmp4,31);
    v = vadd_vx_u64m1_tamu (mask,v,v,tmp5,31);
    v = vadd_vx_u64m1_tuma (mask,v,v,tmp6,31);
    v = vadd_vx_u64m1_tumu (mask,v,v,tmp7,31);
  }
  return v;
}

vint64m1_t foo9 (vbool64_t mask, vint64m1_t v, int64_t s, size_t m)
{
  int64_t tmp1 = s >> 1;
  int64_t tmp2 = s >> 2;
  int64_t tmp3 = s >> 3;
  int64_t tmp4 = s >> 4;
  int64_t tmp5 = s >> 5;
  int64_t tmp6 = s >> 6;
  int64_t tmp7 = s >> 7;
  
  for (int i = 0; i < m; i++) {
    v = vadd_vx_i64m1 (v,tmp1,31);
    v = vadd_vx_i64m1_tu (v,v,tmp2,31);
    v = vadd_vx_i64m1_ta (v,tmp3,31);
    v = vadd_vx_i64m1_tama (mask,v,tmp4,31);
    v = vadd_vx_i64m1_tamu (mask,v,v,tmp5,31);
    v = vadd_vx_i64m1_tuma (mask,v,v,tmp6,31);
    v = vadd_vx_i64m1_tumu (mask,v,v,tmp7,31);
    tmp1 = tmp1 + 1;
    tmp2 = tmp2 + 2;
    tmp3 = tmp3 + 3;
    tmp4 = tmp4 + 4;
    tmp5 = tmp5 + 5;
    tmp6 = tmp6 + 6;
    tmp7 = tmp7 + 7;
  }
  return v;
}

vuint64m1_t foo10 (vbool64_t mask, vuint64m1_t v, int64_t s, size_t m)
{
  uint64_t tmp1 = s >> 1;
  uint64_t tmp2 = s >> 2;
  uint64_t tmp3 = s >> 3;
  uint64_t tmp4 = s >> 4;
  uint64_t tmp5 = s >> 5;
  uint64_t tmp6 = s >> 6;
  uint64_t tmp7 = s >> 7;
  for (int i = 0; i < m; i++) {
    v = vadd_vx_u64m1 (v,tmp1,31);
    v = vadd_vx_u64m1_tu (v,v,tmp2,31);
    v = vadd_vx_u64m1_ta (v,tmp3,31);
    v = vadd_vx_u64m1_tama (mask,v,tmp4,31);
    v = vadd_vx_u64m1_tamu (mask,v,v,tmp5,31);
    v = vadd_vx_u64m1_tuma (mask,v,v,tmp6,31);
    v = vadd_vx_u64m1_tumu (mask,v,v,tmp7,31);
    tmp1 = tmp1 + 1;
    tmp2 = tmp2 + 2;
    tmp3 = tmp3 + 3;
    tmp4 = tmp4 + 4;
    tmp5 = tmp5 + 5;
    tmp6 = tmp6 + 6;
    tmp7 = tmp7 + 7;
  }
  return v;
}

/* { dg-final { scan-assembler-times {vlse64.v} 34 } } */
/* { dg-final { scan-assembler-times {vadd.vv} 70 } } */
/* { dg-final { scan-assembler-not {vadd.vx} } } */