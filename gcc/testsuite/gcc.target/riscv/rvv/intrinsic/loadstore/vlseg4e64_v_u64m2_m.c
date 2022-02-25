/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg4e64_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,vbool32_t mask,vuint64m2_t maskedoff0,vuint64m2_t maskedoff1,vuint64m2_t maskedoff2,vuint64m2_t maskedoff3,const uint64_t *base,size_t vl)
{
    vlseg4e64_v_u64m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg4e64_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,vbool32_t mask,vuint64m2_t maskedoff0,vuint64m2_t maskedoff1,vuint64m2_t maskedoff2,vuint64m2_t maskedoff3,const uint64_t *base,size_t vl)
{
    vlseg4e64_v_u64m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, 20);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*20,\s*e64,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg4e64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs2r\.v} 8 } } */

