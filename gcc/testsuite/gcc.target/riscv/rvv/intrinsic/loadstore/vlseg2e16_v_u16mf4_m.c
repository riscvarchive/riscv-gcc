/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg2e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg2e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, 29);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*29,\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg2e16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 4 } } */

