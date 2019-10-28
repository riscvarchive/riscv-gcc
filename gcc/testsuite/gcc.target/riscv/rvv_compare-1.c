/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */
#include <stddef.h>
#include <riscv_vector.h>

void add1(size_t n, const int*x, int*y, int*z)
{
    size_t l;

    rvvint32m8_t vx, vy;
    rvvint32m8_t vz;
    rvvbool4_t r;

    for ( ; (l = rvvsetvl32m8(n)) > 0; n -= l)
    {
        vx = * (rvvint32m8_t *) x;
        x += l;
        vy = * (rvvint32m8_t *) y;
        y += l;
	r = __builtin_riscv_cmplt_int32m8(vx, vy);
        vz = __builtin_riscv_add_vv_int32m8_mask(r, vz, vx, vy);
        * (rvvint32m8_t *) z = vz;
        z += l;
    }
}
/* { dg-final { scan-assembler "vmslt.vv" } } */
/* { dg-final { scan-assembler "vadd.vv" } } */
