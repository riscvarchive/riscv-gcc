/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define TEST(STYPE, VCLASS, EM)                                                \
  void vadd##VCLASS##EM(STYPE *x, STYPE *y) {                                  \
    *(v##VCLASS##EM##_t *)y = *(v##VCLASS##EM##_t *)x;                     \
  }

TEST(char, int, 8m1)
TEST(char, int, 8m2)
TEST(char, int, 8m4)
TEST(char, int, 8m8)

TEST(short, int, 16m1)
TEST(short, int, 16m2)
TEST(short, int, 16m4)
TEST(short, int, 16m8)

TEST(int, int, 32m1)
TEST(int, int, 32m2)
TEST(int, int, 32m4)
TEST(int, int, 32m8)

TEST(long long, int, 64m1)
TEST(long long, int, 64m2)
TEST(long long, int, 64m4)
TEST(long long, int, 64m8)

TEST (float16_t, float, 16m1)
TEST (float16_t, float, 16m2)
TEST (float16_t, float, 16m4)
TEST (float16_t, float, 16m8)

TEST (float, float, 32m1)
TEST (float, float, 32m2)
TEST (float, float, 32m4)
TEST (float, float, 32m8)

TEST (double, float, 64m1)
TEST (double, float, 64m2)
TEST (double, float, 64m4)
TEST (double, float, 64m8)

/* { dg-final { scan-assembler-times "vl1r\.v" 7 } } */
/* { dg-final { scan-assembler-times "vl2r\.v" 7 } } */
/* { dg-final { scan-assembler-times "vl4r\.v" 7 } } */
/* { dg-final { scan-assembler-times "vl8r\.v" 7 } } */
/* { dg-final { scan-assembler-times "vs1r\.v" 7 } } */
/* { dg-final { scan-assembler-times "vs2r\.v" 7 } } */
/* { dg-final { scan-assembler-times "vs4r\.v" 7 } } */
/* { dg-final { scan-assembler-times "vs8r\.v" 7 } } */
