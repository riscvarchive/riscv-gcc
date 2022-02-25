/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsseg5e8_v_u8m1(uint8_t *base,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,size_t vl)
{
    vsseg5e8_v_u8m1(base, v0, v1, v2, v3, v4, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vsseg5e8_v_u8m1(uint8_t *base,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,size_t vl)
{
    vsseg5e8_v_u8m1(base, v0, v1, v2, v3, v4, 22);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*22,\s*e8,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsseg5e8\.v} 2 } } */
