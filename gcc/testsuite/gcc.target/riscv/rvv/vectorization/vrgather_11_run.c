/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=256" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdio.h>
#include "vrgather_11.c"


int main(void)
{

    vnx8hi vnx8hi_x1= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    vnx8hi vnx8hi_y1= {128,129,130,131,132,133,134,135,136,137,138,139,140,141};
    vnx8hi vnx8hi_expect_1= {1,0,3,2,5,4,7,6,9,8,11,10,13,12,15,14};
    vnx8hi vnx8hi_real_1;
    vnx8hi_real_1=permute_vnx8hi_2(vnx8hi_x1,vnx8hi_y1);
    for(int i=0; i<16; i++)
        if(vnx8hi_real_1[i]!=vnx8hi_expect_1[i]) {
            printf("permute_vnx8hi_2:index:%d\nreal value:%d\nexpect value:%d\n",i,vnx8hi_real_1[i],vnx8hi_expect_1[i]);
            __builtin_abort();
        }

    vnx8hi vnx8hi_x2= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    vnx8hi vnx8hi_y2= {128,129,130,131,132,133,134,135,136,137,138,139,140,141};
    vnx8hi vnx8hi_expect_2= {3,2,1,0,7,6,5,4,11,10,9,8,15,14,13,12};
    vnx8hi vnx8hi_real_2;
    vnx8hi_real_2=permute_vnx8hi_4(vnx8hi_x2,vnx8hi_y2);
    for(int i=0; i<16; i++)
        if(vnx8hi_real_2[i]!=vnx8hi_expect_2[i]) {
            printf("permute_vnx8hi_4:index:%d\nreal value:%d\nexpect value:%d\n",i,vnx8hi_real_2[i],vnx8hi_expect_2[i]);
            __builtin_abort();
        }

    vnx8hf vnx8hf_x1= {0.1,1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1,11.1,12.1,13.1,14.1,15.1};
    vnx8hf vnx8hf_y1= {64.1,65.1,66.1,67.1,68.1,69.1,70.1,71.1,72.1,73.1,74.1,75.1,76.1,77.1,78.1,79.1};
    vnx8hf vnx8hf_expect_1= {1.1,0.1,3.1,2.1,5.1,4.1,7.1,6.1,9.1,8.1,11.1,10.1,13.1,12.1,15.1,14.1};
    vnx8hf vnx8hf_real_1;
    vnx8hf_real_1=permute_vnx8hf_2(vnx8hf_x1,vnx8hf_y1);
    for(int i=0; i<16; i++)
        if(vnx8hf_real_1[i]!=vnx8hf_expect_1[i]) {
            printf("permute_vnx8hf_2:index:%d\nreal value:%d\nexpect value:%d\n",i,vnx8hf_real_1[i],vnx8hf_expect_1[i]);
            __builtin_abort();
        }

    vnx8hf vnx8hf_x2= {0.1,1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1,11.1,12.1,13.1,14.1,15.1};
    vnx8hf vnx8hf_y2= {64.1,65.1,66.1,67.1,68.1,69.1,70.1,71.1,72.1,73.1,74.1,75.1,76.1,77.1,78.1,79.1};
    vnx8hf vnx8hf_expect_2= {3.1,2.1,1.1,0.1,7.1,6.1,5.1,4.1,11.1,10.1,9.1,8.1,15.1,14.1,13.1,12.1};
    vnx8hf vnx8hf_real_2;
    vnx8hf_real_2=permute_vnx8hf_4(vnx8hf_x2,vnx8hf_y2);
    for(int i=0; i<16; i++)
        if(vnx8hf_real_2[i]!=vnx8hf_expect_2[i]) {
            printf("permute_vnx8hf_4:index:%d\nreal value:%d\nexpect value:%d\n",i,vnx8hf_real_2[i],vnx8hf_expect_2[i]);
            __builtin_abort();
        }

    return 0;
}


