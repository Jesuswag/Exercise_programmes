#include <stdio.h>

struct Complejo {
    float real;
    float imaginaria;
};

void leer (struct Complejo *x) {
    printf("Parte imaginaria:");
    scanf("%f",&x->imaginaria); //o tambien &(*x).real
    printf("Parte real");
    scanf("%f",&(*x).real);
}

void suma (struct Complejo x, struct Complejo y) {
    float s1 = x.real + y.real;
    float s2 = x.imaginaria + y.imaginaria;
    printf("\nSuma: %f + %f i",s1,s2);
}

void resta (struct Complejo x, struct Complejo y) {
    float s1 = x.real - y.real;
    float s2 = x.imaginaria - y.imaginaria;
    printf("\nResta: %f + %f i",s1,s2);
}

void main () {
    struct Complejo a,b;
    leer(&a);
    leer(&b);
    suma(a,b);
    resta(a,b);
}