/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "struct_vect_7.c"

#define N 93

TYPE a[N * 8 + 8], b[N * 8 + 8], c[N * 8 + 8];
TYPE d[N * 8 + 8], e[N * 8 + 8], f[N * 8 + 8], g[N * 8 + 8];
TYPE h[N * 8 + 8], j[N * 8 + 8];

void __attribute__ ((noinline, noclone))
init_array (TYPE *array, int n, TYPE base, TYPE step)
{
  for (int i = 0; i < n; ++i)
    array[i] = base + step * i;
}

void __attribute__ ((noinline, noclone))
check_array (TYPE *array, int n, TYPE base, TYPE step)
{
  for (int i = 0; i < n; ++i)
    if (array[i] != (TYPE) (base + step * i))
      __builtin_abort ();
}

int __attribute__ ((optimize (1)))
main (void)
{
  init_array (e, 2 * N, 11, 5);
  f2 (a, b, e, N);
  check_array (a, N, 11, 10);
  check_array (b, N, 16, 10);

  init_array (e, 3 * N, 7, 6);
  f3 (a, b, c, e, N);
  check_array (a, N, 7, 18);
  check_array (b, N, 13, 18);
  check_array (c, N, 19, 18);

  init_array (e, 4 * N, 4, 11);
  f4 (a, b, c, d, e, N);
  check_array (a, N, 4, 44);
  check_array (b, N, 15, 44);
  check_array (c, N, 26, 44);
  check_array (d, N, 37, 44);

  init_array (f, 5 * N, 8, 13);
  f5 (a, b, c, d, e, f, N);
  check_array (a, N, 8, 65);
  check_array (b, N, 21, 65);
  check_array (c, N, 34, 65);
  check_array (d, N, 47, 65);
  check_array (e, N, 60, 65);

  init_array (g, 6 * N, 5, 17);
  f6 (a, b, c, d, e, f, g, N);
  check_array (a, N, 5, 102);
  check_array (b, N, 22, 102);
  check_array (c, N, 39, 102);
  check_array (d, N, 56, 102);
  check_array (e, N, 73, 102);
  check_array (f, N, 90, 102);

  init_array (h, 7 * N, 3, 9);
  f7 (a, b, c, d, e, f, g, h, N);
  check_array (a, N, 3, 63);
  check_array (b, N, 12, 63);
  check_array (c, N, 21, 63);
  check_array (d, N, 30, 63);
  check_array (e, N, 39, 63);
  check_array (f, N, 48, 63);
  check_array (g, N, 57, 63);

  init_array (j, 8 * N, 6, 16);
  f8 (a, b, c, d, e, f, g, h, j, N);
  check_array (a, N, 6, 128);
  check_array (b, N, 22, 128);
  check_array (c, N, 38, 128);
  check_array (d, N, 54, 128);
  check_array (e, N, 70, 128);
  check_array (f, N, 86, 128);
  check_array (g, N, 102, 128);
  check_array (h, N, 118, 128);

  init_array (a, N, 2, 8);
  init_array (b, N, 6, 8);
  g2 (a, b, e, N);
  check_array (e, 2 * N, 2, 4);

  init_array (a, N, 4, 15);
  init_array (b, N, 9, 15);
  init_array (c, N, 14, 15);
  g3 (a, b, c, e, N);
  check_array (e, 3 * N, 4, 5);

  init_array (a, N, 14, 36);
  init_array (b, N, 23, 36);
  init_array (c, N, 32, 36);
  init_array (d, N, 41, 36);
  g4 (a, b, c, d, e, N);
  check_array (e, 4 * N, 14, 9);

  init_array (a, N, 17, 35);
  init_array (b, N, 24, 35);
  init_array (c, N, 31, 35);
  init_array (d, N, 38, 35);
  init_array (e, N, 45, 35);
  g5 (a, b, c, d, e, f, N);
  check_array (f, 5 * N, 17, 7);

  init_array (a, N, 33, 78);
  init_array (b, N, 46, 78);
  init_array (c, N, 59, 78);
  init_array (d, N, 72, 78);
  init_array (e, N, 85, 78);
  init_array (f, N, 98, 78);
  g6 (a, b, c, d, e, f, g, N);
  check_array (g, 6 * N, 33, 13);

  init_array (a, N, 41, 28);
  init_array (b, N, 45, 28);
  init_array (c, N, 49, 28);
  init_array (d, N, 53, 28);
  init_array (e, N, 57, 28);
  init_array (f, N, 61, 28);
  init_array (g, N, 65, 28);
  g7 (a, b, c, d, e, f, g, h, N);
  check_array (h, 7 * N, 41, 4);

  init_array (a, N, 57, 88);
  init_array (b, N, 68, 88);
  init_array (c, N, 79, 88);
  init_array (d, N, 90, 88);
  init_array (e, N, 101, 88);
  init_array (f, N, 112, 88);
  init_array (g, N, 123, 88);
  init_array (h, N, 134, 88);
  g8 (a, b, c, d, e, f, g, h, j, N);
  check_array (j, 8 * N, 57, 11);

  return 0;
}