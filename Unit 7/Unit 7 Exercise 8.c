#include <stdio.h>

const char N_MESES[12][12] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"}; 

typedef struct {
    int dia;
    int mes;
    int anio;
} Fecha;

void imprimir (Fecha x) {
    printf("%02d de %s de %04d",x.dia,N_MESES[x.mes-1],x.anio);
}

void main () {
    Fecha hoy = {23,1,2024};
    imprimir(hoy);
}