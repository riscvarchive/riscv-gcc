/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg8e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,vbool32_t mask,vint32m1_t maskedoff0,vint32m1_t maskedoff1,vint32m1_t maskedoff2,vint32m1_t maskedoff3,vint32m1_t maskedoff4,vint32m1_t maskedoff5,vint32m1_t maskedoff6,vint32m1_t maskedoff7,const int32_t *base,size_t vl)
{
    vlseg8e32_v_i32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg8e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,vbool32_t mask,vint32m1_t maskedoff0,vint32m1_t maskedoff1,vint32m1_t maskedoff2,vint32m1_t maskedoff3,vint32m1_t maskedoff4,vint32m1_t maskedoff5,vint32m1_t maskedoff6,vint32m1_t maskedoff7,const int32_t *base,size_t vl)
{
    vlseg8e32_v_i32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, 26);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*26,\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg8e32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 16 } } */

