/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg5ei32_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vbool64_t mask,vint8mf8_t maskedoff0,vint8mf8_t maskedoff1,vint8mf8_t maskedoff2,vint8mf8_t maskedoff3,vint8mf8_t maskedoff4,const int8_t *base,vuint32mf2_t bindex,size_t vl)
{
    vluxseg5ei32_v_i8mf8_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu} 1 } } */

void
test1_vluxseg5ei32_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vbool64_t mask,vint8mf8_t maskedoff0,vint8mf8_t maskedoff1,vint8mf8_t maskedoff2,vint8mf8_t maskedoff3,vint8mf8_t maskedoff4,const int8_t *base,vuint32mf2_t bindex,size_t vl)
{
    vluxseg5ei32_v_i8mf8_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bindex, 25);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*25,\s*e8,\s*mf8,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg5ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 10 } } */

