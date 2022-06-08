/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-additional-options "-O3" } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <riscv_vector.h>

/*
** test_vsetvli_loop:
**  ...
**	addi	a0,a0,8
**	vadd\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
*/
void test_vsetvli_loop (int8_t * a, int8_t * b, size_t m)
{
  vint8m1_t v_init = *(vint8m1_t*)b;
  size_t vl = vsetvl_e8m1 (6);
  for (int i = 0; i < m; i++)
    {
      vint8m1_t v = *(vint8m1_t*)(a + i * 8);
      v_init = vadd_vv_i8m1 (v_init, v, 6);
    }
  *(vint8m1_t*)b = v_init;
}

/* { dg-final { scan-assembler-times {\tvsetivli\s+zero,6,\s*e8,\s*m1,\s*t[au],\s*mu} 1 } } */