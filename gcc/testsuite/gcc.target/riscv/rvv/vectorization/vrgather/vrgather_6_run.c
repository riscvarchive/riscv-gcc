/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdio.h>
#include "vrgather_6.c"


int main(void)
{

    vnx4qi vnx4qi_x= {0,1,2,3};
    vnx4qi vnx4qi_y= {128,129,130,131};
    vnx4qi vnx4qi_expect= {3,2,1,0};
    vnx4qi vnx4qi_real;
    vnx4qi_real=permute_vnx4qi(vnx4qi_x,vnx4qi_y);
    for(int i=0; i<4; i++)
        if(vnx4qi_real[i]!=vnx4qi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx4qi_real[i],vnx4qi_expect[i]);
            __builtin_abort();
        }


    vnx2hi vnx2hi_x= {0,1};
    vnx2hi vnx2hi_y= {128,129};
    vnx2hi vnx2hi_expect= {1,0};
    vnx2hi vnx2hi_real;
    vnx2hi_real=permute_vnx2hi(vnx2hi_x,vnx2hi_y);
    for(int i=0; i<2; i++)
        if(vnx2hi_real[i]!=vnx2hi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx2hi_real[i],vnx2hi_expect[i]);
            __builtin_abort();
        }


    vnx2hf vnx2hf_x= {0.1,1.1};
    vnx2hf vnx2hf_y= {64.1,65.1};
    vnx2hf vnx2hf_expect= {1.1,0.1};
    vnx2hf vnx2hf_real;
    vnx2hf_real=permute_vnx2hf(vnx2hf_x,vnx2hf_y);
    for(int i=0; i<2; i++)
        if(vnx2hf_real[i]!=vnx2hf_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx2hf_real[i],vnx2hf_expect[i]);
            __builtin_abort();
        }
    return 0;
}


