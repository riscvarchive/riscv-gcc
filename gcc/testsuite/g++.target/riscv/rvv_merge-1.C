/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */
#include <stddef.h>
#include <riscv_vector.h>

void sub2(size_t n, const float*x, float*y, float *z)
{
    size_t l;

    vfloat32m4_t vx, vy;
    vfloat32m4_t vz;

    for ( ; (l = vsetvl_e32m4(n)) > 0; n -= l)
    {
        vx = * (vfloat32m4_t *) x;
        x += l;
        vy = * (vfloat32m4_t *) y;
        y += l;
        vz = (vx < vy ? vx : vy);
        * (vfloat32m4_t *) z = vz;
        z += l;
    }
}

void sub3(size_t n, const int*x, int*y, int *z)
{
    size_t l;

    vint32m4_t vx, vy;
    vint32m4_t vz;

    for ( ; (l = vsetvl_e32m4(n)) > 0; n -= l)
    {
        vx = * (vint32m4_t *) x;
        x += l;
        vy = * (vint32m4_t *) y;
        y += l;
        vz = (vx < vy ? vx : vy);
        * (vint32m4_t *) z = vz;
        z += l;
    }
}

/* { dg-final { scan-assembler-times "vmerge.vvm" 1 } } */
/* { dg-final { scan-assembler-times "vmin.vv" 1 } } */
