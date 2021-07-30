/* { dg-do compile } */

#include <riscv_vector.h>
#include <stdio.h>
#include <stdint.h>

void foo(size_t n, const int16_t *in, int16_t *out) {
    int gvl = vsetvl_e16m1(n);
    vint16m1_t vin = vle16_v_i16m1(in, gvl);
    vint16m1_t vout = vle16_v_i16m1(out, gvl);
    
    vint16m1_t vres = vslidedown_vx_i16m1(vout, vin, 2, gvl);

    int16_t temp[16] = {0};
    vse16_v_i16m1(temp, vres, gvl);
    for (int i = 0; i < n; i++)     {
        printf("%d\n", temp[i]);
    }
}

/* { dg-final { scan-assembler-times "vmv1r.v\tv\[0-9\],v\[0-9\]" 0} } */
