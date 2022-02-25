/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlsseg3e8_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8mf4(v0, v1, v2, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu} 1 } } */

void
test1_vlsseg3e8_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8mf4(v0, v1, v2, base, bstride, 26);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*26,\s*e8,\s*mf4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlsseg3e8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 6 } } */

