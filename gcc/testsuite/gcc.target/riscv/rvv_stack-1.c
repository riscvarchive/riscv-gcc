/* { dg-do compile } */
/* { dg-options "-O2 -march=rv64gcv -mabi=lp64d" } */

void bar(vint8m1_t *);
void barx(int *);
void foo(){
  int x[10];
  vint8m1_t a;
  bar(&a);
  barx(&x[0]);
}
