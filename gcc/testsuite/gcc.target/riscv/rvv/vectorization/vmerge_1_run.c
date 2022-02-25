/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 -flax-vector-conversions" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdio.h>
#include "vmerge_1.c"


int main(void)
{
    vnx16qi vnx16qi_x= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    vnx16qi vnx16qi_y= {201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216};
    vnx16qi vnx16qi_expect= {1,202,3,204,5,206,7,208,9,210,11,212,13,214,15,216};
    vnx16qi vnx16qi_real;
    vnx16qi_real=permute0(vnx16qi_x,vnx16qi_y);
    for(int i=0; i<16; i++)
        if(vnx16qi_real[i]!=vnx16qi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx16qi_real[i],vnx16qi_expect[i]);
            __builtin_abort();
        }

    vnx16uqi vnx16uqi_x= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    vnx16uqi vnx16uqi_y= {101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116};
    vnx16uqi vnx16uqi_expect= {1,102,3,104,5,106,7,108,9,110,11,112,13,114,15,116};
    vnx16uqi vnx16uqi_real;
    vnx16uqi_real=permute1(vnx16uqi_x,vnx16uqi_y);
    for(int i=0; i<16; i++)
        if(vnx16uqi_real[i]!=vnx16uqi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx16uqi_real[i],vnx16uqi_expect[i]);
            __builtin_abort();
        }

    vnx8hi vnx8hi_x= {1,2,3,4,5,6,7,8};
    vnx8hi vnx8hi_y= {101,102,103,104,105,106,107,108};
    vnx8hi vnx8hi_expect= {1,102,3,104,5,106,7,108};
    vnx8hi vnx8hi_real;
    vnx8hi_real=permute2(vnx8hi_x,vnx8hi_y);
    for(int i=0; i<8; i++)
        if(vnx8hi_real[i]!=vnx8hi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx8hi_real[i],vnx8hi_expect[i]);
            __builtin_abort();
        }

    vnx8uhi vnx8uhi_x= {1,2,3,4,5,6,7,8};
    vnx8uhi vnx8uhi_y= {101,102,103,104,105,106,107,108};
    vnx8uhi vnx8uhi_expect= {1,102,3,104,5,106,7,108};
    vnx8uhi vnx8uhi_real;
    vnx8uhi_real=permute3(vnx8uhi_x,vnx8uhi_y);
    for(int i=0; i<8; i++)
        if(vnx8uhi_real[i]!=vnx8uhi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx8uhi_real[i],vnx8uhi_expect[i]);
            __builtin_abort();
        }

    vnx4si vnx4si_x= {1,2,3,4};
    vnx4si vnx4si_y= {101,102,103,104};
    vnx4si vnx4si_expect= {1,102,3,104};
    vnx4si vnx4si_real;
    vnx4si_real=permute4(vnx4si_x,vnx4si_y);
    for(int i=0; i<4; i++)
        if(vnx4si_real[i]!=vnx4si_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx4si_real[i],vnx4si_expect[i]);
            __builtin_abort();
        }

    vnx4usi vnx4usi_x= {1,2,3,4};
    vnx4usi vnx4usi_y= {101,102,103,104};
    vnx4usi vnx4usi_expect= {1,102,3,104};
    vnx4usi vnx4usi_real;
    vnx4usi_real=permute5(vnx4usi_x,vnx4usi_y);
    for(int i=0; i<4; i++)
        if(vnx4usi_real[i]!=vnx4usi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx4usi_real[i],vnx4usi_expect[i]);
            __builtin_abort();
        }

    vnx2di vnx2di_x= {1,2};
    vnx2di vnx2di_y= {101,102};
    vnx2di vnx2di_expect= {1,102};
    vnx2di vnx2di_real;
    vnx2di_real=permute6(vnx2di_x,vnx2di_y);
    for(int i=0; i<2; i++)
        if(vnx2di_real[i]!=vnx2di_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx2di_real[i],vnx2di_expect[i]);
            __builtin_abort();
        }

    vnx2udi vnx2udi_x= {1,2};
    vnx2udi vnx2udi_y= {101,102};
    vnx2udi vnx2udi_expect= {1,102};
    vnx2udi vnx2udi_real;
    vnx2udi_real=permute07(vnx2udi_x,vnx2udi_y);
    for(int i=0; i<2; i++)
        if(vnx2udi_real[i]!=vnx2udi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx2udi_real[i],vnx2udi_expect[i]);
            __builtin_abort();
        }

    vnx8hf vnx8hf_x= {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0};
    vnx8hf vnx8hf_y= {1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1};
    vnx8hf vnx8hf_expect= {1.0,2.1,3.0,4.1,5.0,6.1,7.0,8.1};
    vnx8hf vnx8hf_real;
    vnx8hf_real=permute8(vnx8hf_x,vnx8hf_y);
    for(int i=0; i<8; i++)
        if(vnx8hf_real[i]!=vnx8hf_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx8hf_real[i],vnx8hf_expect[i]);
            __builtin_abort();
        }

    vnx4sf vnx4sf_x= {1.0,2.0,3.0,4.0};
    vnx4sf vnx4sf_y= {1.1,2.1,3.1,4.1};
    vnx4sf vnx4sf_expect= {1.0,2.1,3.0,4.1};
    vnx4sf vnx4sf_real;
    vnx4sf_real=permute9(vnx4sf_x,vnx4sf_y);
    for(int i=0; i<4; i++)
        if(vnx4sf_real[i]!=vnx4sf_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx4sf_real[i],vnx4sf_expect[i]);
            __builtin_abort();
        }

    vnx2df vnx2df_x= {1.0,2.0};
    vnx2df vnx2df_y= {1.1,2.1};
    vnx2df vnx2df_expect= {1.0,2.1};
    vnx2df vnx2df_real;
    vnx2df_real=permute10(vnx2df_x,vnx2df_y);
    for(int i=0; i<2; i++)
        if(vnx2df_real[i]!=vnx2df_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx2df_real[i],vnx2df_expect[i]);
            __builtin_abort();
        }

    return 0;
}


