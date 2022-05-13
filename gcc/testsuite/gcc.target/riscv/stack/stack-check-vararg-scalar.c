/* { dg-do run } */
/* { dg-options "-std=c11" } */

#include <stdlib.h>
#include <stdarg.h>

int va_sum(int a, int count, ...)
{
  va_list ap;
  va_start(ap, count);
  for (int i = count; i > 0; i--)
  {
    int arg = va_arg(ap, int);
    a = a + arg;
  }
  va_end(ap);
  return a;
}

int main()
{
  int sum = 0;
  int a = 1;
  int b = 2;
  int c = 3;
  int d = 4;
  sum = va_sum(sum, 4, a, b, c, d);

  if (sum != 10)
    {
      abort();
    }
}