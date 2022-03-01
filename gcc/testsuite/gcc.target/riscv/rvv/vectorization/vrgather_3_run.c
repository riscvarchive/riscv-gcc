/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdio.h>
#include "vrgather_3.c"


int main(void)
{
    vnx64qi vnx64qi_x= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
                        16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
                        32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,
                        48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63
                       };
    vnx64qi vnx64qi_y= {128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
                        144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
                        160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
                        176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191
                       };
    vnx64qi vnx64qi_expect= {63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,
                             47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,
                             31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,
                             15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
                            };
    vnx64qi vnx64qi_real;
    vnx64qi_real=permute_vnx64qi(vnx64qi_x,vnx64qi_y);
    for(int i=0; i<64; i++)
        if(vnx64qi_real[i]!=vnx64qi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx64qi_real[i],vnx64qi_expect[i]);
            __builtin_abort();
        }

    vnx32hi vnx32hi_x= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
                        16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31
                       };
    vnx32hi vnx32hi_y= {128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
                        144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159
                       };
    vnx32hi vnx32hi_expect= {31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,
                             15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
                            };
    vnx32hi vnx32hi_real;
    vnx32hi_real=permute_vnx32hi(vnx32hi_x,vnx32hi_y);
    for(int i=0; i<32; i++)
        if(vnx32hi_real[i]!=vnx32hi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx32hi_real[i],vnx32hi_expect[i]);
            __builtin_abort();
        }

    vnx16si vnx16si_x= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    vnx16si vnx16si_y= {128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143};
    vnx16si vnx16si_expect= {15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    vnx16si vnx16si_real;
    vnx16si_real=permute_vnx16si(vnx16si_x,vnx16si_y);
    for(int i=0; i<16; i++)
        if(vnx16si_real[i]!=vnx16si_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx16si_real[i],vnx16si_expect[i]);
            __builtin_abort();
        }

    vnx8di vnx8di_x= {0,1,2,3,4,5,6,7};
    vnx8di vnx8di_y= {128,129,130,131,132,133,134,135};
    vnx8di vnx8di_expect= {7,6,5,4,3,2,1,0};
    vnx8di vnx8di_real;
    vnx8di_real=permute_vnx8di(vnx8di_x,vnx8di_y);
    for(int i=0; i<8; i++)
        if(vnx8di_real[i]!=vnx8di_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx8di_real[i],vnx8di_expect[i]);
            __builtin_abort();
        }

    vnx32hf vnx32hf_x= {0.1,1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1,11.1,12.1,13.1,14.1,15.1,
                        16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1
                       };
    vnx32hf vnx32hf_y= {64.1,65.1,66.1,67.1,68.1,69.1,70.1,71.1,72.1,73.1,74.1,75.1,76.1,77.1,78.1,79.1,
                        80.1,81.1,82.1,83.1,84.1,85.1,86.1,87.1,88.1,89.1,90.1,91.1,92.1,93.1,94.1,95.1
                       };
    vnx32hf vnx32hf_expect= {31.1,30.1,29.1,28.1,27.1,26.1,25.1,24.1,23.1,22.1,21.1,20.1,19.1,18.1,17.1,16.1,
                             15.1,14.1,13.1,12.1,11.1,10.1,9.1,8.1,7.1,6.1,5.1,4.1,3.1,2.1,1.1,0.1
                            };
    vnx32hf vnx32hf_real;
    vnx32hf_real=permute_vnx32hf(vnx32hf_x,vnx32hf_y);
    for(int i=0; i<32; i++)
        if(vnx32hf_real[i]!=vnx32hf_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx32hf_real[i],vnx32hf_expect[i]);
            __builtin_abort();
        }

    vnx16sf vnx16sf_x= {0.1,1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1,11.1,12.1,13.1,14.1,15.1};
    vnx16sf vnx16sf_y= {64.1,65.1,66.1,67.1,68.1,69.1,70.1,71.1,72.1,73.1,74.1,75.1,76.1,77.1,78.1,79.1};
    vnx16sf vnx16sf_expect= {15.1,14.1,13.1,12.1,11.1,10.1,9.1,8.1,7.1,6.1,5.1,4.1,3.1,2.1,1.1,0.1};
    vnx16sf vnx16sf_real;
    vnx16sf_real=permute_vnx16sf(vnx16sf_x,vnx16sf_y);
    for(int i=0; i<16; i++)
        if(vnx16sf_real[i]!=vnx16sf_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx16sf_real[i],vnx16sf_expect[i]);
            __builtin_abort();
        }

    vnx8df vnx8df_x= {0.1,1.1,2.1,3.1,4.1,5.1,6.1,7.1};
    vnx8df vnx8df_y= {64.1,65.1,66.1,67.1,68.1,69.1,70.1,71.1};
    vnx8df vnx8df_expect= {7.1,6.1,5.1,4.1,3.1,2.1,1.1,0.1};
    vnx8df vnx8df_real;
    vnx8df_real=permute_vnx8df(vnx8df_x,vnx8df_y);
    for(int i=0; i<8; i++)
        if(vnx8df_real[i]!=vnx8df_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx8df_real[i],vnx8df_expect[i]);
            __builtin_abort();
        }

    return 0;
}


