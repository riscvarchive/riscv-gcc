/* { dg-do compile } */

#include <riscv_vector.h>

vint32m1_t vget (vint32m2_t data)
{
  return vget_v_i32m2_i32m1 (data, 2);
  /* { dg-error "index 2 is out of range, should be less than 2." "" { target *-*-* } 0 } */
}

vint32m1_t vget_tuple (vint32m1x4_t data)
{
  return vget_i32m1x4_i32m1 (data, 4);
  /* { dg-error "index 4 is out of range, should be less than 4." "" { target *-*-* } 0 } */
}

vint32m8_t vset (vint32m8_t data, vint32m1_t v)
{
  return vset_v_i32m1_i32m8 (data, 8, v);
  /* { dg-error "index 8 is out of range, should be less than 8." "" { target *-*-* } 0 } */
}

vint32m1x8_t vset_tuple (vint32m1x8_t data, vint32m1_t v)
{
  return vset_i32m1x8 (data, 9, v);
  /* { dg-error "index 9 is out of range, should be less than 8." "" { target *-*-* } 0 } */
}
