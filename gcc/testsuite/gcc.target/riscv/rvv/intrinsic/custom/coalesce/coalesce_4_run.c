/* { dg-do run } */
/* { dg-additional-options "-O3" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "coalesce_4.c"
#include <stdio.h>

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
subreg_to_reg_1_golden (int32_t *in, int32_t *out, size_t m)
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
      vse32_v_i32m1(out+32,vget_v_i32m8_i32m1 (result, 3),4);
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
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
subreg_to_reg_2_golden (int32_t *in, int32_t *out, size_t m)
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
      vse32_v_i32m1(out+32,vget_v_i32m8_i32m1 (result, 3),4);
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
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
subreg_to_reg_3_golden (int32_t *in, int32_t *out, size_t m)
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
      vse32_v_i32m1(out+32,vget_v_i32m8_i32m1 (result, 3),4);
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
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
subreg_to_reg_4_golden (int32_t *in, int32_t *out, size_t m)
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
      vse32_v_i32m1(out+32,vget_v_i32m8_i32m1 (result, 3),4);
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
#pragma GCC pop_options

int  main(void )
{
    int32_t in[32]={5848,3451,7965,1441,35,656,7281,4078,5894,6274,1492,748,1004,1140,4704,3487,3886,1002,6203,4870,614,6809,2326,1296,4289,6316,4250,7665,4525,5198,219,7136};
    int32_t out[36] = {0};
    int32_t out_golden[36] = {0};
    subreg_to_reg_1_golden (in, out_golden, 9);
    subreg_to_reg_1 (in, out, 9);
    for(int i=0;i<36;i++)
    {
        if (out[i]!=out_golden[i] ) {
            printf("subreg_to_reg_1=index:%d,out:%d,out_golden:%d\n",i,out[i],out_golden[i]);
            __builtin_abort();
        }
    }
    
    subreg_to_reg_2_golden (in, out_golden, 17);
    subreg_to_reg_2 (in, out, 17);
    for(int i=0;i<36;i++)
    {
        if (out[i]!=out_golden[i] ) {
            printf("subreg_to_reg_2=index:%d,out:%d,out_golden:%d\n",i,out[i],out_golden[i]);
            __builtin_abort();
        }
    }
    
    subreg_to_reg_3_golden (in, out_golden, 17);
    subreg_to_reg_3 (in, out, 17);
    for(int i=0;i<36;i++)
    {
        if (out[i]!=out_golden[i] ) {
            printf("subreg_to_reg_2=index:%d,out:%d,out_golden:%d\n",i,out[i],out_golden[i]);
            __builtin_abort();
        }
    }
    
    subreg_to_reg_4_golden (in, out_golden, 17);
    subreg_to_reg_4 (in, out, 17);
    for(int i=0;i<36;i++)
    {
        if (out[i]!=out_golden[i] ) {
            printf("subreg_to_reg_2=index:%d,out:%d,out_golden:%d\n",i,out[i],out_golden[i]);
            __builtin_abort();
        }
    }
    return 0;
}