/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat16mf4_t
test0_vluxei8_v_f16mf4(const float16_t *base,vuint8mf8_t bindex,size_t vl)
{
    return vluxei8_v_f16mf4(base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu} 1 } } */

vfloat16mf4_t
test1_vluxei8_v_f16mf4(const float16_t *base,vuint8mf8_t bindex,size_t vl)
{
    return vluxei8_v_f16mf4(base, bindex, 9);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*9,\s*e16,\s*mf4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei8\.v} 2 } } */
