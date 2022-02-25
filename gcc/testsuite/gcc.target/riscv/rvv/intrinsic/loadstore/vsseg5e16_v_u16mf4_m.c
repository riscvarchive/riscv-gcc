/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsseg5e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,size_t vl)
{
    vsseg5e16_v_u16mf4_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vsseg5e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,size_t vl)
{
    vsseg5e16_v_u16mf4_m(mask, base, v0, v1, v2, v3, v4, 12);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*12,\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsseg5e16\.v} 2 } } */
