/* { dg-do compile } */

#include <riscv_vector.h>
void foo(int32_t *c, word_type vl){
   int32_t arr1[20] = {1,2, 33};
   int32_t arr2[20] = {0};
   vint32m1_t va, vb, vc;
   va = vle32_v_i32m1((int32_t*)&arr1, vl);
   vb = vle32_v_i32m1((int32_t*)&arr2, vl);
   vc = va + vb;
   vse32_v_i32m1(c, vc, vl);
}
