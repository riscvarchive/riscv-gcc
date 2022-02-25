/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg3e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16mf4(v0, v1, v2, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu} 1 } } */

void
test1_vlseg3e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16mf4(v0, v1, v2, base, 31);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg3e16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 6 } } */

