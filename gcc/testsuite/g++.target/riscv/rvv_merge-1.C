/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */
#include <stddef.h>
#include <riscv_vector.h>

void sub1(size_t n, const float*x, float*y, int*z, int a, int b)
{
    size_t l;

    rvvfloat32m8_t vx, vy;
    rvvint32m8_t vz;

    for ( ; (l = rvvsetvl32m8(n)) > 0; n -= l)
    {
        vx = * (rvvfloat32m8_t *) x;
        x += l;
        vy = * (rvvfloat32m8_t *) y;
        y += l;
        vz = (vx < vy ? a : b);
        * (rvvint32m8_t *) z = vz;
        z += l;
    }
}

void sub2(size_t n, const float*x, float*y, float *z)
{
    size_t l;

    rvvfloat32m8_t vx, vy;
    rvvfloat32m8_t vz;

    for ( ; (l = rvvsetvl32m8(n)) > 0; n -= l)
    {
        vx = * (rvvfloat32m8_t *) x;
        x += l;
        vy = * (rvvfloat32m8_t *) y;
        y += l;
        vz = (vx < vy ? vx : vy);
        * (rvvfloat32m8_t *) z = vz;
        z += l;
    }
}

void sub3(size_t n, const int*x, int*y, int *z)
{
    size_t l;

    rvvint32m8_t vx, vy;
    rvvint32m8_t vz;

    for ( ; (l = rvvsetvl32m8(n)) > 0; n -= l)
    {
        vx = * (rvvint32m8_t *) x;
        x += l;
        vy = * (rvvint32m8_t *) y;
        y += l;
        vz = (vx < vy ? vx : vy);
        * (rvvint32m8_t *) z = vz;
        z += l;
    }
}

void sub4(size_t n, const int*x, int*y, float *z, float a, float b)
{
    size_t l;

    rvvint32m8_t vx, vy;
    rvvfloat32m8_t vz;

    for ( ; (l = rvvsetvl32m8(n)) > 0; n -= l)
    {
        vx = * (rvvint32m8_t *) x;
        x += l;
        vy = * (rvvint32m8_t *) y;
        y += l;
        vz = (vx < vy ? a : b);
        * (rvvfloat32m8_t *) z = vz;
        z += l;
    }
}

/* { dg-final { scan-assembler-times "vmerge.vvm" 4 } } */
