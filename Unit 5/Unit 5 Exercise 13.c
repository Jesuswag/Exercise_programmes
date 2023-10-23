#include <stdio.h>

int sumadigitos(int num){
    int suma = 0;
    do{
        suma += num % 10;
        num /= 10;
    }while(num != 0);
    return suma;
}

int main() {
    int num;
    puts("Mete un numero entero");
    scanf("%d",&num);
    printf("La suma de los digitos es igual a: %d",sumadigitos(num));
    return 0;
}
