/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VADD(STYPE, VCLASS, EM)                                                \
  void vadd##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vy = rvvadd##VCLASS##EM (vx, vy);                                          \
    vy = rvvadd##VCLASS##EM##_scalar (vy, z);                                  \
    rvvst##VCLASS##EM(y, vy);                                                  \
    vx = rvvadd##VCLASS##EM##_scalar (vx, 1);                                  \
    rvvst##VCLASS##EM(x, vx);                                                  \
  }
/* Same as above without the immediate add.  */
#define VADD_NO_IMM(STYPE, VCLASS, EM)                                         \
  void vadd##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vy = vx + vy;                                                              \
    vy = vy + z;                                                               \
    rvvst##VCLASS##EM(y, vy);                                                  \
  }

VADD(char, int, 8m1)
VADD(char, int, 8m2)
VADD(char, int, 8m4)
VADD(char, int, 8m8)

VADD(short, int, 16m1)
VADD(short, int, 16m2)
VADD(short, int, 16m4)
VADD(short, int, 16m8)

VADD(int, int, 32m1)
VADD(int, int, 32m2)
VADD(int, int, 32m4)
VADD(int, int, 32m8)

VADD(long long, int, 64m1)
VADD(long long, int, 64m2)
VADD(long long, int, 64m4)
VADD(long long, int, 64m8)

VADD_NO_IMM(float16_t, float, 16m1)
VADD_NO_IMM(float16_t, float, 16m2)
VADD_NO_IMM(float16_t, float, 16m4)
VADD_NO_IMM(float16_t, float, 16m8)

VADD_NO_IMM(float, float, 32m1)
VADD_NO_IMM(float, float, 32m2)
VADD_NO_IMM(float, float, 32m4)
VADD_NO_IMM(float, float, 32m8)

VADD_NO_IMM(double, float, 64m1)
VADD_NO_IMM(double, float, 64m2)
VADD_NO_IMM(double, float, 64m4)
VADD_NO_IMM(double, float, 64m8)

/* { dg-final { scan-assembler-times "vadd.vv" 16 } } */
/* { dg-final { scan-assembler-times "vadd.vx" 16 } } */
/* { dg-final { scan-assembler-times "vadd.vi" 16 } } */
/* { dg-final { scan-assembler-times "vfadd.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfadd.vf" 12 } } */
