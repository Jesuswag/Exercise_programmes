#include <stdio.h>

void imprimir(int vector[],int tamanio);

void main() {
    int tamanio;
    puts("Cual es el tamanio de su vector?");
    scanf("%d",&tamanio);

    int vector[tamanio];

    for (int i = 0; i <= tamanio-1; i++) {
        printf("Introduce vector[%d]: \n", i);
        scanf("%d", &vector[i]);
    }

    imprimir(vector,tamanio);
}

void imprimir(int vector[], int tamanio){
    printf("Su array es {");

    for (int i = 0; i <= tamanio-1; i++) {
        if (i == tamanio-1)
            printf("%d",vector[i]);
        else
        printf("%d, ", vector[i]);
    }
    printf("}");
}