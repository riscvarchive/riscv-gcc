/* { dg-do run } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "partial_load_8.c"
#include <stdio.h>


int main (void)
{
    int len=32;
    uint64_t dst[]= {
        64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,
        80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95
    };
    uint32_t src1[]= {
        32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,
        48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63
    };
    int8_t src2[]= {
        0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
        16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31
    };
    uint64_t expect[]= {
        96,99,102,105,108,111,114,71,72,73,74,75,76,77,78,79,
        80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95
    };
    f1(dst,src1,src2);
    for(long i=0; i<len; i++) {
        if (dst[i]!=expect[i] ) {
            printf("f1_2=index:%d,dst:%d,expect:%d\n",i,dst[i],expect[i]);
            __builtin_abort();
        }
    }




    return 0;
}
