#include <stdio.h>
#include <math.h>
int main() {
    int i,j,newi,newj,suma;

    for (i=0;i<10000;i++){
        suma = 0;                                       //reiniciamos suma en cada iteracion
        newi = i;                                       //usamos newi para no alterar i

        for (j=1; newi / 10 != 0; j++) {newi/=10;}     //calculamos el numero de digitos de i usando newi
        newi= i;                                        // restaramos newi para volver a usarlo en el siguiente bucle
        newj = j;                                       //usamos newj para no alterar j

        for (j;j>0;j--){
            suma += pow(newi % 10, newj);
            newi/=10;
        }

        if (suma == i) printf("%d\n",i);
    }
    return 0;
}
