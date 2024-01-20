#include <stdio.h>

enum RESULTADO {error=8,correcto}; // 8 arbitrario

void main(){
    enum RESULTADO prueba1 = error;
    enum RESULTADO prueba2 = correcto;
    enum RESULTADO prueba3;
    printf("Prueba1: %d\n Prueba2: %d",prueba1, prueba2);

    scanf("%d",&prueba3);
    switch (prueba3){
        case error:
            puts("Error :(");
            break;
        case correcto:
            puts("Correcto!");
            break;
    }
}