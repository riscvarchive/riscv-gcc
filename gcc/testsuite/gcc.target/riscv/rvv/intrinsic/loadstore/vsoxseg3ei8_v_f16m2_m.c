/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg3ei8_v_f16m2_m(vbool8_t mask,float16_t *base,vuint8m1_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,size_t vl)
{
    vsoxseg3ei8_v_f16m2_m(mask, base, bindex, v0, v1, v2, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu} 1 } } */

void
test1_vsoxseg3ei8_v_f16m2_m(vbool8_t mask,float16_t *base,vuint8m1_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,size_t vl)
{
    vsoxseg3ei8_v_f16m2_m(mask, base, bindex, v0, v1, v2, 23);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*23,\s*e16,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg3ei8\.v} 2 } } */
