/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
int32_t arr2[20] = {0};
int32_t arr1[20] = {1,2, 33};
void foo(int32_t *c){
   vint32m1_t va, vb, vc;
   va = vle_int32m1((int32_t*)&arr1);
   vb = vle_int32m1((int32_t*)&arr2);
   vc = va + vb;
   vse_int32m1(c, vc);
}
