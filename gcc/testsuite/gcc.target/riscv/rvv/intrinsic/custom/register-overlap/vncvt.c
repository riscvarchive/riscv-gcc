/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <riscv_vector.h>

/*
** test_vncvt_overlap1:
**  ...
**  vncvt.x.x.w\tv8,v8
**  ...
**  ret
*/
vuint8m4_t
test_vncvt_overlap1 (vuint16m8_t v, size_t x, size_t vl)
{
  vuint8m4_t result = vncvt_x_x_w_u8m4 (v, vl);
  return result;
}

/*
** test_vncvt_overlap2:
**  ...
**  vncvt.x.x.w\tv4,v8
**  ...
**  ret
*/
vuint8m4_t
test_vncvt_overlap2 (vuint16m8_t v, size_t x, size_t vl)
{
  vuint8m4_t result = vncvt_x_x_w_u8m4 (v, vl);
  asm volatile ("clobber_regs" : : :
                "v0", "v8", "v12", "v16", "v20", "v24", "v28");
  return result;
}

/*
** test_vncvt_tu_overlap1:
**  ...
**  vncvt.x.x.w\tv8,v16
**  ...
**  ret
*/
vuint8m4_t
test_vncvt_tu_overlap1 (vuint8m4_t dest, vuint16m8_t v, size_t x, size_t vl)
{
  vuint8m4_t result = vncvt_x_x_w_u8m4_tu (dest, v, vl);
  return result;
}

/*
** test_vncvt_tama_overlap1:
**  ...
**  vncvt.x.x.w\tv8,v8,v0.t
**  ...
**  ret
*/
vuint8m4_t
test_vncvt_tama_overlap1 (vbool2_t mask, vuint16m8_t v, size_t x, size_t vl)
{
  vuint8m4_t result = vncvt_x_x_w_u8m4_tama (mask, v, vl);
  return result;
}

/*
** test_vncvt_tama_overlap2:
**  ...
**  vncvt.x.x.w\tv4,v8,v0.t
**  ...
**  ret
*/
vuint8m4_t
test_vncvt_tama_overlap2 (vbool2_t mask, vuint16m8_t v, size_t x, size_t vl)
{
  vuint8m4_t result = vncvt_x_x_w_u8m4_tama (mask, v, vl);
  asm volatile ("clobber_regs" : : :
                "v8", "v12", "v16", "v20", "v24", "v28");
  return result;
}

/*
** test_vncvt_m_overlap1:
**  ...
**  vncvt.x.x.w\tv8,v16,v0.t
**  ...
**  ret
*/
vuint8m4_t
test_vncvt_m_overlap1 (vbool2_t mask, vuint8m4_t dest, vuint16m8_t v, size_t x, size_t vl)
{
  vuint8m4_t result = vncvt_x_x_w_u8m4_m (mask, dest, v, vl);
  return result;
}
