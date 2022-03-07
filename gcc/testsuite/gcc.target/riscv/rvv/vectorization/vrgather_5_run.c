/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdio.h>
#include "vrgather_5.c"


int main(void)
{
    vnx8qi vnx8qi_x= {0,1,2,3,4,5,6,7};
    vnx8qi vnx8qi_y= {128,129,130,131,132,133,134,135};
    vnx8qi vnx8qi_expect= {7,6,5,4,3,2,1,0};
    vnx8qi vnx8qi_real;
    vnx8qi_real=permute_vnx8qi(vnx8qi_x,vnx8qi_y);
    for(int i=0; i<8; i++)
        if(vnx8qi_real[i]!=vnx8qi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx8qi_real[i],vnx8qi_expect[i]);
            __builtin_abort();
        }

    vnx4hi vnx4hi_x= {0,1,2,3};
    vnx4hi vnx4hi_y= {128,129,130,131};
    vnx4hi vnx4hi_expect= {3,2,1,0};
    vnx4hi vnx4hi_real;
    vnx4hi_real=permute_vnx4hi(vnx4hi_x,vnx4hi_y);
    for(int i=0; i<4; i++)
        if(vnx4hi_real[i]!=vnx4hi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx4hi_real[i],vnx4hi_expect[i]);
            __builtin_abort();
        }


    vnx2si vnx2si_x= {0,1};
    vnx2si vnx2si_y= {128,129};
    vnx2si vnx2si_expect= {1,0};
    vnx2si vnx2si_real;
    vnx2si_real=permute_vnx2si(vnx2si_x,vnx2si_y);
    for(int i=0; i<2; i++)
        if(vnx2si_real[i]!=vnx2si_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx2si_real[i],vnx2si_expect[i]);
            __builtin_abort();
        }

    vnx4hf vnx4hf_x= {0.1,1.1,2.1,3.1};
    vnx4hf vnx4hf_y= {64.1,65.1,66.1,67.1};
    vnx4hf vnx4hf_expect= {3.1,2.1,1.1,0.1};
    vnx4hf vnx4hf_real;
    vnx4hf_real=permute_vnx4hf(vnx4hf_x,vnx4hf_y);
    for(int i=0; i<4; i++)
        if(vnx4hf_real[i]!=vnx4hf_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx4hf_real[i],vnx4hf_expect[i]);
            __builtin_abort();
        }

    vnx2sf vnx2sf_x= {0.1,1.1};
    vnx2sf vnx2sf_y= {64.1,65.1};
    vnx2sf vnx2sf_expect= {1.1,0.1};
    vnx2sf vnx2sf_real;
    vnx2sf_real=permute_vnx2sf(vnx2sf_x,vnx2sf_y);
    for(int i=0; i<2; i++)
        if(vnx2sf_real[i]!=vnx2sf_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx2sf_real[i],vnx2sf_expect[i]);
            __builtin_abort();
        }
    return 0;
}


