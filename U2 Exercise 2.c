#include <stdio.h>
void main(){
    float a, b;
    puts("Escribe el primer numero");
    scanf("%f",&a);
    puts("Ahora escribe el segundo numero");
    scanf("%f",&b);

    float suma = a + b;
    float resta = a - b;
    float mult = a * b;
    float div = a / b;

    printf("La suma: %f\nLa resta: %f\nLa multiplicacion: %f\nLa division: %f ", suma, resta, mult, div);
}

