/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "len_maskloadstore.c"
#include <stdio.h>

int main (void)
{
    int8_t foo_input_x[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int8_t foo_input_y[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int8_t foo_input_cond[] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    int8_t foo_expect[] = {0,17,2,19,4,21,6,23,8,25,10,27,12,29,14,31};
    size_t len = sizeof(foo_expect)/sizeof(foo_expect[0]);
    foo(foo_input_cond,foo_input_x,foo_input_y);
    for(size_t i=0; i<len; i++) {
        if (foo_input_x[i]!=foo_expect[i] ) {
            printf("foo=input_x:%d,expect:%d",foo_input_x[i],foo_expect[i]);
            __builtin_abort();
        }
    }

    int16_t foo2_input_x[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int16_t foo2_input_y[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int16_t foo2_input_cond[] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    int16_t foo2_expect[] = {0,17,2,19,4,21,6,23,8,9,10,11,12,13,14,15};
    foo2(foo2_input_cond,foo2_input_x,foo2_input_y);
    for(size_t i=0; i<len; i++) {
        if (foo2_input_x[i]!=foo2_expect[i] ) {
            printf("foo2=input_x:%d,expect:%d",foo2_input_x[i],foo2_expect[i]);
            __builtin_abort();
        }
    }


    int32_t foo3_input_x[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int32_t foo3_input_y[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int32_t foo3_input_cond[] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    int32_t foo3_expect[] = {0,17,2,19,4,5,6,7,8,9,10,11,12,13,14,15};
    foo3(foo3_input_cond,foo3_input_x,foo3_input_y);
    for(size_t i=0; i<len; i++) {
        if (foo3_input_x[i]!=foo3_expect[i] ) {
            printf("foo3=input_x:%d,expect:%d",foo3_input_x[i],foo3_expect[i]);
            __builtin_abort();
        }
    }

    int64_t foo4_input_x[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int64_t foo4_input_y[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int64_t foo4_input_cond[] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    int64_t foo4_expect[] = {0,17,2,19,4,5,6,7,8,9,10,11,12,13,14,15};
    foo4(foo4_input_cond,foo4_input_x,foo4_input_y);
    for(size_t i=0; i<len; i++) {
        if (foo4_input_x[i]!=foo4_expect[i] ) {
            printf("foo4=input_x:%d,expect:%d",foo4_input_x[i],foo4_expect[i]);
            __builtin_abort();
        }
    }

    uint8_t foo5_input_x[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    uint8_t foo5_input_y[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint8_t foo5_input_cond[] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    uint8_t foo5_expect[] = {0,17,2,19,4,21,6,23,8,25,10,27,12,29,14,31};
    foo5(foo5_input_cond,foo5_input_x,foo5_input_y);
    for(size_t i=0; i<len; i++) {
        if (foo5_input_x[i]!=foo5_expect[i] ) {
            printf("foo5=input_x:%d,expect:%d",foo5_input_x[i],foo5_expect[i]);
            __builtin_abort();
        }
    }


    uint16_t foo6_input_x[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    uint16_t foo6_input_y[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint16_t foo6_input_cond[] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    uint16_t foo6_expect[] = {0,17,2,19,4,21,6,23,8,9,10,11,12,13,14,15};
    foo6(foo6_input_cond,foo6_input_x,foo6_input_y);
    for(size_t i=0; i<len; i++) {
        if (foo6_input_x[i]!=foo6_expect[i] ) {
            printf("foo6=input_x:%d,expect:%d",foo6_input_x[i],foo6_expect[i]);
            __builtin_abort();
        }
    }


    uint32_t foo7_input_x[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    uint32_t foo7_input_y[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint32_t foo7_input_cond[] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    uint32_t foo7_expect[] = {0,17,2,19,4,5,6,7,8,9,10,11,12,13,14,15};
    foo7(foo7_input_cond,foo7_input_x,foo7_input_y);
    for(size_t i=0; i<len; i++) {
        if (foo7_input_x[i]!=foo7_expect[i] ) {
            printf("foo7=input_x:%d,expect:%d",foo7_input_x[i],foo7_expect[i]);
            __builtin_abort();
        }
    }

    uint64_t foo8_input_x[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    uint64_t foo8_input_y[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint64_t foo8_input_cond[] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    uint64_t foo8_expect[] = {0,17,2,19,4,5,6,7,8,9,10,11,12,13,14,15};
    foo8(foo8_input_cond,foo8_input_x,foo8_input_y);
    for(size_t i=0; i<len; i++) {
        if (foo8_input_x[i]!=foo8_expect[i] ) {
            printf("foo8=input_x:%d,expect:%d",foo8_input_x[i],foo8_expect[i]);
            __builtin_abort();
        }
    }

    _Float16 foo9_input_x[] = {0.1,1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1,11.1,12.1,13.1,14.1,15.1};
    _Float16 foo9_input_y[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    int16_t foo9_input_cond[] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    _Float16 foo9_expect[] = {0.1,17.1,2.1,19.1,4.1,21.1,6.1,23.1,8.1,9.1,10.1,11.1,12.1,13.1,14.1,15.1};
    foo9(foo9_input_cond,foo9_input_x,foo9_input_y);
    for(size_t i=0; i<len; i++) {
        if (foo9_input_x[i]!=foo9_expect[i] ) {
            printf("foo9=input_x:%d,expect:%d",foo9_input_x[i],foo9_expect[i]);
            __builtin_abort();
        }
    }

    float foo10_input_x[] = {0.1,1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1,11.1,12.1,13.1,14.1,15.1};
    float foo10_input_y[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    uint32_t foo10_input_cond[] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    float foo10_expect[] = {0.1,17.1,2.1,19.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1,11.1,12.1,13.1,14.1,15.1};
    foo10(foo10_input_cond,foo10_input_x,foo10_input_y);
    for(size_t i=0; i<len; i++) {
        if (foo10_input_x[i]!=foo10_expect[i] ) {
            printf("foo10=input_x:%d,expect:%d",foo10_input_x[i],foo10_expect[i]);
            __builtin_abort();
        }
    }

    double foo11_input_x[] = {0.1,1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1,11.1,12.1,13.1,14.1,15.1};
    double foo11_input_y[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    uint64_t foo11_input_cond[] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    double foo11_expect[] = {0.1,17.1,2.1,19.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1,11.1,12.1,13.1,14.1,15.1};
    foo11(foo11_input_cond,foo11_input_x,foo11_input_y);
    for(size_t i=0; i<len; i++) {
        if (foo11_input_x[i]!=foo11_expect[i] ) {
            printf("foo11=input_x:%d,expect:%d",foo11_input_x[i],foo11_expect[i]);
            __builtin_abort();
        }
    }

    return 0;
}
