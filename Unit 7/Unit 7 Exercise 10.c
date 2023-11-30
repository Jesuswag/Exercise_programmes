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

void leer(struct FECHA *x){
    printf("Introduce el dia:");
    scanf("%d",&x->dia);
    printf("Introduce el mes:");
    scanf("%d",&x->mes);
    printf("Introduce el anio:");
    scanf("%d",&x->anio);

}

int main() {
    struct FECHA ejemplo;
    leer(&ejemplo);
    imprimir(ejemplo);
    return 0;
}
