/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg4ei64_v_i32m2_tu(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,const int32_t *base,vuint64m4_t bindex,size_t vl)
{
    vluxseg4ei64_v_i32m2_tu(v0, v1, v2, v3, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu} 1 } } */

void
test1_vluxseg4ei64_v_i32m2_tu(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,const int32_t *base,vuint64m4_t bindex,size_t vl)
{
    vluxseg4ei64_v_i32m2_tu(v0, v1, v2, v3, base, bindex, 6);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*6,\s*e32,\s*m2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg4ei64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs2r\.v} 8 } } */

