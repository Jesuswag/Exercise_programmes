#include <stdio.h>

void suma_vectorial (float x[], float y[], float z[], int len) {
    for (int i=0; i<len; i++) {
        z[i] = x[i] + y[i];
    }
}

void main () {
    float x[3] = {2,3,4};
    float y[3] = {-2.3,0,3.14};
    float z[3];
    suma_vectorial(x,y,z,3);
    printf("{%f, %f, %f}",z[0],z[1],z[2]);
}