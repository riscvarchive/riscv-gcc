/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg2e64_v_i64m4_m(vint64m4_t *v0,vint64m4_t *v1,vbool16_t mask,vint64m4_t maskedoff0,vint64m4_t maskedoff1,const int64_t *base,size_t vl)
{
    vlseg2e64_v_i64m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg2e64_v_i64m4_m(vint64m4_t *v0,vint64m4_t *v1,vbool16_t mask,vint64m4_t maskedoff0,vint64m4_t maskedoff1,const int64_t *base,size_t vl)
{
    vlseg2e64_v_i64m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, 12);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*12,\s*e64,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg2e64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs4r\.v} 4 } } */

