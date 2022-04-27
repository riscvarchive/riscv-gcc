/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <riscv_vector.h>

/************** wx ****************/
/*
** test_vnsrl_overlap1:
**  ...
**  vnsrl.wx\tv8,v8,a0
**  ...
**  ret
*/
vuint8m4_t
test_vnsrl_overlap1 (vuint16m8_t v, size_t x, size_t vl)
{
  vuint8m4_t result = vnsrl_wx_u8m4 (v, x, vl);
  return result;
}

/*
** test_vnsrl_overlap2:
**  ...
**  vnsrl.wx\tv4,v8,a0
**  ...
**  ret
*/
vuint8m4_t
test_vnsrl_overlap2 (vuint16m8_t v, size_t x, size_t vl)
{
  vuint8m4_t result = vnsrl_wx_u8m4 (v, x, vl);
  asm volatile ("clobber_regs" : : :
                "v0", "v8", "v12", "v16", "v20", "v24", "v28");
  return result;
}

/*
** test_vnsrl_tu_overlap1:
**  ...
**  vnsrl.wx\tv8,v16,a0
**  ...
**  ret
*/
vuint8m4_t
test_vnsrl_tu_overlap1 (vuint8m4_t dest, vuint16m8_t v, size_t x, size_t vl)
{
  vuint8m4_t result = vnsrl_wx_u8m4_tu (dest, v, x, vl);
  return result;
}

/*
** test_vnsrl_tama_overlap1:
**  ...
**  vnsrl.wx\tv8,v8,a0,v0.t
**  ...
**  ret
*/
vuint8m4_t
test_vnsrl_tama_overlap1 (vbool2_t mask, vuint16m8_t v, size_t x, size_t vl)
{
  vuint8m4_t result = vnsrl_wx_u8m4_tama (mask, v, x, vl);
  return result;
}

/*
** test_vnsrl_tama_overlap2:
**  ...
**  vnsrl.wx\tv4,v8,a0,v0.t
**  ...
**  ret
*/
vuint8m4_t
test_vnsrl_tama_overlap2 (vbool2_t mask, vuint16m8_t v, size_t x, size_t vl)
{
  vuint8m4_t result = vnsrl_wx_u8m4_tama (mask, v, x, vl);
  asm volatile ("clobber_regs" : : :
                "v8", "v12", "v16", "v20", "v24", "v28");
  return result;
}

/*
** test_vnsrl_m_overlap1:
**  ...
**  vnsrl.wx\tv8,v16,a0,v0.t
**  ...
**  ret
*/
vuint8m4_t
test_vnsrl_m_overlap1 (vbool2_t mask, vuint8m4_t dest, vuint16m8_t v, size_t x, size_t vl)
{
  vuint8m4_t result = vnsrl_wx_u8m4_m (mask, dest, v, x, vl);
  return result;
}

/************** wv ************/
/*
** test_vnsrl_wv_overlap1:
**  ...
**  vnsrl.wv\tv8,v8,v16
**  ...
**  ret
*/
vuint8m4_t
test_vnsrl_wv_overlap1 (vuint16m8_t v, vuint8m4_t shift, size_t vl)
{
  vuint8m4_t result = vnsrl_wv_u8m4 (v, shift, vl);
  return result;
}

/*
** test_vnsrl_wv_overlap2:
**  ...
**  vnsrl.wv\tv16,v8,v16
**  ...
**  ret
*/
vuint8m4_t
test_vnsrl_wv_overlap2 (vuint16m8_t v, vuint8m4_t shift, size_t vl)
{
  vuint8m4_t result = vnsrl_wv_u8m4 (v, shift, vl);
  asm volatile ("clobber_regs" : : :
                "v8");
  return result;
}

/*
** test_vnsrl_wv_overlap3:
**  ...
**  vnsrl.wv\tv4,v8,v16
**  ...
**  ret
*/
vuint8m4_t
test_vnsrl_wv_overlap3 (vuint16m8_t v, vuint8m4_t shift, size_t vl)
{
  vuint8m4_t result = vnsrl_wv_u8m4 (v, shift, vl);
  asm volatile ("clobber_regs" : : :
                "v0", "v8", "v12", "v16", "v20", "v24", "v28");
  return result;
}

