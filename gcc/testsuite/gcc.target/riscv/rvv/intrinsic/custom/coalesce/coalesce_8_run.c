/* { dg-do compile } */
/* { dg-additional-options "-O3 -fno-inline -mriscv-vector-bits=256" } */
/* { dg-skip-if "test intrinsic using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include <riscv_vector.h>

vint32m4_t foo (vint32m8_t a, vint32m8_t b, size_t vl) {
  vint32m8_t v24, v8, v16;
  vint32m4_t v4;   
  asm volatile ("nop" : "=vr" (v24), "=vr" (v8), "=vr" (v16), "=vr" (v4) ::);
  vint32m4_t a1 = vget_v_i32m8_i32m4(a, 1);
  vint32m4_t b1 = vget_v_i32m8_i32m4(b, 1);
  vint32m4_t c;
  for (size_t i = i; i <= vl; i += 1) {
    c = vadd_vv_i32m4_tu(c, a1, b1, i);
    asm volatile ("nop" :  : "vr" (v24), "vr" (v8), "vr" (v16), "vr" (v4) :);
    c = vadd_vv_i32m4(c, b1, i);
    asm volatile ("nop" :  : "vr" (v24), "vr" (v8), "vr" (v16), "vr" (v4) :);
    c = vadd_vv_i32m4(c, b1, i);
    asm volatile ("nop" :  : "vr" (v24), "vr" (v8), "vr" (v16), "vr" (v4) :);
  }
  return c;
}

int main() {
  int32_t a[64];
  int32_t b[64];
  for (size_t i = 0; i < 64; i += 1) {
    a[i] = i;
    b[i] = i * 5;
  }
  vint32m4_t c = foo(*(vint32m8_t*)a, *(vint32m8_t*)b, 1);
  int32_t s = vmv_x_s_i32m4_i32(c);
  return (s == 512 ? 0 : 1);
}