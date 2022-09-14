/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-additional-options "-mriscv-vector-bits=512 -O3" } */
#include <riscv_vector.h>

void 
vsetvli_1 (int32_t * restrict a, int32_t * restrict b, int m)
{
  for (int i = 0; i < m; i++)
    {
      vint32m1_t v = vle32_v_i32m1 (a + i, 4);
      v = vadd_vv_i32m1 (v,v,4);
      vse32_v_i32m1 (b + i, v, 4);
    }
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,4,e32,m1,\s*t[au],\s*mu\s+\.L3\:\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)} 1 } } */

//void 
//vsetvli_2 (int32_t * restrict a, int32_t * restrict b, int m, size_t n)
//{
//  for (int i = 0; i < m; i++)
//    {
//        vint32mf2_t v = *(vint32mf2_t*)(a + i);
//        *(vint32mf2_t*)(b + i) = v;
//    }
//}