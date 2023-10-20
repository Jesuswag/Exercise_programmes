#include <stdio.h>

int main() {

    float kilo;
    int encendido = 1;
    while (encendido){
        printf("Indique el peso de la ropa en kilogramos");
        scanf("%f",&kilo);
        if (kilo < 5){
            puts("Nivel minimo. Gastaras 7 l");
        }
        else if (kilo <7){
            puts("Nivel medio. Gastaras 10 l");
        }
        else if (kilo < 8){
            puts("Nivel alto. Gastaras 20 l");
        }
        else if (kilo < 10){
            puts("Nivel maximo. Gastaras 30 l");
        }
        else puts("Demasiado peso. La lavadora ha petado.");

        puts("Desea continuar con el programa? 0-No Otro numero-Si");
        scanf("%f",&kilo);
        if (kilo == 0.0) encendido = 0;
    }


    return 0;
}
