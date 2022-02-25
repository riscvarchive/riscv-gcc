/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg4ei64_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,const uint16_t *base,vuint64m2_t bindex,size_t vl)
{
    vloxseg4ei64_v_u16mf2(v0, v1, v2, v3, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu} 1 } } */

void
test1_vloxseg4ei64_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,const uint16_t *base,vuint64m2_t bindex,size_t vl)
{
    vloxseg4ei64_v_u16mf2(v0, v1, v2, v3, base, bindex, 27);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*27,\s*e16,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg4ei64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 8 } } */

