/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg4ei32_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,const int16_t *base,vuint32m1_t bindex,size_t vl)
{
    vloxseg4ei32_v_i16mf2(v0, v1, v2, v3, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu} 1 } } */

void
test1_vloxseg4ei32_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,const int16_t *base,vuint32m1_t bindex,size_t vl)
{
    vloxseg4ei32_v_i16mf2(v0, v1, v2, v3, base, bindex, 29);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*29,\s*e16,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg4ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 8 } } */

