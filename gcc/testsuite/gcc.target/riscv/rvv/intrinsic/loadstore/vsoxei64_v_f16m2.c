/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxei64_v_f16m2(float16_t *base,vuint64m8_t bindex,vfloat16m2_t value,size_t vl)
{
    vsoxei64_v_f16m2(base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu} 1 } } */

void
test1_vsoxei64_v_f16m2(float16_t *base,vuint64m8_t bindex,vfloat16m2_t value,size_t vl)
{
    vsoxei64_v_f16m2(base, bindex, value, 10);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*10,\s*e16,\s*m2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxei64\.v} 2 } } */
