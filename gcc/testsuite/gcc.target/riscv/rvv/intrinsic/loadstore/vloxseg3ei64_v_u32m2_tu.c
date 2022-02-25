/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg3ei64_v_u32m2_tu(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,const uint32_t *base,vuint64m4_t bindex,size_t vl)
{
    vloxseg3ei64_v_u32m2_tu(v0, v1, v2, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu} 1 } } */

void
test1_vloxseg3ei64_v_u32m2_tu(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,const uint32_t *base,vuint64m4_t bindex,size_t vl)
{
    vloxseg3ei64_v_u32m2_tu(v0, v1, v2, base, bindex, 6);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*6,\s*e32,\s*m2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg3ei64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs2r\.v} 6 } } */

