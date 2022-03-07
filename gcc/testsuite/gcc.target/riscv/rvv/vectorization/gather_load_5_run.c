/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize " } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "gather_load_5.c"
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int8_t dest_int8_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int len_int8_t = sizeof(dest_int8_t)/sizeof(dest_int8_t[0]);
    int8_t *src_int8_t[16];
    int8_t test_int8_t[]= {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    for(int i=0; i<16; i++) {
        src_int8_t[i]=malloc(sizeof(int8_t*)*1);
        *src_int8_t[i]=test_int8_t[i];
    }
    int8_t expect_int8_t[] = {48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78};
    f_int8_t(dest_int8_t,src_int8_t,len_int8_t);
    for(int i=0; i<len_int8_t; i++) {
        if (dest_int8_t[i]!=expect_int8_t[i] ) {
            printf("f_int8_t2=dest_int8_t:%d,expect_int8_t:%d\n",dest_int8_t[i],expect_int8_t[i]);
            __builtin_abort();
        }
    }

    uint8_t dest_uint8_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int len_uint8_t = sizeof(dest_uint8_t)/sizeof(dest_uint8_t[0]);
    uint8_t *src_uint8_t[16];
    uint8_t test_uint8_t[]= {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    for(int i=0; i<16; i++) {
        src_uint8_t[i]=malloc(sizeof(uint8_t*)*1);
        *src_uint8_t[i]=test_uint8_t[i];
    }
    uint8_t expect_uint8_t[] = {48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78};
    f_uint8_t(dest_uint8_t,src_uint8_t,len_uint8_t);
    for(int i=0; i<len_uint8_t; i++) {
        if (dest_uint8_t[i]!=expect_uint8_t[i] ) {
            printf("f_uint8_t2=dest_uint8_t:%d,expect_uint8_t:%d\n",dest_uint8_t[i],expect_uint8_t[i]);
            __builtin_abort();
        }
    }

    int16_t dest_int16_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int len_int16_t = sizeof(dest_int16_t)/sizeof(dest_int16_t[0]);
    int16_t *src_int16_t[16];
    int16_t test_int16_t[]= {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    for(int i=0; i<16; i++) {
        src_int16_t[i]=malloc(sizeof(int16_t*)*1);
        *src_int16_t[i]=test_int16_t[i];
    }
    int16_t expect_int16_t[] = {48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78};
    f_int16_t(dest_int16_t,src_int16_t,len_int16_t);
    for(int i=0; i<len_int16_t; i++) {
        if (dest_int16_t[i]!=expect_int16_t[i] ) {
            printf("f_int16_t2=dest_int16_t:%d,expect_int16_t:%d\n",dest_int16_t[i],expect_int16_t[i]);
            __builtin_abort();
        }
    }

    int32_t dest_int32_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int len_int32_t = sizeof(dest_int32_t)/sizeof(dest_int32_t[0]);
    int32_t *src_int32_t[16];
    int32_t test_int32_t[]= {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    for(int i=0; i<16; i++) {
        src_int32_t[i]=malloc(sizeof(int32_t*)*1);
        *src_int32_t[i]=test_int32_t[i];
    }
    int32_t expect_int32_t[] = {48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78};
    f_int32_t(dest_int32_t,src_int32_t,len_int32_t);
    for(int i=0; i<len_int32_t; i++) {
        if (dest_int32_t[i]!=expect_int32_t[i] ) {
            printf("f_int32_t2=dest_int32_t:%d,expect_int32_t:%d\n",dest_int32_t[i],expect_int32_t[i]);
            __builtin_abort();
        }
    }

    uint32_t dest_uint32_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int len_uint32_t = sizeof(dest_uint32_t)/sizeof(dest_uint32_t[0]);
    uint32_t *src_uint32_t[16];
    uint32_t test_uint32_t[]= {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    for(int i=0; i<16; i++) {
        src_uint32_t[i]=malloc(sizeof(uint32_t*)*1);
        *src_uint32_t[i]=test_uint32_t[i];
    }
    uint32_t expect_uint32_t[] = {48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78};
    f_uint32_t(dest_uint32_t,src_uint32_t,len_uint32_t);
    for(int i=0; i<len_uint32_t; i++) {
        if (dest_uint32_t[i]!=expect_uint32_t[i] ) {
            printf("f_uint32_t2=dest_uint32_t:%d,expect_uint32_t:%d\n",dest_uint32_t[i],expect_uint32_t[i]);
            __builtin_abort();
        }
    }

    uint16_t dest_uint16_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int len_uint16_t = sizeof(dest_uint16_t)/sizeof(dest_uint16_t[0]);
    uint16_t *src_uint16_t[16];
    uint16_t test_uint16_t[]= {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    for(int i=0; i<16; i++) {
        src_uint16_t[i]=malloc(sizeof(uint16_t*)*1);
        *src_uint16_t[i]=test_uint16_t[i];
    }
    uint16_t expect_uint16_t[] = {48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78};
    f_uint16_t(dest_uint16_t,src_uint16_t,len_uint16_t);
    for(int i=0; i<len_uint16_t; i++) {
        if (dest_uint16_t[i]!=expect_uint16_t[i] ) {
            printf("f_uint16_t2=dest_uint16_t:%d,expect_uint16_t:%d\n",dest_uint16_t[i],expect_uint16_t[i]);
            __builtin_abort();
        }
    }


    _Float16 dest__Float16[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    int len__Float16 = sizeof(dest__Float16)/sizeof(dest__Float16[0]);
    _Float16 *src__Float16[16];
    _Float16 test__Float16[]= {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    for(int i=0; i<16; i++) {
        src__Float16[i]=malloc(sizeof(_Float16*)*1);
        *src__Float16[i]=test__Float16[i];
    }
    _Float16 expect__Float16[] = {48.1,50.1,52.1,54.1,56.1,58.1,60.1,62.1,64.1,66.1,68.1,70.1,72.1,74.1,76.1,78.1};
    f__Float16(dest__Float16,src__Float16,len__Float16);
    for(int i=0; i<len__Float16; i++) {
        if (dest__Float16[i]!=expect__Float16[i] ) {
            printf("f__Float162=dest__Float16:%d,expect__Float16:%d\n",dest__Float16[i],expect__Float16[i]);
            __builtin_abort();
        }
    }

    float dest_float[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int len_float = sizeof(dest_float)/sizeof(dest_float[0]);
    float *src_float[16];
    float test_float[]= {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    for(int i=0; i<16; i++) {
        src_float[i]=malloc(sizeof(float*)*1);
        *src_float[i]=test_float[i];
    }
    float expect_float[] = {48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78};
    f_float(dest_float,src_float,len_float);
    for(int i=0; i<len_float; i++) {
        if (dest_float[i]!=expect_float[i] ) {
            printf("f_float2=dest_float:%d,expect_float:%d\n",dest_float[i],expect_float[i]);
            __builtin_abort();
        }
    }

    double dest_double[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int len_double = sizeof(dest_double)/sizeof(dest_double[0]);
    double *src_double[16];
    double test_double[]= {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    for(int i=0; i<16; i++) {
        src_double[i]=malloc(sizeof(double*)*1);
        *src_double[i]=test_double[i];
    }
    double expect_double[] = {48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78};
    f_double(dest_double,src_double,len_double);
    for(int i=0; i<len_double; i++) {
        if (dest_double[i]!=expect_double[i] ) {
            printf("f_double2=dest_double:%d,expect_double:%d\n",dest_double[i],expect_double[i]);
            __builtin_abort();
        }
    }



    return 0;
}