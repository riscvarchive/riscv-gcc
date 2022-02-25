/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg4e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vbool32_t mask,vuint8mf4_t maskedoff0,vuint8mf4_t maskedoff1,vuint8mf4_t maskedoff2,vuint8mf4_t maskedoff3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8mf4_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg4e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vbool32_t mask,vuint8mf4_t maskedoff0,vuint8mf4_t maskedoff1,vuint8mf4_t maskedoff2,vuint8mf4_t maskedoff3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8mf4_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, 0);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg4e8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 8 } } */