/*
** test_vnsrl_wv_tu_overlap1:
**  ...
**  vnsrl.wv\tv16,v8,v16
**  ...
**  ret
*/
vuint8m4_t
test_vnsrl_wv_tu_overlap1 (vuint16m8_t v, vuint8m4_t shift, size_t vl)
{
  vuint8m4_t result = vnsrl_wv_u8m4_tu (shift, v, shift, vl);
  asm volatile ("clobber_regs" : : :
                "v0", "v4", "v8", "v12", "v20", "v24", "v28");
  return result;
}

/*
** test_vnsrl_wv_tu_overlap2:
**  ...
**  vnsrl.wv\tv8,v16,v12
**  ...
**  ret
*/
vuint8m4_t
test_vnsrl_wv_tu_overlap2 (vuint8m4_t dest, vuint16m8_t v, vuint8m4_t shift, size_t vl)
{
  vuint8m4_t result = vnsrl_wv_u8m4_tu (dest, v, shift, vl);
  asm volatile ("clobber_regs" : : :
                "v16");
  return result;
}


/*
** test_vnsrl_wv_tama_overlap1:
**  ...
**  vnsrl.wv\tv8,v8,v16,v0.t
**  ...
**  ret
*/
vuint8m4_t
test_vnsrl_wv_tama_overlap1 (vbool2_t mask, vuint16m8_t v, vuint8m4_t shift, size_t vl)
{
  vuint8m4_t result = vnsrl_wv_u8m4_tama (mask, v, shift, vl);
  return result;
}

/*
** test_vnsrl_wv_tama_overlap2:
**  ...
**  vnsrl.wv\tv16,v8,v16,v0.t
**  ...
**  ret
*/
vuint8m4_t
test_vnsrl_wv_tama_overlap2 (vbool2_t mask, vuint16m8_t v, vuint8m4_t shift, size_t vl)
{
  vuint8m4_t result = vnsrl_wv_u8m4_tama (mask, v, shift, vl);
  asm volatile ("clobber_regs" : : :
                "v8");
  return result;
}

/*
** test_vnsrl_wv_tama_overlap3:
**  ...
**  vnsrl.wv\tv4,v8,v16,v0.t
**  ...
**  ret
*/
vuint8m4_t
test_vnsrl_wv_tama_overlap3 (vbool2_t mask, vuint16m8_t v, vuint8m4_t shift, size_t vl)
{
  vuint8m4_t result = vnsrl_wv_u8m4_tama (mask, v, shift, vl);
  asm volatile ("clobber_regs" : : :
                "v8", "v12", "v16", "v20", "v24", "v28");
  return result;
}


/*
** test_vnsrl_wv_m_overlap1:
**  ...
**  vnsrl.wv\tv16,v8,v16,v0.t
**  ...
**  ret
*/
vuint8m4_t
test_vnsrl_wv_m_overlap1 (vbool2_t mask, vuint16m8_t v, vuint8m4_t shift, size_t vl)
{
  vuint8m4_t result = vnsrl_wv_u8m4_m (mask, shift, v, shift, vl);
  asm volatile ("clobber_regs" : : :
                "v4", "v8", "v12", "v20", "v24", "v28");
  return result;
}

/*
** test_vnsrl_wv_m_overlap2:
**  ...
**  vnsrl.wv\tv8,v16,v12,v0.t
**  ...
**  ret
*/
vuint8m4_t
test_vnsrl_wv_m_overlap2 (vbool2_t mask, vuint8m4_t dest, vuint16m8_t v, vuint8m4_t shift, size_t vl)
{
  vuint8m4_t result = vnsrl_wv_u8m4_m (mask, dest, v, shift, vl);
  asm volatile ("clobber_regs" : : :
                "v16");
  return result;
}