/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
    
    

#include <stdio.h>
#include "vcompress_2.c"

int  main(void )
{
    
    vnx8i test_1_x= {0,1,2,3,5,6,7,8};
    vnx8i test_1_y= {8,9,10,11,13,14,15,16};
    vnx8i test_1_except= {2,3,6,7,11,13,14,15};
    vnx8i test_1_real;
    test_1_real=test_1(test_1_x,test_1_y);
    for(int i=0; i<8; i++)
        if(test_1_real[i]!=test_1_except[i]) {
            printf("test_1==index:%d\nreal value:%d\nexpect value:%d\n",i,test_1_real[i],test_1_except[i]);
            __builtin_abort();
        }
        


    vnx4i test_2_x= {1,2,3,4};
    vnx4i test_2_y= {5,6,7,8};
    vnx4i test_2_except= {2,4,7,8};
    vnx4i test_2_real;
    test_2_real=test_2(test_2_x,test_2_y);
    for(int i=0; i<4; i++)
        if(test_2_real[i]!=test_2_except[i]) {
            printf("test_2==index:%d\nreal value:%d\nexpect value:%d\n",i,test_2_real[i],test_2_except[i]);
            __builtin_abort();
        }
        


    vnx8ui test_3_x= {0,1,2,3,4,5,6,8};
    vnx8ui test_3_y= {8,9,10,11,12,13,15,16};
    vnx8ui test_3_except= {2,3,5,6,11,12,13,15};
    vnx8ui test_3_real;
    test_3_real=test_3(test_3_x,test_3_y);
    for(int i=0; i<8; i++)
        if(test_3_real[i]!=test_3_except[i]) {
            printf("test_3==index:%d\nreal value:%d\nexpect value:%d\n",i,test_3_real[i],test_3_except[i]);
            __builtin_abort();
        }
        


    vnx4ui test_4_x= {1,2,3,4};
    vnx4ui test_4_y= {4,5,6,8};
    vnx4ui test_4_except= {2,4,6,8};
    vnx4ui test_4_real;
    test_4_real=test_4(test_4_x,test_4_y);
    for(int i=0; i<4; i++)
        if(test_4_real[i]!=test_4_except[i]) {
            printf("test_4==index:%d\nreal value:%d\nexpect value:%d\n",i,test_4_real[i],test_4_except[i]);
            __builtin_abort();
        }
        


    vnx4f test_5_x= {0,1,3,4};
    vnx4f test_5_y= {4,5,6,7};
    vnx4f test_5_except= {1,4,6,7};
    vnx4f test_5_real;
    test_5_real=test_5(test_5_x,test_5_y);
    for(int i=0; i<4; i++)
        if(test_5_real[i]!=test_5_except[i]) {
            printf("test_5==index:%d\nreal value:%d\nexpect value:%d\n",i,test_5_real[i],test_5_except[i]);
            __builtin_abort();
        }
        


    return 0;
}


