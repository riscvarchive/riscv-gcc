/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbb -mabi=lp64 -O2" } */

/* Expect li -126 and rori. */
long
foo (void)
{
return 0xffff77ffffffffffL;
}

long
foo_2 (void)
{
return 0x77ffffffffffffffL;
}

long
foo_3 (void)
{
return 0xfffffffeefffffffL;
}

long
foo_4 (void)
{
return 0x5ffffffffffffff5L;
}

long
foo_5 (void)
{
return 0xaffffffffffffffaL;
}

/* { dg-final { scan-assembler-times "rori\t" 5 } } */
