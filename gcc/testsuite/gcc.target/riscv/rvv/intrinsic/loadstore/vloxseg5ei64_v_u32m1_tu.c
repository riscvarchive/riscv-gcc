/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg5ei64_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,const uint32_t *base,vuint64m2_t bindex,size_t vl)
{
    vloxseg5ei64_v_u32m1_tu(v0, v1, v2, v3, v4, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu} 1 } } */

void
test1_vloxseg5ei64_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,const uint32_t *base,vuint64m2_t bindex,size_t vl)
{
    vloxseg5ei64_v_u32m1_tu(v0, v1, v2, v3, v4, base, bindex, 20);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*20,\s*e32,\s*m1,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg5ei64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 10 } } */

