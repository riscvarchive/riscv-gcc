/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg2ei16_v_i8m4_tu(vint8m4_t *v0,vint8m4_t *v1,const int8_t *base,vuint16m8_t bindex,size_t vl)
{
    vloxseg2ei16_v_i8m4_tu(v0, v1, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu} 1 } } */

void
test1_vloxseg2ei16_v_i8m4_tu(vint8m4_t *v0,vint8m4_t *v1,const int8_t *base,vuint16m8_t bindex,size_t vl)
{
    vloxseg2ei16_v_i8m4_tu(v0, v1, base, bindex, 17);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*17,\s*e8,\s*m4,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg2ei16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs4r\.v} 4 } } */

