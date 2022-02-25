/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint64m2_t
test0_vloxei16_v_u64m2_m(vbool32_t mask,vuint64m2_t maskedoff,const uint64_t *base,vuint16mf2_t bindex,size_t vl)
{
    return vloxei16_v_u64m2_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu} 1 } } */

vuint64m2_t
test1_vloxei16_v_u64m2_m(vbool32_t mask,vuint64m2_t maskedoff,const uint64_t *base,vuint16mf2_t bindex,size_t vl)
{
    return vloxei16_v_u64m2_m(mask, maskedoff, base, bindex, 8);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*8,\s*e64,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei16\.v} 2 } } */
