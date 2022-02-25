/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint32mf2_t
test0_vloxei8_v_u32mf2(const uint32_t *base,vuint8mf8_t bindex,size_t vl)
{
    return vloxei8_v_u32mf2(base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu} 1 } } */

vuint32mf2_t
test1_vloxei8_v_u32mf2(const uint32_t *base,vuint8mf8_t bindex,size_t vl)
{
    return vloxei8_v_u32mf2(base, bindex, 30);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*30,\s*e32,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei8\.v} 2 } } */
