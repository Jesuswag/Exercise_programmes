#include <stdio.h>


typedef struct {
    int dia;
    int mes;
    int anio;
} Fecha;


void imprimir (Fecha x) {
    printf("%02d/%02d/%04d",x.dia,x.mes,x.anio);
}

void main () {
    Fecha hoy = {23,1,2024};
    imprimir(hoy);
}