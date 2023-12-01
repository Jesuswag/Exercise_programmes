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
    int correct;
    do{
        printf("Escribe la fecha (DD/MM/AAAA)");
        scanf("%d/%d/%d",&x->dia,&x->mes,&x->anio);
        if (x->mes < 1 || x->mes > 12){
            printf("El mes no es valido\n");
            correct = 0;
        }else if (x->mes == 2 && (x->dia > 28 || x->dia < 1)){
            printf("Febrero no tiene mas de 28 dias\n");
            correct = 0;
        }else if ((x->mes == 4 || x->mes == 6 || x->mes == 9 || x->mes == 11) && (x->dia > 30 || x->dia < 1)){
            printf("Este mes no tiene mas de 30 dias\n");
            correct = 0;
        }else if ((x->mes == 1 || x->mes == 3 || x->mes == 5 || x->mes == 7 || x->mes == 8 || x->mes == 10 || x->mes == 12) && (x->dia > 31 || x->dia < 1)){
            printf("Este mes no tiene mas de 31 dias\n");
            correct = 0;
        }else{
            correct = 1;
        }
    } while (!correct);

}

int main() {
    struct FECHA ejemplo;
    leer(&ejemplo);
    imprimir(ejemplo);
    return 0;
}
