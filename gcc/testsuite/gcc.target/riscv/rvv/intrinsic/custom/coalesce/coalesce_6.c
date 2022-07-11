/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-skip-if "test intrinsic using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include <stddef.h>
#include <riscv_vector.h>

void __attribute__ ((noinline, noclone))
subreg_to_reg_1 (int32_t *in, int32_t *out, size_t m)
{
  vint32m8_t result = vle32_v_i32m8 (in, 32);
  vint32m1_t v0 = vget_v_i32m8_i32m1 (result, 0);
  vint32m1_t v1 = vget_v_i32m8_i32m1 (result, 1);
  vint32m1_t v2 = vget_v_i32m8_i32m1 (result, 2);
  vint32m1_t v3 = vget_v_i32m8_i32m1 (result, 3);
  vint32m1_t v4 = vget_v_i32m8_i32m1 (result, 4);
  vint32m1_t v5 = vget_v_i32m8_i32m1 (result, 5);
  vint32m1_t v6 = vget_v_i32m8_i32m1 (result, 6);
  vint32m1_t v7 = vget_v_i32m8_i32m1 (result, 7);
  for (size_t i = 0; i < m; i++)
    {
      v0 = vadd_vv_i32m1(v0, v0, 4);
      v1 = vadd_vv_i32m1(v1, v1, 4);
      v2 = vadd_vv_i32m1(v2, v2, 4);
      v3 = vadd_vv_i32m1(v3, v3, 4);
      v4 = vadd_vv_i32m1(v4, v4, 4);
      v5 = vadd_vv_i32m1(v5, v5, 4);
      v6 = vadd_vv_i32m1(v6, v6, 4);
      v7 = vadd_vv_i32m1(v7, v7, 4);
    }
  result = vle32_v_i32m8 (in, 64);
  result = vset_v_i32m1_i32m8 (result, 0, v0);
  result = vset_v_i32m1_i32m8 (result, 1, v1);
  result = vset_v_i32m1_i32m8 (result, 2, v2);
  result = vset_v_i32m1_i32m8 (result, 3, v3);
  result = vset_v_i32m1_i32m8 (result, 4, v4);
  result = vset_v_i32m1_i32m8 (result, 5, v5);
  result = vset_v_i32m1_i32m8 (result, 6, v6);
  result = vset_v_i32m1_i32m8 (result, 7, v7);
  vse32_v_i32m8 (out, result, 32);
}

void __attribute__ ((noinline, noclone))
subreg_to_reg_2 (int32_t *in, int32_t *out, size_t m)
{
  vint32m8_t result = vle32_v_i32m8 (in, 32);
  vint32m1_t v0 = vget_v_i32m8_i32m1 (result, 0);
  vint32m1_t v1 = vget_v_i32m8_i32m1 (result, 1);
  vint32m1_t v2 = vget_v_i32m8_i32m1 (result, 2);
  vint32m1_t v3 = vget_v_i32m8_i32m1 (result, 3);
  vint32m1_t v4 = vget_v_i32m8_i32m1 (result, 4);
  vint32m1_t v5 = vget_v_i32m8_i32m1 (result, 5);
  vint32m1_t v6 = vget_v_i32m8_i32m1 (result, 6);
  vint32m1_t v7 = vget_v_i32m8_i32m1 (result, 7);
  for (size_t i = 0; i < m; i++)
    {
      v0 = vadd_vv_i32m1(v0, v0, 4);
      v1 = vadd_vv_i32m1(v1, v1, 4);
      v2 = vadd_vv_i32m1(v2, v2, 4);
      v3 = vadd_vv_i32m1(v3, v3, 4);
      v4 = vadd_vv_i32m1(v4, v4, 4);
      v5 = vadd_vv_i32m1(v5, v5, 4);
      v6 = vadd_vv_i32m1(v6, v6, 4);
      v7 = vadd_vv_i32m1(v7, v7, 4);
    }
  result = vundefined_i32m8 ();
  result = vset_v_i32m1_i32m8 (result, 0, v0);
  result = vset_v_i32m1_i32m8 (result, 1, v1);
  result = vset_v_i32m1_i32m8 (result, 2, v2);
  result = vset_v_i32m1_i32m8 (result, 3, v3);
  result = vset_v_i32m1_i32m8 (result, 4, v4);
  result = vset_v_i32m1_i32m8 (result, 5, v5);
  result = vset_v_i32m1_i32m8 (result, 6, v6);
  vse32_v_i32m8 (out, result, 32);
}

void __attribute__ ((noinline, noclone))
subreg_to_reg_3 (int32_t *in, int32_t *out, size_t m)
{
  vint32m8_t result = vle32_v_i32m8 (in, 32);
  vint32m1_t v0 = vget_v_i32m8_i32m1 (result, 0);
  vint32m1_t v1 = vget_v_i32m8_i32m1 (result, 1);
  vint32m1_t v2 = vget_v_i32m8_i32m1 (result, 2);
  vint32m1_t v3 = vget_v_i32m8_i32m1 (result, 3);
  vint32m1_t v4 = vget_v_i32m8_i32m1 (result, 4);
  vint32m1_t v5 = vget_v_i32m8_i32m1 (result, 5);
  vint32m1_t v6 = vget_v_i32m8_i32m1 (result, 6);
  vint32m1_t v7 = vget_v_i32m8_i32m1 (result, 7);
  for (size_t i = 0; i < m; i++)
    {
      v0 = vadd_vv_i32m1(v0, v0, 4);
      v1 = vadd_vv_i32m1(v1, v1, 4);
      v2 = vadd_vv_i32m1(v2, v2, 4);
      v3 = vadd_vv_i32m1(v3, v3, 4);
      v4 = vadd_vv_i32m1(v4, v4, 4);
      v5 = vadd_vv_i32m1(v5, v5, 4);
      v6 = vadd_vv_i32m1(v6, v6, 4);
      v7 = vadd_vv_i32m1(v7, v7, 4);
    }
  vint32m8_t result2 = vundefined_i32m8 ();
  result2 = vset_v_i32m1_i32m8 (result2, 0, v0);
  result2 = vset_v_i32m1_i32m8 (result2, 1, v1);
  result2 = vset_v_i32m1_i32m8 (result2, 2, v2);
  result2 = vset_v_i32m1_i32m8 (result2, 3, v3);
  result2 = vset_v_i32m1_i32m8 (result2, 4, v4);
  result2 = vset_v_i32m1_i32m8 (result2, 5, v5);
  result2 = vset_v_i32m1_i32m8 (result2, 6, v6);
  result2 = vset_v_i32m1_i32m8 (result2, 7, v7);
  vint16m4_t dest2 = vnclip_wx_i16m4(result2, 3, 64);
  vse16_v_i16m4((int16_t *)(out), dest2, 64);
}

/* { dg-final { scan-assembler-not {vmv1r.v} } } */
/* { dg-final { scan-assembler-not {vmv2r.v} } } */
/* { dg-final { scan-assembler-not {vmv4r.v} } } */
/* { dg-final { scan-assembler-not {vmv8r.v} } } */