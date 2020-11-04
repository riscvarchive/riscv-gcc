/* { dg-do compile } */
/* { dg-options "-march=rv64gcb -mabi=lp64 -O2" } */

int foo1(int x, int y){
    return (x + y)| 0x8000;
}
int foo2(int x, int y){
    return (x + y) ^ 0x8000;
}
int foo3(int x, int y){
    return (x + y) & (~0x8000);
}

/* { dg-final { scan-assembler-times "sbsetiw" 1 } } */
/* { dg-final { scan-assembler-times "sbinviw" 1 } } */
/* { dg-final { scan-assembler-times "sbclriw" 1 } } */
