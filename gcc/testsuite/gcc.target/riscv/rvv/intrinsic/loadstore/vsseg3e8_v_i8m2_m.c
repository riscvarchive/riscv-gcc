/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsseg3e8_v_i8m2_m(vbool4_t mask,int8_t *base,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,size_t vl)
{
    vsseg3e8_v_i8m2_m(mask, base, v0, v1, v2, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu} 1 } } */

void
test1_vsseg3e8_v_i8m2_m(vbool4_t mask,int8_t *base,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,size_t vl)
{
    vsseg3e8_v_i8m2_m(mask, base, v0, v1, v2, 17);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*17,\s*e8,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsseg3e8\.v} 2 } } */
