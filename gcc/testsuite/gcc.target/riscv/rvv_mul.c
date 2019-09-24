/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VMUL(STYPE, VCLASS, EM)                                                \
  void vmul##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vy = vx * vy;                                                              \
    vy = vy * z;                                                               \
    rvvst##VCLASS##EM(y, vy);                                                  \
  }

VMUL(char, int, 8m1)
VMUL(char, int, 8m2)
VMUL(char, int, 8m4)
VMUL(char, int, 8m8)

VMUL(short, int, 16m1)
VMUL(short, int, 16m2)
VMUL(short, int, 16m4)
VMUL(short, int, 16m8)

VMUL(int, int, 32m1)
VMUL(int, int, 32m2)
VMUL(int, int, 32m4)
VMUL(int, int, 32m8)

VMUL(long long, int, 64m1)
VMUL(long long, int, 64m2)
VMUL(long long, int, 64m4)
VMUL(long long, int, 64m8)

VMUL(float16_t, float, 16m1)
VMUL(float16_t, float, 16m2)
VMUL(float16_t, float, 16m4)
VMUL(float16_t, float, 16m8)

VMUL(float, float, 32m1)
VMUL(float, float, 32m2)
VMUL(float, float, 32m4)
VMUL(float, float, 32m8)

VMUL(double, float, 64m1)
VMUL(double, float, 64m2)
VMUL(double, float, 64m4)
VMUL(double, float, 64m8)

/* { dg-final { scan-assembler-times "vmul.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmul.vx" 16 } } */
/* { dg-final { scan-assembler-times "vfmul.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfmul.vf" 12 } } */
