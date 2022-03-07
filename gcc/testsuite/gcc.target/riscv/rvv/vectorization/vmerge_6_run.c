/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 -flax-vector-conversions" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdio.h>
#include "vmerge_6.c"


int main(void)
{
    vnx4qi vnx4qi_x= {1,2,3,4};
    vnx4qi vnx4qi_y= {101,102,103,104};
    vnx4qi vnx4qi_expect= {1,102,3,104};
    vnx4qi vnx4qi_real;
    vnx4qi_real=permute0(vnx4qi_x,vnx4qi_y);
    for(int i=0; i<4; i++)
        if(vnx4qi_real[i]!=vnx4qi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx4qi_real[i],vnx4qi_expect[i]);
            __builtin_abort();
        }

    vnx4uqi vnx4uqi_x= {1,2,3,4};
    vnx4uqi vnx4uqi_y= {101,102,103,104};
    vnx4uqi vnx4uqi_expect= {1,102,3,104};
    vnx4uqi vnx4uqi_real;
    vnx4uqi_real=permute1(vnx4uqi_x,vnx4uqi_y);
    for(int i=0; i<4; i++)
        if(vnx4uqi_real[i]!=vnx4uqi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx4uqi_real[i],vnx4uqi_expect[i]);
            __builtin_abort();
        }

    vnx2hi vnx2hi_x= {1,2};
    vnx2hi vnx2hi_y= {101,102};
    vnx2hi vnx2hi_expect= {1,102};
    vnx2hi vnx2hi_real;
    vnx2hi_real=permute2(vnx2hi_x,vnx2hi_y);
    for(int i=0; i<2; i++)
        if(vnx2hi_real[i]!=vnx2hi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx2hi_real[i],vnx2hi_expect[i]);
            __builtin_abort();
        }

    vnx2uhi vnx2uhi_x= {1,2};
    vnx2uhi vnx2uhi_y= {101,102};
    vnx2uhi vnx2uhi_expect= {1,102};
    vnx2uhi vnx2uhi_real;
    vnx2uhi_real=permute3(vnx2uhi_x,vnx2uhi_y);
    for(int i=0; i<2; i++)
        if(vnx2uhi_real[i]!=vnx2uhi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx2uhi_real[i],vnx2uhi_expect[i]);
            __builtin_abort();
        }

    vnx2hf vnx2hf_x= {1.0,2.0};
    vnx2hf vnx2hf_y= {1.1,2.1};
    vnx2hf vnx2hf_expect= {1.0,2.1};
    vnx2hf vnx2hf_real;
    vnx2hf_real=permute6(vnx2hf_x,vnx2hf_y);
    for(int i=0; i<2; i++)
        if(vnx2hf_real[i]!=vnx2hf_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx2hf_real[i],vnx2hf_expect[i]);
            __builtin_abort();
        }

    return 0;
}


