#include <stdio.h>

int main() {
    int numero,i,j,suma=0;
    int contador = 4;
    puts("Introduce un numero para calcular los 4 numeros deficientes posteriores a este");
    scanf("%d",&numero);
    for (j=numero+1;contador;j++){
        suma = 0;
        for (i=1;i<j;i++){
            if (j%i == 0){
                suma += i;
            }
        }
        if (j>suma) {
            printf("%d\n",j);
            contador--;
        }

    }
    return 0;
}
