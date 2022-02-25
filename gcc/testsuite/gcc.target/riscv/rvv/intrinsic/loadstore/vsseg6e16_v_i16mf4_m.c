/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsseg6e16_v_i16mf4_m(vbool64_t mask,int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,size_t vl)
{
    vsseg6e16_v_i16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vsseg6e16_v_i16mf4_m(vbool64_t mask,int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,size_t vl)
{
    vsseg6e16_v_i16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, 25);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*25,\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsseg6e16\.v} 2 } } */
