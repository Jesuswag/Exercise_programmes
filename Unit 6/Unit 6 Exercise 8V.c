#include <stdio.h>

void suma(int a[], int b[], int c[],int tamanio){
    for (int i = 0; i <= tamanio-1; i++) {
        c[i] = a[i] + b[i];
    }
}
void imprimir(int vector[], int tamanio){
    printf("Su array c (suma de a y b) es {");

    for (int i = 0; i <= tamanio-1; i++) {
        if (i == tamanio-1)
            printf("%d",vector[i]);
        else
        printf("%d, ", vector[i]);
    }
    printf("}");
}

int main() {
    int tamanio;
    puts("Que tamanio tienen los dos vectores?");
    scanf("%d",&tamanio);
    int a[tamanio],b[tamanio],c[tamanio];

    for (int i = 0; i <= tamanio-1; i++) {
        printf("Introduce a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    puts("");
    for (int i = 0; i <= tamanio-1; i++) {
            printf("Introduce b[%d]: \n", i);
            scanf("%d", &b[i]);
    }
    imprimir(c,tamanio);
    return 0;
}
