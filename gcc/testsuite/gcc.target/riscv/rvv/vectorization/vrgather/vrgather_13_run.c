/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=256" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdio.h>
#include "vrgather_13.c"


int main(void)
{

    vnx4si vnx4si_x1= {0,1,2,3,4,5,6,7};
    vnx4si vnx4si_y1= {128,129,130,131,132,133,134,135};
    vnx4si vnx4si_expect_1= {1,0,3,2,5,4,7,6};
    vnx4si vnx4si_real_1;
    vnx4si_real_1=permute_vnx4si_2(vnx4si_x1,vnx4si_y1);
    for(int i=0; i<8; i++)
        if(vnx4si_real_1[i]!=vnx4si_expect_1[i]) {
            printf("permute_vnx4si_2:index:%d\nreal value:%d\nexpect value:%d\n",i,vnx4si_real_1[i],vnx4si_expect_1[i]);
            __builtin_abort();
        }

    vnx4sf vnx4sf_x1= {0.1,1.1,2.1,3.1,4.1,5.1,6.1,7.1};
    vnx4sf vnx4sf_y1= {64.1,65.1,66.1,67.1,68.1,69.1,70.1,71.1};
    vnx4sf vnx4sf_expect_1= {1.1,0.1,3.1,2.1,5.1,4.1,7.1,6.1};
    vnx4sf vnx4sf_real_1;
    vnx4sf_real_1=permute_vnx4sf_2(vnx4sf_x1,vnx4sf_y1);
    for(int i=0; i<8; i++)
        if(vnx4sf_real_1[i]!=vnx4sf_expect_1[i]) {
            printf("permute_vnx4sf_2:index:%d\nreal value:%d\nexpect value:%d\n",i,vnx4sf_real_1[i],vnx4sf_expect_1[i]);
            __builtin_abort();
        }

    return 0;
}


