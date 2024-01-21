#include <stdio.h>

void invertir (int x[], int len) {
    int temp;
    int cont = len-1;
    for (int i=0; i<(len/2); i++) { //casi mejor con un while pa q se vean bien los 2 contadores pero bueno
        temp = x[i];
        x[i] = x[cont];
        x[cont] = temp;
        cont--;
    }
}

void main () {
    int x[5] = {2,3,1,8,9};
    invertir(x,5);
    for (int i=0; i<5; i++) {
        printf(" %d ",x[i]);
    }

}