/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg5ei32_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,const int16_t *base,vuint32m2_t bindex,size_t vl)
{
    vloxseg5ei32_v_i16m1_tu(v0, v1, v2, v3, v4, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu} 1 } } */

void
test1_vloxseg5ei32_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,const int16_t *base,vuint32m2_t bindex,size_t vl)
{
    vloxseg5ei32_v_i16m1_tu(v0, v1, v2, v3, v4, base, bindex, 2);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*2,\s*e16,\s*m1,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg5ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 10 } } */

