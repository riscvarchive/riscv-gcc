/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg4e64ff_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,vbool32_t mask,vint64m2_t maskedoff0,vint64m2_t maskedoff1,vint64m2_t maskedoff2,vint64m2_t maskedoff3,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_i64m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg4e64ff_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,vbool32_t mask,vint64m2_t maskedoff0,vint64m2_t maskedoff1,vint64m2_t maskedoff2,vint64m2_t maskedoff3,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_i64m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, new_vl, 9);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*9,\s*e64,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg4e64ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs2r\.v} 8 } } */

