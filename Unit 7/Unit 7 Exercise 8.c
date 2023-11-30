#include <stdio.h>
const char MESES[12][11] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};

struct FECHA{
    int dia;
    int mes;
    int anio;
};

void imprimir(struct FECHA x){
    printf("%02d de %s de %04d",x.dia,MESES[x.mes -1],x.anio);
}

int main() {
    struct FECHA ejemplo = {28,8,1956};
    imprimir(ejemplo);
    return 0;
}
