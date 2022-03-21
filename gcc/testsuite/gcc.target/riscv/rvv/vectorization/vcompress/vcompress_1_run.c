/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
    
    

#include <stdio.h>
#include "vcompress_1.c"

int  main(void )
{
    
    vnx4i test_1_x= {0,1,2,4};
    vnx4i test_1_y= {4,5,7,8};
    vnx4i test_1_except= {0,2,7,8};
    vnx4i test_1_real;
    test_1_real=test_1(test_1_x,test_1_y);
    for(int i=0; i<4; i++)
        if(test_1_real[i]!=test_1_except[i]) {
            printf("test_1==index:%d\nreal value:%d\nexpect value:%d\n",i,test_1_real[i],test_1_except[i]);
            __builtin_abort();
        }
        


    vnx4ui test_2_x= {0,1,2,4};
    vnx4ui test_2_y= {4,5,6,8};
    vnx4ui test_2_except= {0,2,6,8};
    vnx4ui test_2_real;
    test_2_real=test_2(test_2_x,test_2_y);
    for(int i=0; i<4; i++)
        if(test_2_real[i]!=test_2_except[i]) {
            printf("test_2==index:%d\nreal value:%d\nexpect value:%d\n",i,test_2_real[i],test_2_except[i]);
            __builtin_abort();
        }
        


    return 0;
}


