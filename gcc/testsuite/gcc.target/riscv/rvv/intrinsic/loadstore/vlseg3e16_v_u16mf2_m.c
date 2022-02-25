/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg3e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vbool32_t mask,vuint16mf2_t maskedoff0,vuint16mf2_t maskedoff1,vuint16mf2_t maskedoff2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg3e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vbool32_t mask,vuint16mf2_t maskedoff0,vuint16mf2_t maskedoff1,vuint16mf2_t maskedoff2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, 13);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*13,\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg3e16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 6 } } */

