/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg4ei8_v_i16m1_m(vbool16_t mask,int16_t *base,vuint8mf2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,size_t vl)
{
    vsuxseg4ei8_v_i16m1_m(mask, base, bindex, v0, v1, v2, v3, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxseg4ei8_v_i16m1_m(vbool16_t mask,int16_t *base,vuint8mf2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,size_t vl)
{
    vsuxseg4ei8_v_i16m1_m(mask, base, bindex, v0, v1, v2, v3, 28);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*28,\s*e16,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg4ei8\.v} 2 } } */
