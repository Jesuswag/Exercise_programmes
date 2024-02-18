#include <stdio.h>

void fusion (int n1, int v1[n1], int n2, int v2[n2], int v3[n1+n2]) {
    int cont1, cont2, cont3;
    cont1 = cont2 = cont3 = 0;
    while (cont1<n1 && cont2<n2) { // Que se agote uno no depende de su longitud sino del tamanio de los numeros
        if (v1[cont1] < v2[cont2]) {
            v3[cont3] = v1[cont1];
            cont3++;
            cont1++;
        } else if (v1[cont1] == v2[cont2]) {
            v3[cont3] = v1[cont1];
            cont3++;
            cont2++;
            cont1++;
        } else if (v1[cont1] > v2[cont2]) {
            v3[cont3] = v2[cont2];
            cont3++;
            cont2++;
        }
    } 
    // Lo convertimos en caso d que se agote antes el segundo
    if (cont1<n1) {
        while (cont1 <n1) {
            v3[cont3] = v1[cont1];
            cont3++;
            cont1++;
        }
    } else {
        while (cont2 <n2) {
            v3[cont3] = v2[cont2];
            cont3++;
            cont2++;
        } 
    }
    while (cont3 <(n1+n2)) { //relleno con ceros
        v3[cont3] = 0;
        cont3++;
    }
}

void main () {
    int a[4] = {3,6,7,9};
    int b[6] = {1,3,4,5,7,8};
    int c[10];
    fusion(4,a,6,b,c);
    for (int i=0; i<10; i++) {
        printf(" %d ",c[i]);
    }
}