/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg3e32ff_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vbool32_t mask,vuint32m1_t maskedoff0,vuint32m1_t maskedoff1,vuint32m1_t maskedoff2,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_u32m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg3e32ff_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vbool32_t mask,vuint32m1_t maskedoff0,vuint32m1_t maskedoff1,vuint32m1_t maskedoff2,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_u32m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, 19);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*19,\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg3e32ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 6 } } */

