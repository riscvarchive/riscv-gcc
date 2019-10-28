/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSUB(STYPE, VCLASS, EM)                                                \
  void vsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = * (rvv##VCLASS##EM##_t *) x;                                          \
    vy = * (rvv##VCLASS##EM##_t *) y;                                          \
    vy = vx - vy;                                                              \
    vy = vy - z;                                                               \
    * (rvv##VCLASS##EM##_t *) y = vy;                                          \
    vx = vx - 1;                                                               \
    * (rvv##VCLASS##EM##_t *) x = vx;                                          \
  }
/* Same as above without the immediate sub.  */
#define VSUB_NO_IMM(STYPE, VCLASS, EM)                                         \
  void vsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = * (rvv##VCLASS##EM##_t *) x;                                          \
    vy = * (rvv##VCLASS##EM##_t *) y;                                          \
    vy = vx - vy;                                                              \
    vy = vy - z;                                                               \
    * (rvv##VCLASS##EM##_t *) y = vy;                                          \
  }
/* Same for reverse subtract.  */
#define VRSUB(STYPE, VCLASS, EM)                                               \
  void vrsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {              \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = * (rvv##VCLASS##EM##_t *) x;                                          \
    vy = * (rvv##VCLASS##EM##_t *) y;                                          \
    vy = z - vy;                                                               \
    * (rvv##VCLASS##EM##_t *) y = vy;                                          \
    vx = 1 - vx;                                                               \
    * (rvv##VCLASS##EM##_t *) x = vx;                                          \
  }

VSUB(char, int, 8m1)
VSUB(char, int, 8m2)
VSUB(char, int, 8m4)
VSUB(char, int, 8m8)

VSUB(short, int, 16m1)
VSUB(short, int, 16m2)
VSUB(short, int, 16m4)
VSUB(short, int, 16m8)

VSUB(int, int, 32m1)
VSUB(int, int, 32m2)
VSUB(int, int, 32m4)
VSUB(int, int, 32m8)

VSUB(long long, int, 64m1)
VSUB(long long, int, 64m2)
VSUB(long long, int, 64m4)
VSUB(long long, int, 64m8)

VSUB_NO_IMM(float16_t, float, 16m1)
VSUB_NO_IMM(float16_t, float, 16m2)
VSUB_NO_IMM(float16_t, float, 16m4)
VSUB_NO_IMM(float16_t, float, 16m8)

VSUB_NO_IMM(float, float, 32m1)
VSUB_NO_IMM(float, float, 32m2)
VSUB_NO_IMM(float, float, 32m4)
VSUB_NO_IMM(float, float, 32m8)

VSUB_NO_IMM(double, float, 64m1)
VSUB_NO_IMM(double, float, 64m2)
VSUB_NO_IMM(double, float, 64m4)
VSUB_NO_IMM(double, float, 64m8)

VRSUB (char, int, 8m1)
VRSUB (char, int, 8m2)
VRSUB (char, int, 8m4)
VRSUB (char, int, 8m8)

VRSUB (short, int, 16m1)
VRSUB (short, int, 16m2)
VRSUB (short, int, 16m4)
VRSUB (short, int, 16m8)

VRSUB (int, int, 32m1)
VRSUB (int, int, 32m2)
VRSUB (int, int, 32m4)
VRSUB (int, int, 32m8)

VRSUB (long long, int, 64m1)
VRSUB (long long, int, 64m2)
VRSUB (long long, int, 64m4)
VRSUB (long long, int, 64m8)

/* { dg-final { scan-assembler-times "vsub.vv" 16 } } */
/* { dg-final { scan-assembler-times "vsub.vx" 16 } } */
/* { dg-final { scan-assembler-times "vadd.vi" 16 } } */
/* { dg-final { scan-assembler-times "vfsub.vv" 24 } } */
/* ??? Not implemented yet.  */
/* { dg-final { scan-assembler-times "vfsub.vf" 0 } } */
/* { dg-final { scan-assembler-times "vrsub.vx" 16 } } */
/* { dg-final { scan-assembler-times "vrsub.vi" 16 } } */
