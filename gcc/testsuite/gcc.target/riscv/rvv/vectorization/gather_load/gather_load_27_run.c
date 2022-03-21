/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize " } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "gather_load_27.c"
#include <stdio.h>

int main (void)
{
    int16_t dest_int16_t[] = {255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255};
    int16_t src_int16_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    int32_t other_int16_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int16_t expect_int16_t[] = {48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78};
    int32_t mask_int16_t = 0;
    int stride_int16_t = 1;
    int len = 16;
    f_int16_t_BITS(dest_int16_t,src_int16_t,other_int16_t,mask_int16_t,stride_int16_t,len);
    for(int i=0; i<len; i++) {
        if (dest_int16_t[i]!=expect_int16_t[i] ) {
            printf("f_int16_t_BITS=index:%d,dest_int16_t:%d,expect_int16_t:%d\n",i,dest_int16_t[i],expect_int16_t[i]);
            __builtin_abort();
        }
    }

    uint16_t dest_uint16_t[] = {255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255};
    uint16_t src_uint16_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    int32_t other_uint16_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint16_t expect_uint16_t[] = {48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78};
    int32_t mask_uint16_t = 0;
    int stride_uint16_t = 1;
    f_uint16_t_BITS(dest_uint16_t,src_uint16_t,other_uint16_t,mask_uint16_t,stride_uint16_t,len);
    for(int i=0; i<len; i++) {
        if (dest_uint16_t[i]!=expect_uint16_t[i] ) {
            printf("f_uint16_t_BITS=index:%d,dest_uint16_t:%d,expect_uint16_t:%d\n",i,dest_uint16_t[i],expect_uint16_t[i]);
            __builtin_abort();
        }
    }

    int64_t dest_int64_t[] = {255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255};
    int64_t src_int64_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    int32_t other_int64_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int64_t expect_int64_t[] = {48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78};
    int32_t mask_int64_t = 0;
    int stride_int64_t = 1;
    f_int64_t_BITS(dest_int64_t,src_int64_t,other_int64_t,mask_int64_t,stride_int64_t,len);
    for(int i=0; i<len; i++) {
        if (dest_int64_t[i]!=expect_int64_t[i] ) {
            printf("f_int64_t_BITS=index:%d,dest_int64_t:%d,expect_int64_t:%d\n",i,dest_int64_t[i],expect_int64_t[i]);
            __builtin_abort();
        }
    }

    uint64_t dest_uint64_t[] = {255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255};
    uint64_t src_uint64_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    int32_t other_uint64_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint64_t expect_uint64_t[] = {48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78};
    int32_t mask_uint64_t = 0;
    int stride_uint64_t = 1;
    f_uint64_t_BITS(dest_uint64_t,src_uint64_t,other_uint64_t,mask_uint64_t,stride_uint64_t,len);
    for(int i=0; i<len; i++) {
        if (dest_uint64_t[i]!=expect_uint64_t[i] ) {
            printf("f_uint64_t_BITS=index:%d,dest_uint64_t:%d,expect_uint64_t:%d\n",i,dest_uint64_t[i],expect_uint64_t[i]);
            __builtin_abort();
        }
    }

    _Float16 dest__Float16[] = {255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0};
    _Float16 src__Float16[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    int32_t other__Float16[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    _Float16 expect__Float16[] = {48.1,50.1,52.1,54.1,56.1,58.1,60.1,62.1,64.1,66.1,68.1,70.1,72.1,74.1,76.1,78.1};
    int32_t mask__Float16 = 0;
    int stride__Float16 = 1;
    f__Float16_BITS(dest__Float16,src__Float16,other__Float16,mask__Float16,stride__Float16,len);
    for(int i=0; i<len; i++) {
        if (dest__Float16[i]!=expect__Float16[i] ) {
            printf("f__Float16_BITS2=index:%d,dest__Float16:%2.1f,expect__Float16:%2.1f\n",i,dest__Float16[i],expect__Float16[i]);
            __builtin_abort();
        }
    }



    double dest_double[] = {255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0};
    double src_double[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    int32_t other_double[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    double expect_double[] = {48.1,50.1,52.1,54.1,56.1,58.1,60.1,62.1,64.1,66.1,68.1,70.1,72.1,74.1,76.1,78.1};
    int32_t mask_double = 0;
    int stride_double = 1;
    f_double_BITS(dest_double,src_double,other_double,mask_double,stride_double,len);
    for(int i=0; i<len; i++) {
        if (dest_double[i]!=expect_double[i] ) {
            printf("f_double_BITS2=index:%d,dest_double:%2.1f,expect_double:%2.1f\n",i,dest_double[i],expect_double[i]);
            __builtin_abort();
        }
    }

    int32_t dest_int32_t[] = {255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255};
    int32_t src_int32_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    int16_t other_int32_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int32_t expect_int32_t[] = {48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78};
    int16_t mask_int32_t = 0;
    int stride_int32_t = 1;
    f_int32_t_BITS(dest_int32_t,src_int32_t,other_int32_t,mask_int32_t,stride_int32_t,len);
    for(int i=0; i<len; i++) {
        if (dest_int32_t[i]!=expect_int32_t[i] ) {
            printf("f_int32_t_BITS=index:%d,dest_int32_t:%d,expect_int32_t:%d\n",i,dest_int32_t[i],expect_int32_t[i]);
            __builtin_abort();
        }
    }

    uint32_t dest_uint32_t[] = {255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255};
    uint32_t src_uint32_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    int16_t other_uint32_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint32_t expect_uint32_t[] = {48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78};
    int16_t mask_uint32_t = 0;
    int stride_uint32_t = 1;
    f_uint32_t_BITS(dest_uint32_t,src_uint32_t,other_uint32_t,mask_uint32_t,stride_uint32_t,len);
    for(int i=0; i<len; i++) {
        if (dest_uint32_t[i]!=expect_uint32_t[i] ) {
            printf("f_uint32_t_BITS=index:%d,dest_uint32_t:%d,expect_uint32_t:%d\n",i,dest_uint32_t[i],expect_uint32_t[i]);
            __builtin_abort();
        }
    }

    float dest_float[] = {255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0,255.0};
    float src_float[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    int16_t other_float[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    float expect_float[] = {48.1,50.1,52.1,54.1,56.1,58.1,60.1,62.1,64.1,66.1,68.1,70.1,72.1,74.1,76.1,78.1};
    int16_t mask_float = 0;
    int stride_float = 1;
    f_float_BITS(dest_float,src_float,other_float,mask_float,stride_float,len);
    for(int i=0; i<len; i++) {
        if (dest_float[i]!=expect_float[i] ) {
            printf("f_float_BITS2=index:%d,dest_float:%2.1f,expect_float:%2.1f\n",i,dest_float[i],expect_float[i]);
            __builtin_abort();
        }
    }

    return 0;
}
