/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg2ei8_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,const int64_t *base,vuint8mf8_t bindex,size_t vl)
{
    vluxseg2ei8_v_i64m1(v0, v1, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vluxseg2ei8_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,const int64_t *base,vuint8mf8_t bindex,size_t vl)
{
    vluxseg2ei8_v_i64m1(v0, v1, base, bindex, 13);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*13,\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg2ei8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 4 } } */

