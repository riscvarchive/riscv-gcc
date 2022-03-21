/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdio.h>
#include "vrgather_1.c"


int main(void)
{
    vnx16qi vnx16qi_x= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    vnx16qi vnx16qi_y= {128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143};
    vnx16qi vnx16qi_expect= {15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    vnx16qi vnx16qi_real;
    vnx16qi_real=permute_vnx16qi(vnx16qi_x,vnx16qi_y);
    for(int i=0; i<16; i++)
        if(vnx16qi_real[i]!=vnx16qi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx16qi_real[i],vnx16qi_expect[i]);
            __builtin_abort();
        }

    vnx8hi vnx8hi_x= {0,1,2,3,4,5,6,7};
    vnx8hi vnx8hi_y= {128,129,130,131,132,133,134,135};
    vnx8hi vnx8hi_expect= {7,6,5,4,3,2,1,0};
    vnx8hi vnx8hi_real;
    vnx8hi_real=permute_vnx8hi(vnx8hi_x,vnx8hi_y);
    for(int i=0; i<8; i++)
        if(vnx8hi_real[i]!=vnx8hi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx8hi_real[i],vnx8hi_expect[i]);
            __builtin_abort();
        }

    vnx4si vnx4si_x= {0,1,2,3};
    vnx4si vnx4si_y= {128,129,130,131};
    vnx4si vnx4si_expect= {3,2,1,0};
    vnx4si vnx4si_real;
    vnx4si_real=permute_vnx4si(vnx4si_x,vnx4si_y);
    for(int i=0; i<4; i++)
        if(vnx4si_real[i]!=vnx4si_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx4si_real[i],vnx4si_expect[i]);
            __builtin_abort();
        }


    vnx2di vnx2di_x= {0,1};
    vnx2di vnx2di_y= {128,129};
    vnx2di vnx2di_expect= {1,0};
    vnx2di vnx2di_real;
    vnx2di_real=permute_vnx2di(vnx2di_x,vnx2di_y);
    for(int i=0; i<2; i++)
        if(vnx2di_real[i]!=vnx2di_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx2di_real[i],vnx2di_expect[i]);
            __builtin_abort();
        }

    vnx8hf vnx8hf_x= {0.1,1.1,2.1,3.1,4.1,5.1,6.1,7.1};
    vnx8hf vnx8hf_y= {64.1,65.1,66.1,67.1,68.1,69.1,70.1,71.1};
    vnx8hf vnx8hf_expect= {7.1,6.1,5.1,4.1,3.1,2.1,1.1,0.1};
    vnx8hf vnx8hf_real;
    vnx8hf_real=permute_vnx8hf(vnx8hf_x,vnx8hf_y);
    for(int i=0; i<8; i++)
        if(vnx8hf_real[i]!=vnx8hf_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx8hf_real[i],vnx8hf_expect[i]);
            __builtin_abort();
        }

    vnx4sf vnx4sf_x= {0.1,1.1,2.1,3.1};
    vnx4sf vnx4sf_y= {64.1,65.1,66.1,67.1};
    vnx4sf vnx4sf_expect= {3.1,2.1,1.1,0.1};
    vnx4sf vnx4sf_real;
    vnx4sf_real=permute_vnx4sf(vnx4sf_x,vnx4sf_y);
    for(int i=0; i<4; i++)
        if(vnx4sf_real[i]!=vnx4sf_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx4sf_real[i],vnx4sf_expect[i]);
            __builtin_abort();
        }

    vnx2df vnx2df_x= {0.1,1.1};
    vnx2df vnx2df_y= {64.1,65.1};
    vnx2df vnx2df_expect= {1.1,0.1};
    vnx2df vnx2df_real;
    vnx2df_real=permute_vnx2df(vnx2df_x,vnx2df_y);
    for(int i=0; i<2; i++)
        if(vnx2df_real[i]!=vnx2df_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx2df_real[i],vnx2df_expect[i]);
            __builtin_abort();
        }
    return 0;
}


