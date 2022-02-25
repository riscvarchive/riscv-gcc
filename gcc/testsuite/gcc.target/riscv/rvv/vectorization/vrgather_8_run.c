/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=65536" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdio.h>
#include "vrgather_8.c"


int main(void)
{

    vnx16qi vnx16qi_x= {0,1,2,3};
    vnx16qi vnx16qi_y= {128,129,130,131};
    vnx16qi vnx16qi_expect= {2,1,0,0};
    vnx16qi vnx16qi_real;
    vnx16qi_real=permute(vnx16qi_x,vnx16qi_y);
    for(int i=0; i<4; i++)
        if(vnx16qi_real[i]!=vnx16qi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx16qi_real[i],vnx16qi_expect[i]);
            __builtin_abort();
        }

    return 0;
}


