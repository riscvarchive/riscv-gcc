/* { dg-do compile } */
/* { dg-additional-options "-fdump-tree-optimized" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <riscv_vector.h>


void vsetvli_loop (int8_t * a, int8_t * b, size_t m)
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

/* { dg-final { scan-tree-dump-times "vsetvl_e8m1" 1 "optimized" } } */