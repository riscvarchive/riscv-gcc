/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg7ei16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,const uint16_t *base,vuint16mf4_t bindex,size_t vl)
{
    vluxseg7ei16_v_u16mf4_tu(v0, v1, v2, v3, v4, v5, v6, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu} 1 } } */

void
test1_vluxseg7ei16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,const uint16_t *base,vuint16mf4_t bindex,size_t vl)
{
    vluxseg7ei16_v_u16mf4_tu(v0, v1, v2, v3, v4, v5, v6, base, bindex, 11);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*11,\s*e16,\s*mf4,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg7ei16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 14 } } */

