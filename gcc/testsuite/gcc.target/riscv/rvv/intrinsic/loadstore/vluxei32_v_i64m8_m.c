/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint64m8_t
test0_vluxei32_v_i64m8_m(vbool8_t mask,vint64m8_t maskedoff,const int64_t *base,vuint32m4_t bindex,size_t vl)
{
    return vluxei32_v_i64m8_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu} 1 } } */

vint64m8_t
test1_vluxei32_v_i64m8_m(vbool8_t mask,vint64m8_t maskedoff,const int64_t *base,vuint32m4_t bindex,size_t vl)
{
    return vluxei32_v_i64m8_m(mask, maskedoff, base, bindex, 22);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*22,\s*e64,\s*m8,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei32\.v} 2 } } */
