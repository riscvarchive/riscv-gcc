/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxei16_v_f16m2_m(vbool8_t mask,float16_t *base,vuint16m2_t bindex,vfloat16m2_t value,size_t vl)
{
    vsoxei16_v_f16m2_m(mask, base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu} 1 } } */

void
test1_vsoxei16_v_f16m2_m(vbool8_t mask,float16_t *base,vuint16m2_t bindex,vfloat16m2_t value,size_t vl)
{
    vsoxei16_v_f16m2_m(mask, base, bindex, value, 6);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*6,\s*e16,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxei16\.v} 2 } } */
