/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

void bar(vint8m1_t *);
void barx(int *);
void foo(){
  int x[10];
  vint8m1_t a;
  bar(&a);
  barx(&x[0]);
}
