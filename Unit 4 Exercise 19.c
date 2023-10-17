#include <stdio.h>

void main() {
    int n, i;
    int suma = 0;
    puts("Introduzca un numero entero positivo para saber si es perfecto:");
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        if (n%i == 0) suma += i;
    }
    if (n==1){
        printf("El numero 1 tiene un solo divisor, es decir, se excluye a si mismo por lo tanto NO es perfecto.");
    }else if (suma == n){
        printf("El numero %d SI es perfecto pues la suma de sus divisores enteros coincide con el mismo.", n);
    }else {
        printf("El numero %d NO es perfecto pues la suma de sus divisores enteros NO coincide con el mismo.", n);
    }
}
