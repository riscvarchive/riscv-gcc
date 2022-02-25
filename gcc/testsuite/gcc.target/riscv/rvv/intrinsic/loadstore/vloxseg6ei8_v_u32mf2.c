/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg6ei8_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,const uint32_t *base,vuint8mf8_t bindex,size_t vl)
{
    vloxseg6ei8_v_u32mf2(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu} 1 } } */

void
test1_vloxseg6ei8_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,const uint32_t *base,vuint8mf8_t bindex,size_t vl)
{
    vloxseg6ei8_v_u32mf2(v0, v1, v2, v3, v4, v5, base, bindex, 1);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*1,\s*e32,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg6ei8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse32\.v} 12 } } */

