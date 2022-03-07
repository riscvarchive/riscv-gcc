/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=256" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdio.h>
#include "vrgather_10.c"


int main(void)
{

    vnx16qi vnx16qi_x1= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    vnx16qi vnx16qi_y1= {128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159};
    vnx16qi vnx16qi_expect_1= {1,0,3,2,5,4,7,6,9,8,11,10,13,12,15,14,17,16,19,18,21,20,23,22,25,24,27,26,29,28,31,30};
    vnx16qi vnx16qi_real_1;
    vnx16qi_real_1=permute_vnx16qi_2(vnx16qi_x1,vnx16qi_y1);
    for(int i=0; i<32; i++)
        if(vnx16qi_real_1[i]!=vnx16qi_expect_1[i]) {
            printf("permute_vnx16qi_2:index:%d\nreal value:%d\nexpect value:%d\n",i,vnx16qi_real_1[i],vnx16qi_expect_1[i]);
            __builtin_abort();
        }

    vnx16qi vnx16qi_x2= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    vnx16qi vnx16qi_y2= {128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159};
    vnx16qi vnx16qi_expect_2= {3,2,1,0,7,6,5,4,11,10,9,8,15,14,13,12,19,18,17,16,23,22,21,20,27,26,25,24,31,30,29,28};
    vnx16qi vnx16qi_real_2;
    vnx16qi_real_2=permute_vnx16qi_4(vnx16qi_x2,vnx16qi_y2);
    for(int i=0; i<32; i++)
        if(vnx16qi_real_2[i]!=vnx16qi_expect_2[i]) {
            printf("permute_vnx16qi_4:index:%d\nreal value:%d\nexpect value:%d\n",i,vnx16qi_real_2[i],vnx16qi_expect_2[i]);
            __builtin_abort();
        }

    vnx16qi vnx16qi_x3= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    vnx16qi vnx16qi_y3= {128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159};
    vnx16qi vnx16qi_expect_3= {7,6,5,4,3,2,1,0,15,14,13,12,11,10,9,8,23,22,21,20,19,18,17,16,31,30,29,28,27,26,25,24};
    vnx16qi vnx16qi_real_3;
    vnx16qi_real_3=permute_vnx16qi_8(vnx16qi_x3,vnx16qi_y3);
    for(int i=0; i<32; i++)
        if(vnx16qi_real_3[i]!=vnx16qi_expect_3[i]) {
            printf("permute_vnx16qi_8:index:%d\nreal value:%d\nexpect value:%d\n",i,vnx16qi_real_3[i],vnx16qi_expect_3[i]);
            __builtin_abort();
        }
    return 0;
}


