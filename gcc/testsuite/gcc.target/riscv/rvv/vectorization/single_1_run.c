/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "single_1.c"
#include <stdio.h>



int main(void)
{
    int real_length = 16/sizeof(uint8_t);
    uint8_t uint8_t_expected = 1;
    uint8_t arr_uint8_t[real_length];
    test_uint8_t(arr_uint8_t);
    for(int i=0; i<real_length; ++i)
        if (arr_uint8_t[i] != uint8_t_expected)
            __builtin_abort ();

    real_length = 16/sizeof(int8_t);
    int8_t int8_t_expected = 2;
    int8_t arr_int8_t[real_length];
    test_int8_t(arr_int8_t);
    for(int i=0; i<real_length; ++i)
        if (arr_int8_t[i] != int8_t_expected)
            __builtin_abort ();

    real_length = 16/sizeof(uint16_t);
    uint16_t uint16_t_expected = 3;
    uint16_t arr_uint16_t[real_length];
    test_uint16_t(arr_uint16_t);
    for(int i=0; i<real_length; ++i)
        if (arr_uint16_t[i] != uint16_t_expected)
            __builtin_abort ();

    real_length = 16/sizeof(int16_t);
    int16_t int16_t_expected = 4;
    int16_t arr_int16_t[real_length];
    test_int16_t(arr_int16_t);
    for(int i=0; i<real_length; ++i)
        if (arr_int16_t[i] != int16_t_expected)
            __builtin_abort ();

    real_length = 16/sizeof(uint32_t);
    uint32_t uint32_t_expected = 5;
    uint32_t arr_uint32_t[real_length];
    test_uint32_t(arr_uint32_t);
    for(int i=0; i<real_length; ++i)
        if (arr_uint32_t[i] != uint32_t_expected)
            __builtin_abort ();

    real_length = 16/sizeof(int32_t);
    int32_t int32_t_expected = 6;
    int32_t arr_int32_t[real_length];
    test_int32_t(arr_int32_t);
    for(int i=0; i<real_length; ++i)
        if (arr_int32_t[i] != int32_t_expected)
            __builtin_abort ();

    real_length = 16/sizeof(uint64_t);
    uint64_t uint64_t_expected = 7;
    uint64_t arr_uint64_t[real_length];
    test_uint64_t(arr_uint64_t);
    for(int i=0; i<real_length; ++i)
        if (arr_uint64_t[i] != uint64_t_expected)
            __builtin_abort ();

    real_length = 16/sizeof(int64_t);
    int64_t int64_t_expected = 8;
    int64_t arr_int64_t[real_length];
    test_int64_t(arr_int64_t);
    for(int i=0; i<real_length; ++i)
        if (arr_int64_t[i] != int64_t_expected)
            __builtin_abort ();

    real_length = 16/sizeof(_Float16);
    _Float16 _Float16_expected = 1.0f;
    _Float16 arr_Float16[real_length];
    test__Float16(arr_Float16);
    for(int i=0; i<real_length; ++i)
        if (arr_Float16[i] != _Float16_expected)
            __builtin_abort ();

    real_length = 16/sizeof(float);
    float float_expected = 2.0f;
    float arr_float[real_length];
    test_float(arr_float);
    for(int i=0; i<real_length; ++i)
        if (arr_float[i] != float_expected)
            __builtin_abort ();

    real_length = 16/sizeof(double);
    double double_expected = 3.0f;
    double arr_double[real_length];
    test_double(arr_double);
    for(int i=0; i<real_length; ++i)
        if (arr_double[i] != double_expected)
            __builtin_abort ();
    return 0;
}
