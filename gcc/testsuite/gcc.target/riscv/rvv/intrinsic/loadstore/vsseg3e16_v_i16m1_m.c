/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsseg3e16_v_i16m1_m(vbool16_t mask,int16_t *base,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,size_t vl)
{
    vsseg3e16_v_i16m1_m(mask, base, v0, v1, v2, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vsseg3e16_v_i16m1_m(vbool16_t mask,int16_t *base,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,size_t vl)
{
    vsseg3e16_v_i16m1_m(mask, base, v0, v1, v2, 30);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*30,\s*e16,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsseg3e16\.v} 2 } } */
