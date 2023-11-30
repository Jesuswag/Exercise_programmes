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

struct FECHA leer(){
    struct FECHA aleer;
    printf("Introduce el dia:");
    scanf("%d",&aleer.dia);
    printf("Introduce el mes:");
    scanf("%d",&aleer.mes);
    printf("Introduce el anio:");
    scanf("%d",&aleer.anio);

    return aleer;
}

int main() {
    struct FECHA ejemplo;
    ejemplo = leer();
    imprimir(ejemplo);
    return 0;
}
