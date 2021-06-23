/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

void v_ipack_m2_m1(int *a, int *b, int *c, int n) {
  size_t vl;
  vint32m1_t vec_b, vec_c;
  vint32m2_t pack = vundefined_i32m2();
  for (; vl = vsetvl_e32m1(n); n -= vl) {
    vec_b = vle32_v_i32m1(b, vl);
    vec_c = vle32_v_i32m1(c, vl);
    pack = vset_v_i32m1_i32m2(pack, 0, vec_b);
    pack = vset_v_i32m1_i32m2(pack, 1, vec_c);
    vse32_v_i32m2(a, pack, vl * 2);
    
    vec_b = vget_v_i32m2_i32m1(pack, 1);
    vec_c = vget_v_i32m2_i32m1(pack, 0);
    vse32_v_i32m1(b, vec_b, vl);
    vse32_v_i32m1(c, vec_c, vl);

    a += vl * 2;
    b += vl;
    c += vl;
  }
}

void v_ipack_m4_m1(int *a, int *b, int *c, int *d, int *e, int n) {
  size_t vl;
  vint32m1_t vec_b, vec_c, vec_d, vec_e;
  vint32m4_t pack = vundefined_i32m4();
  for (; vl = vsetvl_e32m1(n); n -= vl) {
    vec_b = vle32_v_i32m1(b, vl);
    vec_c = vle32_v_i32m1(c, vl);
    vec_d = vle32_v_i32m1(d, vl);
    vec_e = vle32_v_i32m1(e, vl);
    pack = vset_v_i32m1_i32m4(pack, 0, vec_b);
    pack = vset_v_i32m1_i32m4(pack, 1, vec_c);
    pack = vset_v_i32m1_i32m4(pack, 2, vec_d);
    pack = vset_v_i32m1_i32m4(pack, 3, vec_e);
    vse32_v_i32m4(a, pack, vl * 4);

    vec_b = vget_v_i32m4_i32m1(pack, 3);
    vec_c = vget_v_i32m4_i32m1(pack, 2);
    vec_d = vget_v_i32m4_i32m1(pack, 1);
    vec_e = vget_v_i32m4_i32m1(pack, 0);
    vse32_v_i32m1(b, vec_b, vl);
    vse32_v_i32m1(c, vec_c, vl);
    vse32_v_i32m1(d, vec_d, vl);
    vse32_v_i32m1(e, vec_e, vl);

    a += vl * 4;
    b += vl;
    c += vl;
  }
}

void v_ipack_m4_m2(int *a, int *b, int *c, int n) {
  size_t vl;
  vint32m2_t vec_b, vec_c;
  vint32m4_t pack = vundefined_i32m4();
  for (; vl = vsetvl_e32m2(n); n -= vl) {
    vec_b = vle32_v_i32m2(b, vl);
    vec_c = vle32_v_i32m2(c, vl);
    pack = vset_v_i32m2_i32m4(pack, 0, vec_b);
    pack = vset_v_i32m2_i32m4(pack, 1, vec_c);
    vse32_v_i32m4(a, pack, vl * 2);

    vec_b = vget_v_i32m4_i32m2(pack, 1);
    vec_c = vget_v_i32m4_i32m2(pack, 0);
    vse32_v_i32m2(b, vec_b, vl);
    vse32_v_i32m2(c, vec_c, vl);

    a += vl * 2;
    b += vl;
    c += vl;
  }
}

