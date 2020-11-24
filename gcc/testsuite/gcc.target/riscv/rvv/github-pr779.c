/* { dg-do compile } */
/* { dg-additional-options "-march=rv32gcv -mabi=ilp32" } */

#include <riscv_vector.h>
int32_t x_to_s(int32_t i)
{
   vint32m8_t v;
   v    = vmv_s_x_i32m8(v, i);
   return vmv_x_s_i32m8_i32(v);
}

