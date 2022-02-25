/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg5ei16_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vbool64_t mask,vuint32mf2_t maskedoff0,vuint32mf2_t maskedoff1,vuint32mf2_t maskedoff2,vuint32mf2_t maskedoff3,vuint32mf2_t maskedoff4,const uint32_t *base,vuint16mf4_t bindex,size_t vl)
{
    vluxseg5ei16_v_u32mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vluxseg5ei16_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vbool64_t mask,vuint32mf2_t maskedoff0,vuint32mf2_t maskedoff1,vuint32mf2_t maskedoff2,vuint32mf2_t maskedoff3,vuint32mf2_t maskedoff4,const uint32_t *base,vuint16mf4_t bindex,size_t vl)
{
    vluxseg5ei16_v_u32mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bindex, 25);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*25,\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg5ei16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse32\.v} 10 } } */

