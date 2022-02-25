/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg8ei16_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,vint32mf2_t maskedoff2,vint32mf2_t maskedoff3,vint32mf2_t maskedoff4,vint32mf2_t maskedoff5,vint32mf2_t maskedoff6,vint32mf2_t maskedoff7,const int32_t *base,vuint16mf4_t bindex,size_t vl)
{
    vloxseg8ei16_v_i32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vloxseg8ei16_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,vint32mf2_t maskedoff2,vint32mf2_t maskedoff3,vint32mf2_t maskedoff4,vint32mf2_t maskedoff5,vint32mf2_t maskedoff6,vint32mf2_t maskedoff7,const int32_t *base,vuint16mf4_t bindex,size_t vl)
{
    vloxseg8ei16_v_i32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, 25);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*25,\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg8ei16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse32\.v} 16 } } */

