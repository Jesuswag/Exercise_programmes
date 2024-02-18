#include <stdio.h>

const char N_MESES[12][12] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"}; 

typedef struct {
    int dia;
    int mes;
    int anio;
} Fecha;

Fecha leer() {
    Fecha x;
    printf("Dia: ");
    scanf("%d",&x.dia);
    printf("Mes: ");
    scanf("%d",&x.mes);
    printf("Anio: ");
    scanf("%d",&x.anio);
    return x;
}

void imprimir (Fecha x) {
    printf("%02d de %s de %04d",x.dia,N_MESES[x.mes-1],x.anio);
}

void main () {
    Fecha hoy = leer();
    imprimir(hoy);
}