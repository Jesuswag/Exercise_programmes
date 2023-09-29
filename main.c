#include <stdio.h>

void main(){
    int horas, minutos;
    puts("Introduce una fecha en fomato 24 h (ej. 13:45).");
    scanf("%d:%d",&horas,&minutos);
    if (horas>=12){
        horas -= 12;
    }
    printf("La hora en formato 12 h seria: %d:%d",horas,minutos);

}