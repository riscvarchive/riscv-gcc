/* { dg-do compile { target { riscv*-*-* } } } */
/* { dg-options "-march=rv64gcv -mabi=lp64d" } */
#include <riscv_vector.h>

void f0(vint64m8_t data) {}
void f1(vuint64m8_t data) {}
void f2(vbool64_t data) {}
void f3(vfloat16mf4_t data) {}
void f4(vint64m4x2_t data) {}
void f5(vuint64m4x2_t data) {}
void f6(vfloat64m4x2_t data) {}

// { dg-final { scan-assembler "_Z2f011_vint64m8_t:" } }
// { dg-final { scan-assembler "_Z2f112_vuint64m8_t:" } }
// { dg-final { scan-assembler "_Z2f210_vbool64_t:" } }
// { dg-final { scan-assembler "_Z2f314_vfloat16mf4_t:" } }
// { dg-final { scan-assembler "_Z2f413_vint64m4x2_t:" } }
// { dg-final { scan-assembler "_Z2f514_vuint64m4x2_t:" } }
// { dg-final { scan-assembler "_Z2f615_vfloat64m4x2_t:" } }
