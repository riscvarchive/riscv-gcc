/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

unsigned short __attribute__((noipa))
add_loop (unsigned short *x, int n, unsigned short res)
{
  for (int i = 0; i < n; ++i)
    res += x[i];
  return res;
}

unsigned short __attribute__((noipa))
min_loop (unsigned short *x, int n, unsigned short res)
{
  for (int i = 0; i < n; ++i)
    res = res < x[i] ? res : x[i];
  return res;
}

unsigned short __attribute__((noipa))
max_loop (unsigned short *x, int n, unsigned short res)
{
  for (int i = 0; i < n; ++i)
    res = res > x[i] ? res : x[i];
  return res;
}

unsigned short __attribute__((noipa))
and_loop (unsigned short *x, int n, unsigned short res)
{
  for (int i = 0; i < n; ++i)
    res &= x[i];
  return res;
}

unsigned short __attribute__((noipa))
or_loop (unsigned short *x, int n, unsigned short res)
{
  for (int i = 0; i < n; ++i)
    res |= x[i];
  return res;
}

unsigned short __attribute__((noipa))
eor_loop (unsigned short *x, int n, unsigned short res)
{
  for (int i = 0; i < n; ++i)
    res ^= x[i];
  return res;
}

/* { dg-final { scan-assembler-times {\tvredsum\.vs} 2 } } */
/* { dg-final { scan-assembler-times {\tvredmaxu\.vs} 2 } } */
/* { dg-final { scan-assembler-times {\tvredminu\.vs} 2 } } */
/* { dg-final { scan-assembler-times {\tvredand\.vs} 2 } } */
/* { dg-final { scan-assembler-times {\tvredor\.vs} 2 } } */
/* { dg-final { scan-assembler-times {\tvredxor\.vs} 2 } } */