/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdio.h>
#include "vrgather_7.c"


int main(void)
{

    vnx2qi vnx2qi_x= {0,1};
    vnx2qi vnx2qi_y= {128,129};
    vnx2qi vnx2qi_expect= {1,0};
    vnx2qi vnx2qi_real;
    vnx2qi_real=permute_vnx2qi(vnx2qi_x,vnx2qi_y);
    for(int i=0; i<2; i++)
        if(vnx2qi_real[i]!=vnx2qi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx2qi_real[i],vnx2qi_expect[i]);
            __builtin_abort();
        }
    
    return 0;
}


