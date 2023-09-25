//
// Created by Jesus on 25/09/2023.
//
#include <stdio.h>
int main(){
    float a,b,c,d,e,f;
    float x,y;

    puts("Introduce los tres primeros coeficientes separados por coma:");
    scanf("%f,%f,%f",&a,&b,&c);
    puts("Ahora los tres ultimos:");
    scanf("%f,%f,%f",&d,&e,&f);

    x = -(c*e-b*f)/(b*d-a*e);
    y = (d*c-a*f)/(b*d-a*e);

    printf("La solucion es: \nx = %f \ny = %f",x,y);
}