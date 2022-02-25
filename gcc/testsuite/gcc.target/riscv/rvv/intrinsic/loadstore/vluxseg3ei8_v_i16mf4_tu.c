/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg3ei8_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,const int16_t *base,vuint8mf8_t bindex,size_t vl)
{
    vluxseg3ei8_v_i16mf4_tu(v0, v1, v2, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu} 1 } } */

void
test1_vluxseg3ei8_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,const int16_t *base,vuint8mf8_t bindex,size_t vl)
{
    vluxseg3ei8_v_i16mf4_tu(v0, v1, v2, base, bindex, 29);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*29,\s*e16,\s*mf4,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg3ei8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 6 } } */

