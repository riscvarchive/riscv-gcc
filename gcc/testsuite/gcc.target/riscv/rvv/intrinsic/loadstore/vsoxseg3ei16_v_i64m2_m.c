/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg3ei16_v_i64m2_m(vbool32_t mask,int64_t *base,vuint16mf2_t bindex,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,size_t vl)
{
    vsoxseg3ei16_v_i64m2_m(mask, base, bindex, v0, v1, v2, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu} 1 } } */

void
test1_vsoxseg3ei16_v_i64m2_m(vbool32_t mask,int64_t *base,vuint16mf2_t bindex,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,size_t vl)
{
    vsoxseg3ei16_v_i64m2_m(mask, base, bindex, v0, v1, v2, 0);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e64,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg3ei16\.v} 2 } } */
