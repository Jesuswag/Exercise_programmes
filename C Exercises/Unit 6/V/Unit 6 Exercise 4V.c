#include <stdio.h>

void imprimir(int vector[]){
for (int i = 0; i<10;i++){
        printf(" %d",vector[i]);
        if (i<9) printf(",");
        else printf(".");
    }
}


void main () {
    int vector[10];
    for (int i = 0; i<10;i++){
        printf("Numero %d: ",i);
        scanf("%d",&vector[i]);
    }
    imprimir(vector);
}