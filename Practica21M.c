#include <stdio.h>
void main() {
    int a;
    int salir = 0;
    while (!salir) {
        char respuesta = ' ';// reiniciamos la variable para que al elegir otra opcion nos vuelva a preguntar si queremos salir
        printf("a. iniciar una nueva partida\nb. mostrar las estadisticas de las jugadas\nc. introducir jugadores\nd. salir\n\nElige opcion:");
        scanf("%d", &a);
        while (getchar() != '\n'); //el buffer guarda el salto de linea y de esta forma lo limpiamos
        //fflush(stdin); tambien puede usarse esta funcion pero no se recomienda porque no funciona en todos los ordenadores
        switch (a) {
            case 1:
                puts("Ha seleccionado la opcion a.");
                break;
            case 2:
                puts("Ha seleccionado la opcion b.");
                break;
            case 3:
                puts("Ha seleccionado la opcion c.");
                break;
            case 4:
                salir = 1;
                break;
            default:
                puts("La opcion no es valida.");
        }
        if (!salir){
            puts("Desea elegir otra opcion? S/N");
            while (respuesta !='S' && respuesta !='N'){
                scanf("%c",&respuesta);
                while (getchar() != '\n');
                //fflush(stdin);
                if (respuesta == 'N') {
                    salir = 1;
                }else if (respuesta != 'S'){
                    printf("Usted introdujo mal la respuesta. Intentelo de nuevo:");
                }
            }
        }
    }
    printf("Hasta luego!");
}

