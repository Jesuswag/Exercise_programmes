#include <stdio.h>
void main(){
    int a;
    printf("a. iniciar una nueva partida\nb. mostrar las estadisticas de las jugadas\nc. introducir jugadores\n\nElige opcion:");
    scanf("%d",&a);
    switch (a) {
        case 1:
            printf("Ha seleccionado la opcion a.");
            break;
        case 2:
            printf("Ha seleccionado la opcion b.");
            break;
        case 3:
            printf("Ha seleccionado la opcion c.");
            break;
        default:
            printf("La opcion no es valida.");
    }
}