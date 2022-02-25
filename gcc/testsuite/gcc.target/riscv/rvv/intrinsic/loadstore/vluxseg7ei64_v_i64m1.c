/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg7ei64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,const int64_t *base,vuint64m1_t bindex,size_t vl)
{
    vluxseg7ei64_v_i64m1(v0, v1, v2, v3, v4, v5, v6, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vluxseg7ei64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,const int64_t *base,vuint64m1_t bindex,size_t vl)
{
    vluxseg7ei64_v_i64m1(v0, v1, v2, v3, v4, v5, v6, base, bindex, 27);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*27,\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg7ei64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 14 } } */

