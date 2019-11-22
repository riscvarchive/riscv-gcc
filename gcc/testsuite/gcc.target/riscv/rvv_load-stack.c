/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
void foo(int32_t *c){
   int32_t arr1[20] = {1,2, 33};
   int32_t arr2[20] = {0};
   rvv_int32m1_t va, vb, vc;
   va = rvv_le_int32m1((int32_t*)&arr1);
   vb = rvv_le_int32m1((int32_t*)&arr2);
   vc = va + vb;
   rvv_se_int32m1(c, vc);
}
