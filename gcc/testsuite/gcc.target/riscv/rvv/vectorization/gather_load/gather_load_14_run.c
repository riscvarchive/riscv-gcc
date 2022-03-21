/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize " } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "gather_load_14.c"
#include <stdio.h>

int main (void)
{
    int16_t dest_int16_t_int8_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int16_t src1_int16_t_int8_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    int8_t src2_int16_t_int8_t[] = {48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
    uint32_t indices_int16_t_int8_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int16_t expect_int16_t_int8_t[] = {96,99,102,105,108,111,114,117,120,123,126,129,132,135,138,141};
    int len_int16_t_int8_t = sizeof(indices_int16_t_int8_t)/sizeof(indices_int16_t_int8_t[0]);
    f_int16_t_int8_t(dest_int16_t_int8_t,src1_int16_t_int8_t,src2_int16_t_int8_t,indices_int16_t_int8_t,len_int16_t_int8_t);
    for(int i=0; i<len_int16_t_int8_t; i++) {
        if (dest_int16_t_int8_t[i]!=expect_int16_t_int8_t[i] ) {
            printf("f_int16_t_int8_t=dest_int16_t_int8_t:%d,expect_int16_t_int8_t:%d\n",dest_int16_t_int8_t[i],expect_int16_t_int8_t[i]);
            __builtin_abort();
        }
    }

    int32_t dest_int32_t_int8_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int32_t src1_int32_t_int8_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    int8_t src2_int32_t_int8_t[] = {48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
    uint32_t indices_int32_t_int8_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int32_t expect_int32_t_int8_t[] = {96,99,102,105,108,111,114,117,120,123,126,129,132,135,138,141};
    int len_int32_t_int8_t = sizeof(indices_int32_t_int8_t)/sizeof(indices_int32_t_int8_t[0]);
    f_int32_t_int8_t(dest_int32_t_int8_t,src1_int32_t_int8_t,src2_int32_t_int8_t,indices_int32_t_int8_t,len_int32_t_int8_t);
    for(int i=0; i<len_int32_t_int8_t; i++) {
        if (dest_int32_t_int8_t[i]!=expect_int32_t_int8_t[i] ) {
            printf("f_int32_t_int8_t=dest_int32_t_int8_t:%d,expect_int32_t_int8_t:%d\n",dest_int32_t_int8_t[i],expect_int32_t_int8_t[i]);
            __builtin_abort();
        }
    }

    int64_t dest_int64_t_int8_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int64_t src1_int64_t_int8_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    int8_t src2_int64_t_int8_t[] = {48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
    uint32_t indices_int64_t_int8_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int64_t expect_int64_t_int8_t[] = {96,99,102,105,108,111,114,117,120,123,126,129,132,135,138,141};
    int len_int64_t_int8_t = sizeof(indices_int64_t_int8_t)/sizeof(indices_int64_t_int8_t[0]);
    f_int64_t_int8_t(dest_int64_t_int8_t,src1_int64_t_int8_t,src2_int64_t_int8_t,indices_int64_t_int8_t,len_int64_t_int8_t);
    for(int i=0; i<len_int64_t_int8_t; i++) {
        if (dest_int64_t_int8_t[i]!=expect_int64_t_int8_t[i] ) {
            printf("f_int64_t_int8_t=dest_int64_t_int8_t:%d,expect_int64_t_int8_t:%d\n",dest_int64_t_int8_t[i],expect_int64_t_int8_t[i]);
            __builtin_abort();
        }
    }

    _Float16 dest__Float16_int8_t[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    _Float16 src1__Float16_int8_t[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    int8_t src2__Float16_int8_t[] = {48.0,49.0,50.0,51.0,52.0,53.0,54.0,55.0,56.0,57.0,58.0,59.0,60.0,61.0,62.0,63.0};
    uint32_t indices__Float16_int8_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    _Float16 expect__Float16_int8_t[] = {96.1,99.1,102.1,105.1,108.1,111.1,114.1,117.1,120.1,123.1,126.1,129.1,132.1,135.1,138.1,141.1};
    int len__Float16_int8_t = sizeof(indices__Float16_int8_t)/sizeof(indices__Float16_int8_t[0]);
    f__Float16_int8_t(dest__Float16_int8_t,src1__Float16_int8_t,src2__Float16_int8_t,indices__Float16_int8_t,len__Float16_int8_t);
    for(int i=0; i<len__Float16_int8_t; i++) {
        if (dest__Float16_int8_t[i]!=expect__Float16_int8_t[i] ) {
            printf("f__Float16_int8_t=dest__Float16_int8_t:%d,expect__Float16_int8_t:%d\n",dest__Float16_int8_t[i],expect__Float16_int8_t[i]);
            __builtin_abort();
        }
    }

    float dest_float_int8_t[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    float src1_float_int8_t[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    int8_t src2_float_int8_t[] = {48.0,49.0,50.0,51.0,52.0,53.0,54.0,55.0,56.0,57.0,58.0,59.0,60.0,61.0,62.0,63.0};
    uint32_t indices_float_int8_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    float expect_float_int8_t[] = {96.1,99.1,102.1,105.1,108.1,111.1,114.1,117.1,120.1,123.1,126.1,129.1,132.1,135.1,138.1,141.1};
    int len_float_int8_t = sizeof(indices_float_int8_t)/sizeof(indices_float_int8_t[0]);
    f_float_int8_t(dest_float_int8_t,src1_float_int8_t,src2_float_int8_t,indices_float_int8_t,len_float_int8_t);
    for(int i=0; i<len_float_int8_t; i++) {
        if (dest_float_int8_t[i]!=expect_float_int8_t[i] ) {
            printf("f_float_int8_t=dest_float_int8_t:%d,expect_float_int8_t:%d\n",dest_float_int8_t[i],expect_float_int8_t[i]);
            __builtin_abort();
        }
    }

    double dest_double_int8_t[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    double src1_double_int8_t[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    int8_t src2_double_int8_t[] = {48.0,49.0,50.0,51.0,52.0,53.0,54.0,55.0,56.0,57.0,58.0,59.0,60.0,61.0,62.0,63.0};
    uint32_t indices_double_int8_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    double expect_double_int8_t[] = {96.1,99.1,102.1,105.1,108.1,111.1,114.1,117.1,120.1,123.1,126.1,129.1,132.1,135.1,138.1,141.1};
    int len_double_int8_t = sizeof(indices_double_int8_t)/sizeof(indices_double_int8_t[0]);
    f_double_int8_t(dest_double_int8_t,src1_double_int8_t,src2_double_int8_t,indices_double_int8_t,len_double_int8_t);
    for(int i=0; i<len_double_int8_t; i++) {
        if (dest_double_int8_t[i]!=expect_double_int8_t[i] ) {
            printf("f_double_int8_t=dest_double_int8_t:%d,expect_double_int8_t:%d\n",dest_double_int8_t[i],expect_double_int8_t[i]);
            __builtin_abort();
        }
    }

    int32_t dest_int32_t_int16_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int32_t src1_int32_t_int16_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    int16_t src2_int32_t_int16_t[] = {48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
    uint32_t indices_int32_t_int16_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int32_t expect_int32_t_int16_t[] = {96,99,102,105,108,111,114,117,120,123,126,129,132,135,138,141};
    int len_int32_t_int16_t = sizeof(indices_int32_t_int16_t)/sizeof(indices_int32_t_int16_t[0]);
    f_int32_t_int16_t(dest_int32_t_int16_t,src1_int32_t_int16_t,src2_int32_t_int16_t,indices_int32_t_int16_t,len_int32_t_int16_t);
    for(int i=0; i<len_int32_t_int16_t; i++) {
        if (dest_int32_t_int16_t[i]!=expect_int32_t_int16_t[i] ) {
            printf("f_int32_t_int16_t=dest_int32_t_int16_t:%d,expect_int32_t_int16_t:%d\n",dest_int32_t_int16_t[i],expect_int32_t_int16_t[i]);
            __builtin_abort();
        }
    }

    int64_t dest_int64_t_int16_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int64_t src1_int64_t_int16_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    int16_t src2_int64_t_int16_t[] = {48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
    uint32_t indices_int64_t_int16_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int64_t expect_int64_t_int16_t[] = {96,99,102,105,108,111,114,117,120,123,126,129,132,135,138,141};
    int len_int64_t_int16_t = sizeof(indices_int64_t_int16_t)/sizeof(indices_int64_t_int16_t[0]);
    f_int64_t_int16_t(dest_int64_t_int16_t,src1_int64_t_int16_t,src2_int64_t_int16_t,indices_int64_t_int16_t,len_int64_t_int16_t);
    for(int i=0; i<len_int64_t_int16_t; i++) {
        if (dest_int64_t_int16_t[i]!=expect_int64_t_int16_t[i] ) {
            printf("f_int64_t_int16_t=dest_int64_t_int16_t:%d,expect_int64_t_int16_t:%d\n",dest_int64_t_int16_t[i],expect_int64_t_int16_t[i]);
            __builtin_abort();
        }
    }


    float dest_float_int16_t[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    float src1_float_int16_t[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    int16_t src2_float_int16_t[] = {48.0,49.0,50.0,51.0,52.0,53.0,54.0,55.0,56.0,57.0,58.0,59.0,60.0,61.0,62.0,63.0};
    uint32_t indices_float_int16_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    float expect_float_int16_t[] = {96.1,99.1,102.1,105.1,108.1,111.1,114.1,117.1,120.1,123.1,126.1,129.1,132.1,135.1,138.1,141.1};
    int len_float_int16_t = sizeof(indices_float_int16_t)/sizeof(indices_float_int16_t[0]);
    f_float_int16_t(dest_float_int16_t,src1_float_int16_t,src2_float_int16_t,indices_float_int16_t,len_float_int16_t);
    for(int i=0; i<len_float_int16_t; i++) {
        if (dest_float_int16_t[i]!=expect_float_int16_t[i] ) {
            printf("f_float_int16_t=dest_float_int16_t:%d,expect_float_int16_t:%d\n",dest_float_int16_t[i],expect_float_int16_t[i]);
            __builtin_abort();
        }
    }

    double dest_double_int16_t[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    double src1_double_int16_t[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    int16_t src2_double_int16_t[] = {48.0,49.0,50.0,51.0,52.0,53.0,54.0,55.0,56.0,57.0,58.0,59.0,60.0,61.0,62.0,63.0};
    uint32_t indices_double_int16_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    double expect_double_int16_t[] = {96.1,99.1,102.1,105.1,108.1,111.1,114.1,117.1,120.1,123.1,126.1,129.1,132.1,135.1,138.1,141.1};
    int len_double_int16_t = sizeof(indices_double_int16_t)/sizeof(indices_double_int16_t[0]);
    f_double_int16_t(dest_double_int16_t,src1_double_int16_t,src2_double_int16_t,indices_double_int16_t,len_double_int16_t);
    for(int i=0; i<len_double_int16_t; i++) {
        if (dest_double_int16_t[i]!=expect_double_int16_t[i] ) {
            printf("f_double_int16_t=dest_double_int16_t:%d,expect_double_int16_t:%d\n",dest_double_int16_t[i],expect_double_int16_t[i]);
            __builtin_abort();
        }
    }


    int64_t dest_int64_t_int32_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int64_t src1_int64_t_int32_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    int32_t src2_int64_t_int32_t[] = {48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
    uint32_t indices_int64_t_int32_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int64_t expect_int64_t_int32_t[] = {96,99,102,105,108,111,114,117,120,123,126,129,132,135,138,141};
    int len_int64_t_int32_t = sizeof(indices_int64_t_int32_t)/sizeof(indices_int64_t_int32_t[0]);
    f_int64_t_int32_t(dest_int64_t_int32_t,src1_int64_t_int32_t,src2_int64_t_int32_t,indices_int64_t_int32_t,len_int64_t_int32_t);
    for(int i=0; i<len_int64_t_int32_t; i++) {
        if (dest_int64_t_int32_t[i]!=expect_int64_t_int32_t[i] ) {
            printf("f_int64_t_int32_t=dest_int64_t_int32_t:%d,expect_int64_t_int32_t:%d\n",dest_int64_t_int32_t[i],expect_int64_t_int32_t[i]);
            __builtin_abort();
        }
    }


    double dest_double_int32_t[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    double src1_double_int32_t[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    int32_t src2_double_int32_t[] = {48.0,49.0,50.0,51.0,52.0,53.0,54.0,55.0,56.0,57.0,58.0,59.0,60.0,61.0,62.0,63.0};
    uint32_t indices_double_int32_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    double expect_double_int32_t[] = {96.1,99.1,102.1,105.1,108.1,111.1,114.1,117.1,120.1,123.1,126.1,129.1,132.1,135.1,138.1,141.1};
    int len_double_int32_t = sizeof(indices_double_int32_t)/sizeof(indices_double_int32_t[0]);
    f_double_int32_t(dest_double_int32_t,src1_double_int32_t,src2_double_int32_t,indices_double_int32_t,len_double_int32_t);
    for(int i=0; i<len_double_int32_t; i++) {
        if (dest_double_int32_t[i]!=expect_double_int32_t[i] ) {
            printf("f_double_int32_t=dest_double_int32_t:%d,expect_double_int32_t:%d\n",dest_double_int32_t[i],expect_double_int32_t[i]);
            __builtin_abort();
        }
    }


    return 0;
}