#include <stdio.h>

struct FECHA{
    int dia;
    int mes;
    int anio;
};

void imprimir(struct FECHA x){
    printf("%02d/%02d/%04d",x.dia,x.mes,x.anio);
}

int main() {
    struct FECHA ejemplo = {04,12,1967};
    imprimir(ejemplo);
    return 0;
}
