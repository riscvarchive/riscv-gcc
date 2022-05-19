/* { dg-do compile } */
/* { dg-options "-mriscv-vector-bits=256 " } */

#include <riscv_vector.h>

typedef uint8_t gnu_uint8_t __attribute__ ((vector_size (32)));
typedef int8_t gnu_int8_t __attribute__ ((vector_size (32)));

void
f (vuint8m1_t rvv_u1, vint8m1_t rvv_s1,
   gnu_uint8_t gnu_u1, gnu_int8_t gnu_s1, int n, unsigned char uc)
{
  /* Initialization.  */

  vuint8m1_t init_rvv_u1 = 0; /* { dg-error {incompatible types when initializing type 'vuint8m1_t' using type 'int'} } */
  vuint8m1_t init_rvv_u2 = {}; /* { dg-error {empty scalar initializer} } */
  vuint8m1_t init_rvv_u3 = { rvv_u1 };
  vuint8m1_t init_rvv_u4 = { gnu_u1 };
  vuint8m1_t init_rvv_u5 = { rvv_s1 }; /* { dg-error {incompatible types when initializing type 'vuint8m1_t' using type 'vint8m1_t'} } */
  vuint8m1_t init_rvv_u6 = { gnu_s1 }; /* { dg-error {incompatible types when initializing type 'vuint8m1_t'} } */
  vuint8m1_t init_rvv_u7 = { 0 }; /* { dg-error {incompatible types when initializing type 'vuint8m1_t' using type 'int'} } */
  vuint8m1_t init_rvv_u8 = { rvv_u1, rvv_u1 }; /* { dg-warning {excess elements in scalar initializer} } */
  vuint8m1_t init_rvv_u9 = { gnu_u1, gnu_u1 }; /* { dg-warning {excess elements in scalar initializer} } */

  gnu_uint8_t init_gnu_u1 = 0; /* { dg-error {incompatible types when initializing type 'gnu_uint8_t'[^\n]* using type 'int'} } */
  gnu_uint8_t init_gnu_u2 = {};
  gnu_uint8_t init_gnu_u3 = { rvv_u1 }; /* { dg-error {incompatible types when initializing type 'unsigned char'} } */
  gnu_uint8_t init_gnu_u4 = { gnu_u1 }; /* { dg-error {incompatible types when initializing type 'unsigned char'} } */
  gnu_uint8_t init_gnu_u5 = { rvv_s1 }; /* { dg-error {incompatible types when initializing type 'unsigned char'} } */
  gnu_uint8_t init_gnu_u6 = { gnu_s1 }; /* { dg-error {incompatible types when initializing type 'unsigned char'} } */
  gnu_uint8_t init_gnu_u7 = { 0 };

  /* Compound literals.  */

  (vuint8m1_t) {}; /* { dg-error {empty scalar initializer} } */
  (vuint8m1_t) { 0 }; /* { dg-error {incompatible types when initializing type 'vuint8m1_t' using type 'int'} } */
  (vuint8m1_t) { rvv_u1 };
  (vuint8m1_t) { gnu_u1 };
  (vuint8m1_t) { rvv_s1 }; /* { dg-error {incompatible types when initializing type 'vuint8m1_t' using type 'vint8m1_t'} } */
  (vuint8m1_t) { gnu_s1 }; /* { dg-error {incompatible types when initializing type 'vuint8m1_t'} } */

  (gnu_uint8_t) {};
  (gnu_uint8_t) { 0 };
  (gnu_uint8_t) { rvv_u1 }; /* { dg-error {incompatible types when initializing type 'unsigned char'} } */
  (gnu_uint8_t) { gnu_u1 }; /* { dg-error {incompatible types when initializing type 'unsigned char'} } */

  /* Assignment.  */

  rvv_u1 = 0; /* { dg-error {incompatible types when assigning to type 'vuint8m1_t' from type 'int'} } */
  rvv_u1 = rvv_u1;
  rvv_u1 = gnu_u1;
  rvv_u1 = rvv_s1; /* { dg-error {incompatible types when assigning to type 'vuint8m1_t' from type 'vint8m1_t'} } */
  rvv_u1 = gnu_s1; /* { dg-error {incompatible types when assigning to type 'vuint8m1_t' from type 'gnu_int8_t'} } */

  gnu_u1 = 0; /* { dg-error {incompatible types when assigning to type 'gnu_uint8_t'[^\n]* from type 'int'} } */
  gnu_u1 = rvv_u1;
  gnu_u1 = gnu_u1;
  gnu_u1 = rvv_s1; /* { dg-error {incompatible types when assigning to type 'gnu_uint8_t'[^\n]* from type 'vint8m1_t'} } */
  gnu_u1 = gnu_s1; /* { dg-error {incompatible types when assigning to type 'gnu_uint8_t'[^\n]* from type 'gnu_int8_t'} } */

  /* Casts.  */

  (void) rvv_u1;
  (vuint8m1_t) rvv_u1;
  (vuint8m1_t) gnu_u1;
  (vuint8m1_t) 0; /* { dg-error {conversion to non-scalar type requested} } */
  (vuint8m1_t) n; /* { dg-error {conversion to non-scalar type requested} } */
  (vint8m1_t) rvv_u1; /* { dg-error {conversion to non-scalar type requested} } */
  (vint8m1_t) gnu_u1;

  (void) gnu_u1;
  (gnu_uint8_t) rvv_u1;
  (gnu_uint8_t) gnu_u1;
  (gnu_uint8_t) 0; /* { dg-error {cannot convert a value of type 'int' to vector type '[^']*' which has different size} } */
  (gnu_uint8_t) n; /* { dg-error {cannot convert a value of type 'int' to vector type '[^']*' which has different size} } */
  (gnu_int8_t) rvv_u1;
  (gnu_int8_t) gnu_u1;

  /* Vector indexing.  */

  rvv_u1[0]; /* { dg-error {subscripted value is neither array nor pointer} } */
  &rvv_u1[0]; /* { dg-error {subscripted value is neither array nor pointer} } */

  gnu_u1[0];
  &gnu_u1[0];

  /* Unary operators.  */

  +rvv_u1; /* { dg-error {wrong type argument to unary plus} } */
  -rvv_u1; /* { dg-error {wrong type argument to unary minus} } */
  ~rvv_u1; /* { dg-error {wrong type argument to bit-complement} } */
  !rvv_u1; /* { dg-error {wrong type argument to unary exclamation mark} } */
  *rvv_u1; /* { dg-error {invalid type argument of unary '\*'} } */
  __real rvv_u1; /* { dg-error {wrong type argument to __real} } */
  __imag rvv_u1; /* { dg-error {wrong type argument to __imag} } */
  ++rvv_u1; /* { dg-error {wrong type argument to increment} } */
  --rvv_u1; /* { dg-error {wrong type argument to decrement} } */
  rvv_u1++; /* { dg-error {wrong type argument to increment} } */
  rvv_u1--; /* { dg-error {wrong type argument to decrement} } */

  +gnu_u1;
  -gnu_u1;
  ~gnu_u1;
  !gnu_u1; /* { dg-error {wrong type argument to unary exclamation mark} } */
  *gnu_u1; /* { dg-error {invalid type argument of unary '\*'} } */
  __real gnu_u1; /* { dg-error {wrong type argument to __real} } */
  __imag gnu_u1; /* { dg-error {wrong type argument to __imag} } */
  ++gnu_u1;
  --gnu_u1;
  gnu_u1++;
  gnu_u1--;

  /* Vector-vector binary arithmetic.  */

  rvv_u1 + rvv_u1; /* { dg-error {invalid operands to binary \+} } */
  rvv_u1 - rvv_u1; /* { dg-error {invalid operands to binary -} } */
  rvv_u1 * rvv_u1; /* { dg-error {invalid operands to binary \*} } */
  rvv_u1 / rvv_u1; /* { dg-error {invalid operands to binary /} } */
  rvv_u1 % rvv_u1; /* { dg-error {invalid operands to binary %} } */
  rvv_u1 & rvv_u1; /* { dg-error {invalid operands to binary \&} } */
  rvv_u1 | rvv_u1; /* { dg-error {invalid operands to binary \|} } */
  rvv_u1 ^ rvv_u1; /* { dg-error {invalid operands to binary \^} } */
  rvv_u1 == rvv_u1; /* { dg-error {invalid operands to binary ==} } */
  rvv_u1 != rvv_u1; /* { dg-error {invalid operands to binary !=} } */
  rvv_u1 <= rvv_u1; /* { dg-error {invalid operands to binary <=} } */
  rvv_u1 < rvv_u1; /* { dg-error {invalid operands to binary <} } */
  rvv_u1 > rvv_u1; /* { dg-error {invalid operands to binary >} } */
  rvv_u1 >= rvv_u1; /* { dg-error {invalid operands to binary >=} } */
  rvv_u1 << rvv_u1; /* { dg-error {invalid operands to binary <<} } */
  rvv_u1 >> rvv_u1; /* { dg-error {invalid operands to binary >>} } */
  rvv_u1 && rvv_u1; /* { dg-error {used vector type where scalar is required} } */
  rvv_u1 || rvv_u1; /* { dg-error {used vector type where scalar is required} } */

  rvv_u1 + gnu_u1; /* { dg-error {invalid operands to binary \+} } */
  rvv_u1 - gnu_u1; /* { dg-error {invalid operands to binary -} } */
  rvv_u1 * gnu_u1; /* { dg-error {invalid operands to binary \*} } */
  rvv_u1 / gnu_u1; /* { dg-error {invalid operands to binary /} } */
  rvv_u1 % gnu_u1; /* { dg-error {invalid operands to binary %} } */
  rvv_u1 & gnu_u1; /* { dg-error {invalid operands to binary \&} } */
  rvv_u1 | gnu_u1; /* { dg-error {invalid operands to binary \|} } */
  rvv_u1 ^ gnu_u1; /* { dg-error {invalid operands to binary \^} } */
  rvv_u1 == gnu_u1; /* { dg-error {invalid operands to binary ==} } */
  rvv_u1 != gnu_u1; /* { dg-error {invalid operands to binary !=} } */
  rvv_u1 <= gnu_u1; /* { dg-error {invalid operands to binary <=} } */
  rvv_u1 < gnu_u1; /* { dg-error {invalid operands to binary <} } */
  rvv_u1 > gnu_u1; /* { dg-error {invalid operands to binary >} } */
  rvv_u1 >= gnu_u1; /* { dg-error {invalid operands to binary >=} } */
  rvv_u1 << gnu_u1; /* { dg-error {invalid operands to binary <<} } */
  rvv_u1 >> gnu_u1; /* { dg-error {invalid operands to binary >>} } */
  rvv_u1 && gnu_u1; /* { dg-error {used vector type where scalar is required} } */
  rvv_u1 || gnu_u1; /* { dg-error {used vector type where scalar is required} } */

  gnu_u1 + rvv_u1; /* { dg-error {invalid operands to binary \+} } */
  gnu_u1 - rvv_u1; /* { dg-error {invalid operands to binary -} } */
  gnu_u1 * rvv_u1; /* { dg-error {invalid operands to binary \*} } */
  gnu_u1 / rvv_u1; /* { dg-error {invalid operands to binary /} } */
  gnu_u1 % rvv_u1; /* { dg-error {invalid operands to binary %} } */
  gnu_u1 & rvv_u1; /* { dg-error {invalid operands to binary \&} } */
  gnu_u1 | rvv_u1; /* { dg-error {invalid operands to binary \|} } */
  gnu_u1 ^ rvv_u1; /* { dg-error {invalid operands to binary \^} } */
  gnu_u1 == rvv_u1; /* { dg-error {invalid operands to binary ==} } */
  gnu_u1 != rvv_u1; /* { dg-error {invalid operands to binary !=} } */
  gnu_u1 <= rvv_u1; /* { dg-error {invalid operands to binary <=} } */
  gnu_u1 < rvv_u1; /* { dg-error {invalid operands to binary <} } */
  gnu_u1 > rvv_u1; /* { dg-error {invalid operands to binary >} } */
  gnu_u1 >= rvv_u1; /* { dg-error {invalid operands to binary >=} } */
  gnu_u1 << rvv_u1; /* { dg-error {invalid operands to binary <<} } */
  gnu_u1 >> rvv_u1; /* { dg-error {invalid operands to binary >>} } */
  gnu_u1 && rvv_u1; /* { dg-error {used vector type where scalar is required} } */
  gnu_u1 || rvv_u1; /* { dg-error {used vector type where scalar is required} } */

  gnu_u1 + gnu_u1;
  gnu_u1 - gnu_u1;
  gnu_u1 * gnu_u1;
  gnu_u1 / gnu_u1;
  gnu_u1 % gnu_u1;
  gnu_u1 & gnu_u1;
  gnu_u1 | gnu_u1;
  gnu_u1 ^ gnu_u1;
  gnu_u1 == gnu_u1;
  gnu_u1 != gnu_u1;
  gnu_u1 <= gnu_u1;
  gnu_u1 < gnu_u1;
  gnu_u1 > gnu_u1;
  gnu_u1 >= gnu_u1;
  gnu_u1 << gnu_u1;
  gnu_u1 >> gnu_u1;
  gnu_u1 && gnu_u1; /* { dg-error {used vector type where scalar is required} } */
  gnu_u1 || gnu_u1; /* { dg-error {used vector type where scalar is required} } */

  /* Vector-scalar binary arithmetic.  */

  rvv_u1 + 2; /* { dg-error {invalid operands to binary \+} } */
  rvv_u1 - 2; /* { dg-error {invalid operands to binary -} } */
  rvv_u1 * 2; /* { dg-error {invalid operands to binary \*} } */
  rvv_u1 / 2; /* { dg-error {invalid operands to binary /} } */
  rvv_u1 % 2; /* { dg-error {invalid operands to binary %} } */
  rvv_u1 & 2; /* { dg-error {invalid operands to binary \&} } */
  rvv_u1 | 2; /* { dg-error {invalid operands to binary \|} } */
  rvv_u1 ^ 2; /* { dg-error {invalid operands to binary \^} } */
  rvv_u1 == 2; /* { dg-error {invalid operands to binary ==} } */
  rvv_u1 != 2; /* { dg-error {invalid operands to binary !=} } */
  rvv_u1 <= 2; /* { dg-error {invalid operands to binary <=} } */
  rvv_u1 < 2; /* { dg-error {invalid operands to binary <} } */
  rvv_u1 > 2; /* { dg-error {invalid operands to binary >} } */
  rvv_u1 >= 2; /* { dg-error {invalid operands to binary >=} } */
  rvv_u1 << 2; /* { dg-error {invalid operands to binary <<} } */
  rvv_u1 >> 2; /* { dg-error {invalid operands to binary >>} } */
  rvv_u1 && 2; /* { dg-error {used vector type where scalar is required} } */
  rvv_u1 || 2; /* { dg-error {used vector type where scalar is required} } */

  rvv_u1 + uc; /* { dg-error {invalid operands to binary \+} } */
  rvv_u1 - uc; /* { dg-error {invalid operands to binary -} } */
  rvv_u1 * uc; /* { dg-error {invalid operands to binary \*} } */
  rvv_u1 / uc; /* { dg-error {invalid operands to binary /} } */
  rvv_u1 % uc; /* { dg-error {invalid operands to binary %} } */
  rvv_u1 & uc; /* { dg-error {invalid operands to binary \&} } */
  rvv_u1 | uc; /* { dg-error {invalid operands to binary \|} } */
  rvv_u1 ^ uc; /* { dg-error {invalid operands to binary \^} } */
  rvv_u1 == uc; /* { dg-error {invalid operands to binary ==} } */
  rvv_u1 != uc; /* { dg-error {invalid operands to binary !=} } */
  rvv_u1 <= uc; /* { dg-error {invalid operands to binary <=} } */
  rvv_u1 < uc; /* { dg-error {invalid operands to binary <} } */
  rvv_u1 > uc; /* { dg-error {invalid operands to binary >} } */
  rvv_u1 >= uc; /* { dg-error {invalid operands to binary >=} } */
  rvv_u1 << uc; /* { dg-error {invalid operands to binary <<} } */
  rvv_u1 >> uc; /* { dg-error {invalid operands to binary >>} } */
  rvv_u1 && uc; /* { dg-error {used vector type where scalar is required} } */
  rvv_u1 || uc; /* { dg-error {used vector type where scalar is required} } */

  gnu_u1 + 2;
  gnu_u1 - 2;
  gnu_u1 * 2;
  gnu_u1 / 2;
  gnu_u1 % 2;
  gnu_u1 & 2;
  gnu_u1 | 2;
  gnu_u1 ^ 2;
  gnu_u1 == 2;
  gnu_u1 != 2;
  gnu_u1 <= 2;
  gnu_u1 < 2;
  gnu_u1 > 2;
  gnu_u1 >= 2;
  gnu_u1 << 2;
  gnu_u1 >> 2;
  gnu_u1 && 2; /* { dg-error {used vector type where scalar is required} } */
  gnu_u1 || 2; /* { dg-error {used vector type where scalar is required} } */

  gnu_u1 + uc;
  gnu_u1 - uc;
  gnu_u1 * uc;
  gnu_u1 / uc;
  gnu_u1 % uc;
  gnu_u1 & uc;
  gnu_u1 | uc;
  gnu_u1 ^ uc;
  gnu_u1 == uc;
  gnu_u1 != uc;
  gnu_u1 <= uc;
  gnu_u1 < uc;
  gnu_u1 > uc;
  gnu_u1 >= uc;
  gnu_u1 << uc;
  gnu_u1 >> uc;
  gnu_u1 && uc; /* { dg-error {used vector type where scalar is required} } */
  gnu_u1 || uc; /* { dg-error {used vector type where scalar is required} } */

  /* Scalar-vector binary arithmetic.  */

  3 + rvv_u1; /* { dg-error {invalid operands to binary \+} } */
  3 - rvv_u1; /* { dg-error {invalid operands to binary -} } */
  3 * rvv_u1; /* { dg-error {invalid operands to binary \*} } */
  3 / rvv_u1; /* { dg-error {invalid operands to binary /} } */
  3 % rvv_u1; /* { dg-error {invalid operands to binary %} } */
  3 & rvv_u1; /* { dg-error {invalid operands to binary \&} } */
  3 | rvv_u1; /* { dg-error {invalid operands to binary \|} } */
  3 ^ rvv_u1; /* { dg-error {invalid operands to binary \^} } */
  3 == rvv_u1; /* { dg-error {invalid operands to binary ==} } */
  3 != rvv_u1; /* { dg-error {invalid operands to binary !=} } */
  3 <= rvv_u1; /* { dg-error {invalid operands to binary <=} } */
  3 < rvv_u1; /* { dg-error {invalid operands to binary <} } */
  3 > rvv_u1; /* { dg-error {invalid operands to binary >} } */
  3 >= rvv_u1; /* { dg-error {invalid operands to binary >=} } */
  3 << rvv_u1; /* { dg-error {invalid operands to binary <<} } */
  3 >> rvv_u1; /* { dg-error {invalid operands to binary >>} } */
  3 && rvv_u1; /* { dg-error {invalid operands to binary \&\&} } */
  3 || rvv_u1; /* { dg-error {invalid operands to binary \|\|} } */

  3 + gnu_u1;
  3 - gnu_u1;
  3 * gnu_u1;
  3 / gnu_u1;
  3 % gnu_u1;
  3 & gnu_u1;
  3 | gnu_u1;
  3 ^ gnu_u1;
  3 == gnu_u1;
  3 != gnu_u1;
  3 <= gnu_u1;
  3 < gnu_u1;
  3 > gnu_u1;
  3 >= gnu_u1;
  3 << gnu_u1;
  3 >> gnu_u1;
  3 && gnu_u1; /* { dg-error {invalid operands to binary \&\&} } */
  3 || gnu_u1; /* { dg-error {invalid operands to binary \|\|} } */

  /* Mismatched types.  */

  rvv_u1 + rvv_s1; /* { dg-error {invalid operands to binary \+} } */
  rvv_u1 - rvv_s1; /* { dg-error {invalid operands to binary -} } */
  rvv_u1 * rvv_s1; /* { dg-error {invalid operands to binary \*} } */
  rvv_u1 / rvv_s1; /* { dg-error {invalid operands to binary /} } */
  rvv_u1 % rvv_s1; /* { dg-error {invalid operands to binary %} } */
  rvv_u1 & rvv_s1; /* { dg-error {invalid operands to binary \&} } */
  rvv_u1 | rvv_s1; /* { dg-error {invalid operands to binary \|} } */
  rvv_u1 ^ rvv_s1; /* { dg-error {invalid operands to binary \^} } */
  rvv_u1 == rvv_s1; /* { dg-error {invalid operands to binary ==} } */
  rvv_u1 != rvv_s1; /* { dg-error {invalid operands to binary !=} } */
  rvv_u1 <= rvv_s1; /* { dg-error {invalid operands to binary <=} } */
  rvv_u1 < rvv_s1; /* { dg-error {invalid operands to binary <} } */
  rvv_u1 > rvv_s1; /* { dg-error {invalid operands to binary >} } */
  rvv_u1 >= rvv_s1; /* { dg-error {invalid operands to binary >=} } */
  rvv_u1 << rvv_s1; /* { dg-error {invalid operands to binary <<} } */
  rvv_u1 >> rvv_s1; /* { dg-error {invalid operands to binary >>} } */
  rvv_u1 && rvv_s1; /* { dg-error {used vector type where scalar is required} } */
  rvv_u1 || rvv_s1; /* { dg-error {used vector type where scalar is required} } */

  rvv_u1 + gnu_s1; /* { dg-error {invalid operands to binary \+} } */
  rvv_u1 - gnu_s1; /* { dg-error {invalid operands to binary -} } */
  rvv_u1 * gnu_s1; /* { dg-error {invalid operands to binary \*} } */
  rvv_u1 / gnu_s1; /* { dg-error {invalid operands to binary /} } */
  rvv_u1 % gnu_s1; /* { dg-error {invalid operands to binary %} } */
  rvv_u1 & gnu_s1; /* { dg-error {invalid operands to binary \&} } */
  rvv_u1 | gnu_s1; /* { dg-error {invalid operands to binary \|} } */
  rvv_u1 ^ gnu_s1; /* { dg-error {invalid operands to binary \^} } */
  rvv_u1 == gnu_s1; /* { dg-error {invalid operands to binary ==} } */
  rvv_u1 != gnu_s1; /* { dg-error {invalid operands to binary !=} } */
  rvv_u1 <= gnu_s1; /* { dg-error {invalid operands to binary <=} } */
  rvv_u1 < gnu_s1; /* { dg-error {invalid operands to binary <} } */
  rvv_u1 > gnu_s1; /* { dg-error {invalid operands to binary >} } */
  rvv_u1 >= gnu_s1; /* { dg-error {invalid operands to binary >=} } */
  rvv_u1 << gnu_s1; /* { dg-error {invalid operands to binary <<} } */
  rvv_u1 >> gnu_s1; /* { dg-error {invalid operands to binary >>} } */
  rvv_u1 && gnu_s1; /* { dg-error {used vector type where scalar is required} } */
  rvv_u1 || gnu_s1; /* { dg-error {used vector type where scalar is required} } */

  gnu_u1 + rvv_s1; /* { dg-error {invalid operands to binary \+} } */
  gnu_u1 - rvv_s1; /* { dg-error {invalid operands to binary -} } */
  gnu_u1 * rvv_s1; /* { dg-error {invalid operands to binary \*} } */
  gnu_u1 / rvv_s1; /* { dg-error {invalid operands to binary /} } */
  gnu_u1 % rvv_s1; /* { dg-error {invalid operands to binary %} } */
  gnu_u1 & rvv_s1; /* { dg-error {invalid operands to binary \&} } */
  gnu_u1 | rvv_s1; /* { dg-error {invalid operands to binary \|} } */
  gnu_u1 ^ rvv_s1; /* { dg-error {invalid operands to binary \^} } */
  gnu_u1 == rvv_s1; /* { dg-error {invalid operands to binary ==} } */
  gnu_u1 != rvv_s1; /* { dg-error {invalid operands to binary !=} } */
  gnu_u1 <= rvv_s1; /* { dg-error {invalid operands to binary <=} } */
  gnu_u1 < rvv_s1; /* { dg-error {invalid operands to binary <} } */
  gnu_u1 > rvv_s1; /* { dg-error {invalid operands to binary >} } */
  gnu_u1 >= rvv_s1; /* { dg-error {invalid operands to binary >=} } */
  gnu_u1 << rvv_s1; /* { dg-error {invalid operands to binary <<} } */
  gnu_u1 >> rvv_s1; /* { dg-error {invalid operands to binary >>} } */
  gnu_u1 && rvv_s1; /* { dg-error {used vector type where scalar is required} } */
  gnu_u1 || rvv_s1; /* { dg-error {used vector type where scalar is required} } */

  gnu_u1 + gnu_s1;
  gnu_u1 - gnu_s1;
  gnu_u1 * gnu_s1;
  gnu_u1 / gnu_s1;
  gnu_u1 % gnu_s1;
  gnu_u1 & gnu_s1;
  gnu_u1 | gnu_s1;
  gnu_u1 ^ gnu_s1;
  gnu_u1 == gnu_s1;
  gnu_u1 != gnu_s1;
  gnu_u1 <= gnu_s1;
  gnu_u1 < gnu_s1;
  gnu_u1 > gnu_s1;
  gnu_u1 >= gnu_s1;
  gnu_u1 << gnu_s1;
  gnu_u1 >> gnu_s1;
  gnu_u1 && gnu_s1; /* { dg-error {used vector type where scalar is required} } */
  gnu_u1 || gnu_s1; /* { dg-error {used vector type where scalar is required} } */

  /* Conditional expressions.  */

  uc ? rvv_u1 : rvv_u1;
  uc ? gnu_u1 : rvv_u1; /* { dg-error {type mismatch in conditional expression} } */
  uc ? rvv_u1 : gnu_u1; /* { dg-error {type mismatch in conditional expression} } */
  uc ? gnu_u1 : gnu_u1;

  rvv_u1 ? rvv_u1 : rvv_u1; /* { dg-error {used vector type where scalar is required} } */
  rvv_u1 ? gnu_u1 : rvv_u1; /* { dg-error {used vector type where scalar is required} } */
  rvv_u1 ? rvv_u1 : gnu_u1; /* { dg-error {used vector type where scalar is required} } */
  rvv_u1 ? gnu_u1 : gnu_u1; /* { dg-error {used vector type where scalar is required} } */

  gnu_u1 ? rvv_u1 : rvv_u1; /* { dg-error {used vector type where scalar is required} } */
  gnu_u1 ? gnu_u1 : rvv_u1; /* { dg-error {used vector type where scalar is required} } */
  gnu_u1 ? rvv_u1 : gnu_u1; /* { dg-error {used vector type where scalar is required} } */
  gnu_u1 ? gnu_u1 : gnu_u1; /* { dg-error {used vector type where scalar is required} } */

  /* Vector built-ins.  */

  __builtin_shuffle (rvv_u1, rvv_u1, rvv_u1); /* { dg-error {'__builtin_shuffle' last argument must be an integer vector} } */
  __builtin_shuffle (rvv_u1, gnu_u1, gnu_u1); /* { dg-error {'__builtin_shuffle' arguments must be vectors} } */
  __builtin_shuffle (gnu_u1, rvv_u1, gnu_u1); /* { dg-error {'__builtin_shuffle' arguments must be vectors} } */
  __builtin_shuffle (gnu_u1, gnu_u1, rvv_u1); /* { dg-error {'__builtin_shuffle' last argument must be an integer vector} } */
  __builtin_shuffle (gnu_u1, gnu_u1, gnu_u1);

  __builtin_convertvector (rvv_u1, vuint8m1_t); /* { dg-error {'__builtin_convertvector' first argument must be an integer or floating vector} } */
  __builtin_convertvector (gnu_u1, vuint8m1_t); /* { dg-error {'__builtin_convertvector' second argument must be an integer or floating vector type} } */
  __builtin_convertvector (rvv_u1, gnu_uint8_t); /* { dg-error {'__builtin_convertvector' first argument must be an integer or floating vector} } */
  __builtin_convertvector (gnu_u1, gnu_uint8_t);
}
