/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg6ei32_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,const uint16_t *base,vuint32mf2_t bindex,size_t vl)
{
    vloxseg6ei32_v_u16mf4(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu} 1 } } */

void
test1_vloxseg6ei32_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,const uint16_t *base,vuint32mf2_t bindex,size_t vl)
{
    vloxseg6ei32_v_u16mf4(v0, v1, v2, v3, v4, v5, base, bindex, 8);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*8,\s*e16,\s*mf4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg6ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 12 } } */

