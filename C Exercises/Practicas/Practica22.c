#include <stdio.h>
void main()
{
    float numero, suma = 0;
    int n = -1;
    puts("Introduzca varios numeros para hacer la media una vez metido el 0.");
    do{
    scanf("%f",&numero);
    suma += numero;
    n++;
    }while (numero != 0);

    printf("La media es: %f",suma/n);
}