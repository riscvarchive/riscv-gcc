/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdio.h>
#include "vrgather_2.c"


int main(void)
{
    vnx32qi vnx32qi_x= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
                        16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31
                       };
    vnx32qi vnx32qi_y= {128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
                        144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159
                       };
    vnx32qi vnx32qi_expect= {31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,
                             15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
                            };
    vnx32qi vnx32qi_real;
    vnx32qi_real=permute_vnx32qi(vnx32qi_x,vnx32qi_y);
    for(int i=0; i<32; i++)
        if(vnx32qi_real[i]!=vnx32qi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx32qi_real[i],vnx32qi_expect[i]);
            __builtin_abort();
        }

    vnx16hi vnx16hi_x= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    vnx16hi vnx16hi_y= {128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143};
    vnx16hi vnx16hi_expect= {15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    vnx16hi vnx16hi_real;
    vnx16hi_real=permute_vnx16hi(vnx16hi_x,vnx16hi_y);
    for(int i=0; i<16; i++)
        if(vnx16hi_real[i]!=vnx16hi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx16hi_real[i],vnx16hi_expect[i]);
            __builtin_abort();
        }

    vnx8si vnx8si_x= {0,1,2,3,4,5,6,7};
    vnx8si vnx8si_y= {128,129,130,131,132,133,134,135};
    vnx8si vnx8si_expect= {7,6,5,4,3,2,1,0};
    vnx8si vnx8si_real;
    vnx8si_real=permute_vnx8si(vnx8si_x,vnx8si_y);
    for(int i=0; i<8; i++)
        if(vnx8si_real[i]!=vnx8si_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx8si_real[i],vnx8si_expect[i]);
            __builtin_abort();
        }

    vnx4di vnx4di_x= {0,1,2,3};
    vnx4di vnx4di_y= {128,129,130,131};
    vnx4di vnx4di_expect= {3,2,1,0};
    vnx4di vnx4di_real;
    vnx4di_real=permute_vnx4di(vnx4di_x,vnx4di_y);
    for(int i=0; i<4; i++)
        if(vnx4di_real[i]!=vnx4di_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx4di_real[i],vnx4di_expect[i]);
            __builtin_abort();
        }

    vnx16hf vnx16hf_x= {0.1,1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1,11.1,12.1,13.1,14.1,15.1};
    vnx16hf vnx16hf_y= {64.1,65.1,66.1,67.1,68.1,69.1,70.1,71.1,72.1,73.1,74.1,75.1,76.1,77.1,78.1,79.1};
    vnx16hf vnx16hf_expect= {15.1,14.1,13.1,12.1,11.1,10.1,9.1,8.1,7.1,6.1,5.1,4.1,3.1,2.1,1.1,0.1};
    vnx16hf vnx16hf_real;
    vnx16hf_real=permute_vnx16hf(vnx16hf_x,vnx16hf_y);
    for(int i=0; i<16; i++)
        if(vnx16hf_real[i]!=vnx16hf_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx16hf_real[i],vnx16hf_expect[i]);
            __builtin_abort();
        }

    vnx8sf vnx8sf_x= {0.1,1.1,2.1,3.1,4.1,5.1,6.1,7.1};
    vnx8sf vnx8sf_y= {64.1,65.1,66.1,67.1,68.1,69.1,70.1,71.1};
    vnx8sf vnx8sf_expect= {7.1,6.1,5.1,4.1,3.1,2.1,1.1,0.1};
    vnx8sf vnx8sf_real;
    vnx8sf_real=permute_vnx8sf(vnx8sf_x,vnx8sf_y);
    for(int i=0; i<8; i++)
        if(vnx8sf_real[i]!=vnx8sf_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx8sf_real[i],vnx8sf_expect[i]);
            __builtin_abort();
        }

    vnx4df vnx4df_x= {0.1,1.1,2.1,3.1};
    vnx4df vnx4df_y= {64.1,65.1,66.1,67.1};
    vnx4df vnx4df_expect= {3.1,2.1,1.1,0.1};
    vnx4df vnx4df_real;
    vnx4df_real=permute_vnx4df(vnx4df_x,vnx4df_y);
    for(int i=0; i<4; i++)
        if(vnx4df_real[i]!=vnx4df_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx4df_real[i],vnx4df_expect[i]);
            __builtin_abort();
        }

    return 0;
}


