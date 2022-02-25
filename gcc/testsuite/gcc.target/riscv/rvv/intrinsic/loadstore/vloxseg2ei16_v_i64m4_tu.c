/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg2ei16_v_i64m4_tu(vint64m4_t *v0,vint64m4_t *v1,const int64_t *base,vuint16m1_t bindex,size_t vl)
{
    vloxseg2ei16_v_i64m4_tu(v0, v1, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu} 1 } } */

void
test1_vloxseg2ei16_v_i64m4_tu(vint64m4_t *v0,vint64m4_t *v1,const int64_t *base,vuint16m1_t bindex,size_t vl)
{
    vloxseg2ei16_v_i64m4_tu(v0, v1, base, bindex, 16);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*16,\s*e64,\s*m4,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg2ei16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs4r\.v} 4 } } */

