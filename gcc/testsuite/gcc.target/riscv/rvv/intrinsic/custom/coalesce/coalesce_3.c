/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-skip-if "test intrinsic using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include <stddef.h>
#include <riscv_vector.h>

void __attribute__ ((noinline, noclone))
subreg_to_reg_1 (int32_t *in, int32_t *out, size_t m)
{
  vint32m8_t result = vle32_v_i32m8 (in, 32);
  vint32m1_t v0;
  v0 = vle32_v_i32m1 (in+32, 4);
  *(vint32m1_t*)(out+32) = v0;
  v0 = vget_v_i32m8_i32m1 (result, 0);
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
  *(vint32m1_t*)(out+4*0) = v0;
  *(vint32m1_t*)(out+4*1) = v1;
  *(vint32m1_t*)(out+4*2) = v2;
  *(vint32m1_t*)(out+4*3) = v3;
  *(vint32m1_t*)(out+4*4) = v4;
  *(vint32m1_t*)(out+4*5) = v5;
  *(vint32m1_t*)(out+4*6) = v6;
  *(vint32m1_t*)(out+4*7) = v7;
}

void __attribute__ ((noinline, noclone))
subreg_to_reg_2 (int32_t *in, int32_t *out, size_t m)
{
  vint32m8_t result = vle32_v_i32m8 (in, 32);
  vint32m1_t v0;
  v0 = vle32_v_i32m1 (in+32, 4);
  *(vint32m1_t*)(out+32) = v0;
  v0 = vget_v_i32m8_i32m1 (result, 0);
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
  vse32_v_i32m1(out+4*0,v0,4);
  vse32_v_i32m1(out+4*1,v1,4);
  vse32_v_i32m1(out+4*2,v2,4);
  vse32_v_i32m1(out+4*3,v3,4);
  vse32_v_i32m1(out+4*4,v4,4);
  vse32_v_i32m1(out+4*5,v5,4);
  vse32_v_i32m1(out+4*6,v6,4);
  vse32_v_i32m1(out+4*7,v7,4);
}

/* { dg-final { scan-assembler-not {vmv1r.v} } } */
/* { dg-final { scan-assembler-not {vmv2r.v} } } */
/* { dg-final { scan-assembler-not {vmv4r.v} } } */
/* { dg-final { scan-assembler-not {vmv8r.v} } } */