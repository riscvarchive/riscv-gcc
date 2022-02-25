/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint32m4_t
test0_vluxei64_v_u32m4(const uint32_t *base,vuint64m8_t bindex,size_t vl)
{
    return vluxei64_v_u32m4(base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu} 1 } } */

vuint32m4_t
test1_vluxei64_v_u32m4(const uint32_t *base,vuint64m8_t bindex,size_t vl)
{
    return vluxei64_v_u32m4(base, bindex, 10);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*10,\s*e32,\s*m4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei64\.v} 2 } } */
