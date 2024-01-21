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

void imprimir(int x[], int len) {
    printf("{");
    for (int i=0; i<len; i++){
            printf(" %d,",x[i]);
        }
    printf("}\n");
}

void leer(int x[], int len) {
    for (int i=0; i<len; i++) {
        printf("Numero [%d]: ",i);
        scanf("%d",&x[i]);
    }
}

void main () {
    int len;
    puts("Longitud del vector?");
    scanf("%d",&len);
    int x[len];

    leer(x,len);
    imprimir(x,len);
    invertir(x,len);
    imprimir(x,len);
}