/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg6ei16_v_i16m1_m(vbool16_t mask,int16_t *base,vuint16m1_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,size_t vl)
{
    vsuxseg6ei16_v_i16m1_m(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxseg6ei16_v_i16m1_m(vbool16_t mask,int16_t *base,vuint16m1_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,size_t vl)
{
    vsuxseg6ei16_v_i16m1_m(mask, base, bindex, v0, v1, v2, v3, v4, v5, 8);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*8,\s*e16,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg6ei16\.v} 2 } } */
