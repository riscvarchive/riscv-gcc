/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg4e32ff_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vbool64_t mask,vuint32mf2_t maskedoff0,vuint32mf2_t maskedoff1,vuint32mf2_t maskedoff2,vuint32mf2_t maskedoff3,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_u32mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg4e32ff_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vbool64_t mask,vuint32mf2_t maskedoff0,vuint32mf2_t maskedoff1,vuint32mf2_t maskedoff2,vuint32mf2_t maskedoff3,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_u32mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, 5);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*5,\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg4e32ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse32\.v} 8 } } */

