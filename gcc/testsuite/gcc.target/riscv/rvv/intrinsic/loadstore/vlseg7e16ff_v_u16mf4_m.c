/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg7e16ff_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,vuint16mf4_t maskedoff2,vuint16mf4_t maskedoff3,vuint16mf4_t maskedoff4,vuint16mf4_t maskedoff5,vuint16mf4_t maskedoff6,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_u16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg7e16ff_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,vuint16mf4_t maskedoff2,vuint16mf4_t maskedoff3,vuint16mf4_t maskedoff4,vuint16mf4_t maskedoff5,vuint16mf4_t maskedoff6,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_u16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, new_vl, 25);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*25,\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg7e16ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 14 } } */

