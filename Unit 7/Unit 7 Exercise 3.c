#include <stdio.h>

struct Polinomio {
    float base;
    float expo;
};

void leer (struct Polinomio *x) {
    printf("Base ");
    scanf("%f",&x->base); //o tambien &(*x).real
    printf("Expo ");
    scanf("%f",&(*x).expo);
}

void imprimir (int n, struct Polinomio x[n]) {
    for (int i=0; i<n; i++) {
        if (i<n-1) {
            printf("%.2f^%.2f + ",x[i].base,x[i].expo);
        } else printf("%f.2^%.2f",x[i].base,x[i].expo);
    }
}

void main () {
    int n;
    puts("Cuantos terminos desea?");
    scanf("%d",&n);
    struct Polinomio lista[n];
    for (int i=0; i<n; i++) {
        leer(&lista[i]);
    }
    imprimir(n,lista);
    
}