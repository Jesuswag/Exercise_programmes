#include <stdio.h>

enum RESULTADO {error=8,correcto}; // 8 arbitrario

void main(){
    enum RESULTADO prueba1 = error;
    enum RESULTADO prueba2 = correcto;
    enum RESULTADO prueba3;
    printf("Prueba1: %d \nPrueba2: %d",prueba1, prueba2);

    scanf("%d",&prueba3);
    switch (prueba3){
        case error:
            puts("\n Error :(");
            break;
        case correcto:
            puts("\n Correcto!");
            break;
    }
}