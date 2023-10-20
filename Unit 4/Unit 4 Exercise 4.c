#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c;
    double area, p;
    puts("Escribe los tres lados de un triangulo separados por espacios");
    scanf("%d %d %d",&a,&b,&c);
    (a<=b && b<=c)? puts("Usted ha escrito los tres numeros de forma ascendente"): puts("Usted NO ha introducido los numeros de forma ascendente");
    if (a==b && b==c) {
        puts("El triangulo introducido es equilatero.");
    } else if (a!=b && b!=c && a!=c){
        puts("El triangulo introducido es escaleno.");
    } else {
        puts("El triangulo introducido es isosceles.");
    }
    p = (a+b+c)/2.0;
    area = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("El area del triangulo introducido es: %lf",area);
}
