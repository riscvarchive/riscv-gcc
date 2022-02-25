/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg2ei64_v_i64m2_m(vbool32_t mask,int64_t *base,vuint64m2_t bindex,vint64m2_t v0,vint64m2_t v1,size_t vl)
{
    vsuxseg2ei64_v_i64m2_m(mask, base, bindex, v0, v1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxseg2ei64_v_i64m2_m(vbool32_t mask,int64_t *base,vuint64m2_t bindex,vint64m2_t v0,vint64m2_t v1,size_t vl)
{
    vsuxseg2ei64_v_i64m2_m(mask, base, bindex, v0, v1, 28);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*28,\s*e64,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg2ei64\.v} 2 } } */
