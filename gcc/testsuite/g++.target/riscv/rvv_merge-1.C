/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */
#include <stddef.h>
#include <riscv_vector.h>

void sub1(size_t n, const float*x, float*y, int*z, int a, int b)
{
    size_t l;

    vfloat32m8_t vx, vy;
    vint32m8_t vz;

    for ( ; (l = rvv_setvl_32m8(n)) > 0; n -= l)
    {
        vx = * (vfloat32m8_t *) x;
        x += l;
        vy = * (vfloat32m8_t *) y;
        y += l;
        vz = (vx < vy ? a : b);
        * (vint32m8_t *) z = vz;
        z += l;
    }
}

void sub2(size_t n, const float*x, float*y, float *z)
{
    size_t l;

    vfloat32m8_t vx, vy;
    vfloat32m8_t vz;

    for ( ; (l = rvv_setvl_32m8(n)) > 0; n -= l)
    {
        vx = * (vfloat32m8_t *) x;
        x += l;
        vy = * (vfloat32m8_t *) y;
        y += l;
        vz = (vx < vy ? vx : vy);
        * (vfloat32m8_t *) z = vz;
        z += l;
    }
}

void sub3(size_t n, const int*x, int*y, int *z)
{
    size_t l;

    vint32m8_t vx, vy;
    vint32m8_t vz;

    for ( ; (l = rvv_setvl_32m8(n)) > 0; n -= l)
    {
        vx = * (vint32m8_t *) x;
        x += l;
        vy = * (vint32m8_t *) y;
        y += l;
        vz = (vx < vy ? vx : vy);
        * (vint32m8_t *) z = vz;
        z += l;
    }
}

void sub4(size_t n, const int*x, int*y, float *z, float a, float b)
{
    size_t l;

    vint32m8_t vx, vy;
    vfloat32m8_t vz;

    for ( ; (l = rvv_setvl_32m8(n)) > 0; n -= l)
    {
        vx = * (vint32m8_t *) x;
        x += l;
        vy = * (vint32m8_t *) y;
        y += l;
        vz = (vx < vy ? a : b);
        * (vfloat32m8_t *) z = vz;
        z += l;
    }
}

/* { dg-final { scan-assembler-times "vmerge.vvm" 4 } } */
