/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg3ei32_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vbool64_t mask,vuint64m1_t maskedoff0,vuint64m1_t maskedoff1,vuint64m1_t maskedoff2,const uint64_t *base,vuint32mf2_t bindex,size_t vl)
{
    vloxseg3ei32_v_u64m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vloxseg3ei32_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vbool64_t mask,vuint64m1_t maskedoff0,vuint64m1_t maskedoff1,vuint64m1_t maskedoff2,const uint64_t *base,vuint32mf2_t bindex,size_t vl)
{
    vloxseg3ei32_v_u64m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bindex, 30);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*30,\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg3ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 6 } } */

