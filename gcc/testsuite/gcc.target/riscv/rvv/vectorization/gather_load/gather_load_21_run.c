/* { dg-do run } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize " } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "gather_load_21.c"
#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    uint64_t dest_f1[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint32_t src1_f1[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    uint16_t src2_f1[] = {48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
    uint32_t indices_f1[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    uint64_t expect_f1[] = {96,99,102,105,108,111,114,23,24,25,26,27,28,29,30,31};
    int len_f1 = sizeof(indices_f1)/sizeof(indices_f1[0]);
    f1(dest_f1,src1_f1,src2_f1,indices_f1);
    for(int i=0; i<len_f1; i++) {
        if (dest_f1[i]!=expect_f1[i] ) {
            printf("f1=dest_f1:%d,expect_f1:%d\n",dest_f1[i],expect_f1[i]);
            __builtin_abort();
        }
    }

    uint64_t dest_f2[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint32_t src1_f2[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    uint16_t src2_f2[] = {48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
    uint64_t indices_f2[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    uint64_t expect_f2[] = {96,99,102,105,108,111,114,23,24,25,26,27,28,29,30,31};
    int len_f2 = sizeof(indices_f2)/sizeof(indices_f2[0]);
    f2(dest_f2,src1_f2,src2_f2,indices_f2);
    for(int i=0; i<len_f2; i++) {
        if (dest_f2[i]!=expect_f2[i] ) {
            printf("f2=dest_f2:%d,expect_f2:%d\n",dest_f2[i],expect_f2[i]);
            __builtin_abort();
        }
    }

    uint64_t dest_f3[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint32_t src1_f3[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    uint16_t *src2_f3[16];
    uint16_t test_f3[]= {48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
    for(int i=0; i<16; i++) {
        src2_f3[i]=malloc(sizeof(uint16_t*)*1);
        *src2_f3[i]=test_f3[i];
    }
    uint64_t expect_f3[] = {96,99,102,105,108,111,114,23,24,25,26,27,28,29,30,31};
    f3(dest_f3,src1_f3,src2_f3);
    for(int i=0; i<16; i++) {
        if (dest_f3[i]!=expect_f3[i] ) {
            printf("f3=dest_f3:%d,expect_f3:%d\n",dest_f3[i],expect_f3[i]);
            __builtin_abort();
        }
    }


    double dest_f4[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    float src1_f4[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    _Float16 src2_f4[] = {48.0,49.0,50.0,51.0,52.0,53.0,54.0,55.0,56.0,57.0,58.0,59.0,60.0,61.0,62.0,63.0};
    uint32_t indices_f4[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    double expect_f4[] = {96.1,99.1,102.1,105.1,108.1,111.1,114.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    int len_f4 = sizeof(indices_f4)/sizeof(indices_f4[0]);
    f4(dest_f4,src1_f4,src2_f4,indices_f4);
    for(int i=0; i<len_f4; i++) {
        if (dest_f4[i]!=expect_f4[i] ) {
            printf("f4=dest_f4:%d,expect_f4:%d\n",dest_f4[i],expect_f4[i]);
            __builtin_abort();
        }
    }

    double dest_f5[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    float src1_f5[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    _Float16 src2_f5[] = {48.0,49.0,50.0,51.0,52.0,53.0,54.0,55.0,56.0,57.0,58.0,59.0,60.0,61.0,62.0,63.0};
    uint64_t indices_f5[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    double expect_f5[] = {96.1,99.1,102.1,105.1,108.1,111.1,114.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    int len_f5 = sizeof(indices_f5)/sizeof(indices_f5[0]);
    f5(dest_f5,src1_f5,src2_f5,indices_f5);
    for(int i=0; i<len_f5; i++) {
        if (dest_f5[i]!=expect_f5[i] ) {
            printf("f5=dest_f5:%d,expect_f5:%d\n",dest_f5[i],expect_f5[i]);
            __builtin_abort();
        }
    }

    double dest_f6[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    float src1_f6[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    _Float16 *src2_f6[16];
    _Float16 test_f6[]= {48.0,49.0,50.0,51.0,52.0,53.0,54.0,55.0,56.0,57.0,58.0,59.0,60.0,61.0,62.0,63.0};
    for(int i=0; i<16; i++) {
        src2_f6[i]=malloc(sizeof(_Float16*)*1);
        *src2_f6[i]=test_f6[i];
    }
    double expect_f6[] = {96.1,99.1,102.1,105.1,108.1,111.1,114.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    f6(dest_f6,src1_f6,src2_f6);
    for(int i=0; i<16; i++) {
        if (dest_f6[i]!=expect_f6[i] ) {
            printf("f6=dest_f6:%d,expect_f6:%d\n",dest_f6[i],expect_f6[i]);
            __builtin_abort();
        }
    }


    return 0;
}
