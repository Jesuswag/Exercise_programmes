#include <stdio.h>
void main()
{
    float numero, suma = 0;
    int n = -1, menosdecien = 1;
    puts("Introduzca varios numeros para hacer la media una vez metido el 0.");
    puts("Los numeros menores que 100 no seran considerados.");
    do{
        scanf("%f",&numero);
        if (numero <100){
            suma += numero;
            n++;
        }
    }while (numero != 0);
    if (suma == 0){
        puts("Error, no ha metido  ningun numero menor que 100");
    } else printf("La media es: %f", suma/n);
}