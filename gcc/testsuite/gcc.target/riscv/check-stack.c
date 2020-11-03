/* { dg-do run } */
/* { dg-options "-O0" } */

/* Allocate a large stack size to check stack point can be adjusted.  */
int main(void)
{
  int *p;
  int i[2000];
  p = __builtin_alloca(2);

  return 0;
}
