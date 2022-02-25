/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint64m4_t
test0_vle64_v_u64m4_m(vbool16_t mask,vuint64m4_t maskedoff,const uint64_t *base,size_t vl)
{
    return vle64_v_u64m4_m(mask, maskedoff, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu} 1 } } */

vuint64m4_t
test1_vle64_v_u64m4_m(vbool16_t mask,vuint64m4_t maskedoff,const uint64_t *base,size_t vl)
{
    return vle64_v_u64m4_m(mask, maskedoff, base, 1);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*1,\s*e64,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle64\.v} 2 } } */
