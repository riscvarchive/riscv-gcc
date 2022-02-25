/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 -flax-vector-conversions" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdio.h>
#include "vmerge_5.c"


int main(void)
{
    vnx8qi vnx8qi_x= {1,2,3,4,5,6,7,8};
    vnx8qi vnx8qi_y= {101,102,103,104,105,106,107,108};
    vnx8qi vnx8qi_expect= {1,102,3,104,5,106,7,108};
    vnx8qi vnx8qi_real;
    vnx8qi_real=permute0(vnx8qi_x,vnx8qi_y);
    for(int i=0; i<8; i++)
        if(vnx8qi_real[i]!=vnx8qi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx8qi_real[i],vnx8qi_expect[i]);
            __builtin_abort();
        }

    vnx8uqi vnx8uqi_x= {1,2,3,4,5,6,7,8};
    vnx8uqi vnx8uqi_y= {101,102,103,104,105,106,107,108};
    vnx8uqi vnx8uqi_expect= {1,102,3,104,5,106,7,108};
    vnx8uqi vnx8uqi_real;
    vnx8uqi_real=permute1(vnx8uqi_x,vnx8uqi_y);
    for(int i=0; i<8; i++)
        if(vnx8uqi_real[i]!=vnx8uqi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx8uqi_real[i],vnx8uqi_expect[i]);
            __builtin_abort();
        }

    vnx4hi vnx4hi_x= {1,2,3,4};
    vnx4hi vnx4hi_y= {101,102,103,104};
    vnx4hi vnx4hi_expect= {1,102,3,104};
    vnx4hi vnx4hi_real;
    vnx4hi_real=permute2(vnx4hi_x,vnx4hi_y);
    for(int i=0; i<4; i++)
        if(vnx4hi_real[i]!=vnx4hi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx4hi_real[i],vnx4hi_expect[i]);
            __builtin_abort();
        }

    vnx4uhi vnx4uhi_x= {1,2,3,4};
    vnx4uhi vnx4uhi_y= {101,102,103,104};
    vnx4uhi vnx4uhi_expect= {1,102,3,104};
    vnx4uhi vnx4uhi_real;
    vnx4uhi_real=permute3(vnx4uhi_x,vnx4uhi_y);
    for(int i=0; i<4; i++)
        if(vnx4uhi_real[i]!=vnx4uhi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx4uhi_real[i],vnx4uhi_expect[i]);
            __builtin_abort();
        }

    vnx2si vnx2si_x= {1,2};
    vnx2si vnx2si_y= {101,102};
    vnx2si vnx2si_expect= {1,102};
    vnx2si vnx2si_real;
    vnx2si_real=permute4(vnx2si_x,vnx2si_y);
    for(int i=0; i<2; i++)
        if(vnx2si_real[i]!=vnx2si_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx2si_real[i],vnx2si_expect[i]);
            __builtin_abort();
        }

    vnx2usi vnx2usi_x= {1,2};
    vnx2usi vnx2usi_y= {101,102};
    vnx2usi vnx2usi_expect= {1,102};
    vnx2usi vnx2usi_real;
    vnx2usi_real=permute5(vnx2usi_x,vnx2usi_y);
    for(int i=0; i<2; i++)
        if(vnx2usi_real[i]!=vnx2usi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx2usi_real[i],vnx2usi_expect[i]);
            __builtin_abort();
        }

    vnx4hf vnx4hf_x= {1.0,2.0,3.0,4.0};
    vnx4hf vnx4hf_y= {1.1,2.1,3.1,4.1};
    vnx4hf vnx4hf_expect= {1.0,2.1,3.0,4.1};
    vnx4hf vnx4hf_real;
    vnx4hf_real=permute6(vnx4hf_x,vnx4hf_y);
    for(int i=0; i<4; i++)
        if(vnx4hf_real[i]!=vnx4hf_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx4hf_real[i],vnx4hf_expect[i]);
            __builtin_abort();
        }

    vnx2sf vnx2sf_x= {1.0,2.0};
    vnx2sf vnx2sf_y= {1.1,2.1};
    vnx2sf vnx2sf_expect= {1.0,2.1};
    vnx2sf vnx2sf_real;
    vnx2sf_real=permute7(vnx2sf_x,vnx2sf_y);
    for(int i=0; i<2; i++)
        if(vnx2sf_real[i]!=vnx2sf_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx2sf_real[i],vnx2sf_expect[i]);
            __builtin_abort();
        }

    return 0;
}