void v_ipack_m8_m1(int *a, int *b, int *c, int *d, int *e, \
                   int *f, int *g, int *h, int *i, int n) {
  size_t vl;
  vint32m1_t vec_b, vec_c, vec_d, vec_e, vec_f, vec_g, vec_h, vec_i;
  vint32m8_t pack = vundefined_i32m8();
  for (; vl = vsetvl_e32m1(n); n -= vl) {
    vec_b = vle32_v_i32m1(b, vl);
    vec_c = vle32_v_i32m1(c, vl);
    vec_d = vle32_v_i32m1(d, vl);
    vec_e = vle32_v_i32m1(e, vl);
    vec_f = vle32_v_i32m1(f, vl);
    vec_g = vle32_v_i32m1(g, vl);
    vec_h = vle32_v_i32m1(h, vl);
    vec_i = vle32_v_i32m1(i, vl);
    pack = vset_v_i32m1_i32m8(pack, 0, vec_b);
    pack = vset_v_i32m1_i32m8(pack, 1, vec_c);
    pack = vset_v_i32m1_i32m8(pack, 2, vec_d);
    pack = vset_v_i32m1_i32m8(pack, 3, vec_e);
    pack = vset_v_i32m1_i32m8(pack, 4, vec_f);
    pack = vset_v_i32m1_i32m8(pack, 5, vec_g);
    pack = vset_v_i32m1_i32m8(pack, 6, vec_h);
    pack = vset_v_i32m1_i32m8(pack, 7, vec_i);
    vse32_v_i32m8(a, pack, vl * 8);

    vec_b = vget_v_i32m8_i32m1(pack, 7);
    vec_c = vget_v_i32m8_i32m1(pack, 6);
    vec_d = vget_v_i32m8_i32m1(pack, 5);
    vec_e = vget_v_i32m8_i32m1(pack, 4);
    vec_f = vget_v_i32m8_i32m1(pack, 3);
    vec_g = vget_v_i32m8_i32m1(pack, 2);
    vec_h = vget_v_i32m8_i32m1(pack, 1);
    vec_i = vget_v_i32m8_i32m1(pack, 0);
    vse32_v_i32m1(b, vec_b, vl);
    vse32_v_i32m1(c, vec_c, vl);
    vse32_v_i32m1(d, vec_d, vl);
    vse32_v_i32m1(e, vec_e, vl);
    vse32_v_i32m1(f, vec_f, vl);
    vse32_v_i32m1(g, vec_g, vl);
    vse32_v_i32m1(h, vec_h, vl);
    vse32_v_i32m1(i, vec_i, vl);

    a += vl * 8;
    b += vl;
    c += vl;
  }
}

void v_ipack_m8_m2(int *a, int *b, int *c, int *d, int *e, int n) {
  size_t vl;
  vint32m2_t vec_b, vec_c, vec_d, vec_e;
  vint32m8_t pack = vundefined_i32m8();
  for (; vl = vsetvl_e32m2(n); n -= vl) {
    vec_b = vle32_v_i32m2(b, vl);
    vec_c = vle32_v_i32m2(c, vl);
    vec_d = vle32_v_i32m2(d, vl);
    vec_e = vle32_v_i32m2(e, vl);
    pack = vset_v_i32m2_i32m8(pack, 0, vec_b);
    pack = vset_v_i32m2_i32m8(pack, 1, vec_c);
    pack = vset_v_i32m2_i32m8(pack, 2, vec_d);
    pack = vset_v_i32m2_i32m8(pack, 3, vec_e);
    vse32_v_i32m8(a, pack, vl * 4);

    vec_b = vget_v_i32m8_i32m2(pack, 3);
    vec_c = vget_v_i32m8_i32m2(pack, 2);
    vec_d = vget_v_i32m8_i32m2(pack, 1);
    vec_e = vget_v_i32m8_i32m2(pack, 0);
    vse32_v_i32m2(b, vec_b, vl);
    vse32_v_i32m2(c, vec_c, vl);
    vse32_v_i32m2(d, vec_d, vl);
    vse32_v_i32m2(e, vec_e, vl);

    a += vl * 4;
    b += vl;
    c += vl;
  }
}

void v_ipack_m8_m4(int *a, int *b, int *c, int n) {
  size_t vl;
  vint32m4_t vec_b, vec_c;
  vint32m8_t pack = vundefined_i32m8();
  for (; vl = vsetvl_e32m4(n); n -= vl) {
    vec_b = vle32_v_i32m4(b, vl);
    vec_c = vle32_v_i32m4(c, vl);
    pack = vset_v_i32m4_i32m8(pack, 0, vec_b);
    pack = vset_v_i32m4_i32m8(pack, 1, vec_c);
    vse32_v_i32m8(a, pack, vl * 2);

    vec_b = vget_v_i32m8_i32m4(pack, 1);
    vec_c = vget_v_i32m8_i32m4(pack, 0);
    vse32_v_i32m4(b, vec_b, vl);
    vse32_v_i32m4(c, vec_c, vl);

    a += vl * 2;
    b += vl;
    c += vl;
  }
}
