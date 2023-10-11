#include <stdio.h>

int main() {
    int numero,i,suma=0;
    puts("Introduce un numero para saber si es deficiente o no:");
    scanf("%d",&numero);
    for (i=1;i<numero;i++){
        if (numero%i == 0){
            suma += i;
        }
    }
    if (numero>suma) {
        printf("El numero %d SI es deficiente porque la suma de sus divisores propios es menor que el mismo.",numero);
    }else{
        printf("El numero %d NO es deficiente porque la suma de sus divisores propios NO es menor que el mismo",numero);
    }
    return 0;
}
