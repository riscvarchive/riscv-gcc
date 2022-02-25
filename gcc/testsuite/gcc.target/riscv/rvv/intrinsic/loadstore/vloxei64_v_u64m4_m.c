/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint64m4_t
test0_vloxei64_v_u64m4_m(vbool16_t mask,vuint64m4_t maskedoff,const uint64_t *base,vuint64m4_t bindex,size_t vl)
{
    return vloxei64_v_u64m4_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu} 1 } } */

vuint64m4_t
test1_vloxei64_v_u64m4_m(vbool16_t mask,vuint64m4_t maskedoff,const uint64_t *base,vuint64m4_t bindex,size_t vl)
{
    return vloxei64_v_u64m4_m(mask, maskedoff, base, bindex, 19);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*19,\s*e64,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei64\.v} 2 } } */
