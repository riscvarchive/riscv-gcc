/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize " } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "gather_load_8.c"
#include <stdio.h>

int main (void)
{
    int16_t dest_int16_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int16_t src_int16_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    INDEX16 indices_int16_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int16_t expect_int16_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    int len_int16_t = sizeof(indices_int16_t)/sizeof(indices_int16_t[0]);
    INDEX16 mask_int16_t = 0;
    f_int16_t(dest_int16_t,src_int16_t,indices_int16_t,mask_int16_t,len_int16_t);
    for(int i=0; i<len_int16_t; i++) {
        if (dest_int16_t[i]!=expect_int16_t[i] ) {
            printf("f_int16_t=dest_int16_t:%d,expect_int16_t:%d\n",dest_int16_t[i],expect_int16_t[i]);
            __builtin_abort();
        }
    }


    uint16_t dest_uint16_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint16_t src_uint16_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    INDEX16 indices_uint16_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    uint16_t expect_uint16_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    int len_uint16_t = sizeof(indices_uint16_t)/sizeof(indices_uint16_t[0]);
    INDEX16 mask_uint16_t = 0;
    f_uint16_t(dest_uint16_t,src_uint16_t,indices_uint16_t,mask_uint16_t,len_uint16_t);
    for(int i=0; i<len_uint16_t; i++) {
        if (dest_uint16_t[i]!=expect_uint16_t[i] ) {
            printf("f_uint16_t=dest_uint16_t:%d,expect_uint16_t:%d\n",dest_uint16_t[i],expect_uint16_t[i]);
            __builtin_abort();
        }
    }

    int32_t dest_int32_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int32_t src_int32_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    INDEX16 indices_int32_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int32_t expect_int32_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    int len_int32_t = sizeof(indices_int32_t)/sizeof(indices_int32_t[0]);
    INDEX16 mask_int32_t = 0;
    f_int32_t(dest_int32_t,src_int32_t,indices_int32_t,mask_int32_t,len_int32_t);
    for(int i=0; i<len_int32_t; i++) {
        if (dest_int32_t[i]!=expect_int32_t[i] ) {
            printf("f_int32_t=dest_int32_t:%d,expect_int32_t:%d\n",dest_int32_t[i],expect_int32_t[i]);
            __builtin_abort();
        }
    }

    uint32_t dest_uint32_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint32_t src_uint32_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    INDEX16 indices_uint32_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    uint32_t expect_uint32_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    int len_uint32_t = sizeof(indices_uint32_t)/sizeof(indices_uint32_t[0]);
    INDEX16 mask_uint32_t = 0;
    f_uint32_t(dest_uint32_t,src_uint32_t,indices_uint32_t,mask_uint32_t,len_uint32_t);
    for(int i=0; i<len_uint32_t; i++) {
        if (dest_uint32_t[i]!=expect_uint32_t[i] ) {
            printf("f_uint32_t=dest_uint32_t:%d,expect_uint32_t:%d\n",dest_uint32_t[i],expect_uint32_t[i]);
            __builtin_abort();
        }
    }

    _Float16 dest__Float16[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    _Float16 src__Float16[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    INDEX16 indices__Float16[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    _Float16 expect__Float16[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    int len__Float16 = sizeof(indices__Float16)/sizeof(indices__Float16[0]);
    INDEX16 mask__Float16 = 0;
    f__Float16(dest__Float16,src__Float16,indices__Float16,mask__Float16,len__Float16);
    for(int i=0; i<len__Float16; i++) {
        if (dest__Float16[i]!=expect__Float16[i] ) {
            printf("f__Float16=dest__Float16:%d,expect__Float16:%d\n",dest__Float16[i],expect__Float16[i]);
            __builtin_abort();
        }
    }

    float dest_float[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    float src_float[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    INDEX16 indices_float[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    float expect_float[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    int len_float = sizeof(indices_float)/sizeof(indices_float[0]);
    INDEX16 mask_float = 0;
    f_float(dest_float,src_float,indices_float,mask_float,len_float);
    for(int i=0; i<len_float; i++) {
        if (dest_float[i]!=expect_float[i] ) {
            printf("f_float=dest_float:%d,expect_float:%d\n",dest_float[i],expect_float[i]);
            __builtin_abort();
        }
    }

    double dest_double[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    double src_double[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    INDEX32 indices_double[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    double expect_double[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    int len_double = sizeof(indices_double)/sizeof(indices_double[0]);
    INDEX32 mask_double = 0;
    f_double(dest_double,src_double,indices_double,mask_double,len_double);
    for(int i=0; i<len_double; i++) {
        if (dest_double[i]!=expect_double[i] ) {
            printf("f_double=dest_double:%d,expect_double:%d\n",dest_double[i],expect_double[i]);
            __builtin_abort();
        }
    }


    int64_t dest_int64_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int64_t src_int64_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    INDEX32 indices_int64_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int64_t expect_int64_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    int len_int64_t = sizeof(indices_int64_t)/sizeof(indices_int64_t[0]);
    INDEX32 mask_int64_t = 0;
    f_int64_t(dest_int64_t,src_int64_t,indices_int64_t,mask_int64_t,len_int64_t);
    for(int i=0; i<len_int64_t; i++) {
        if (dest_int64_t[i]!=expect_int64_t[i] ) {
            printf("f_int64_t=dest_int64_t:%d,expect_int64_t:%d\n",dest_int64_t[i],expect_int64_t[i]);
            __builtin_abort();
        }
    }

    uint64_t dest_uint64_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint64_t src_uint64_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    INDEX32 indices_uint64_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    uint64_t expect_uint64_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    int len_uint64_t = sizeof(indices_uint64_t)/sizeof(indices_uint64_t[0]);
    INDEX32 mask_uint64_t = 0;
    f_uint64_t(dest_uint64_t,src_uint64_t,indices_uint64_t,mask_uint64_t,len_uint64_t);
    for(int i=0; i<len_uint64_t; i++) {
        if (dest_uint64_t[i]!=expect_uint64_t[i] ) {
            printf("f_uint64_t=dest_uint64_t:%d,expect_uint64_t:%d\n",dest_uint64_t[i],expect_uint64_t[i]);
            __builtin_abort();
        }
    }


    return 0;
}
