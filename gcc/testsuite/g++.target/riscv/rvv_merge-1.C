/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */
#include <stddef.h>
#include <riscv_vector.h>

void sub1(size_t n, const float*x, float*y, int*z, int a, int b)
{
    size_t l;

    rvv_float32m8_t vx, vy;
    rvv_int32m8_t vz;

    for ( ; (l = rvv_setvl_32m8(n)) > 0; n -= l)
    {
        vx = * (rvv_float32m8_t *) x;
        x += l;
        vy = * (rvv_float32m8_t *) y;
        y += l;
        vz = (vx < vy ? a : b);
        * (rvv_int32m8_t *) z = vz;
        z += l;
    }
}

void sub2(size_t n, const float*x, float*y, float *z)
{
    size_t l;

    rvv_float32m8_t vx, vy;
    rvv_float32m8_t vz;

    for ( ; (l = rvv_setvl_32m8(n)) > 0; n -= l)
    {
        vx = * (rvv_float32m8_t *) x;
        x += l;
        vy = * (rvv_float32m8_t *) y;
        y += l;
        vz = (vx < vy ? vx : vy);
        * (rvv_float32m8_t *) z = vz;
        z += l;
    }
}

void sub3(size_t n, const int*x, int*y, int *z)
{
    size_t l;

    rvv_int32m8_t vx, vy;
    rvv_int32m8_t vz;

    for ( ; (l = rvv_setvl_32m8(n)) > 0; n -= l)
    {
        vx = * (rvv_int32m8_t *) x;
        x += l;
        vy = * (rvv_int32m8_t *) y;
        y += l;
        vz = (vx < vy ? vx : vy);
        * (rvv_int32m8_t *) z = vz;
        z += l;
    }
}

void sub4(size_t n, const int*x, int*y, float *z, float a, float b)
{
    size_t l;

    rvv_int32m8_t vx, vy;
    rvv_float32m8_t vz;

    for ( ; (l = rvv_setvl_32m8(n)) > 0; n -= l)
    {
        vx = * (rvv_int32m8_t *) x;
        x += l;
        vy = * (rvv_int32m8_t *) y;
        y += l;
        vz = (vx < vy ? a : b);
        * (rvv_float32m8_t *) z = vz;
        z += l;
    }
}

/* { dg-final { scan-assembler-times "vmerge.vvm" 4 } } */
