/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg5ei64_v_i8m1_m(vbool8_t mask,int8_t *base,vuint64m8_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,size_t vl)
{
    vsuxseg5ei64_v_i8m1_m(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxseg5ei64_v_i8m1_m(vbool8_t mask,int8_t *base,vuint64m8_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,size_t vl)
{
    vsuxseg5ei64_v_i8m1_m(mask, base, bindex, v0, v1, v2, v3, v4, 16);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*16,\s*e8,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg5ei64\.v} 2 } } */
