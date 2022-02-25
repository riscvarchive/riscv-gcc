/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg7e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,const uint16_t *base,size_t vl)
{
    vlseg7e16_v_u16mf4(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu} 1 } } */

void
test1_vlseg7e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,const uint16_t *base,size_t vl)
{
    vlseg7e16_v_u16mf4(v0, v1, v2, v3, v4, v5, v6, base, 30);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*30,\s*e16,\s*mf4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg7e16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 14 } } */

