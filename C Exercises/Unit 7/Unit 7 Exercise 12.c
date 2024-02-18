#include <stdio.h>

const char N_MESES[12][12] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"}; 

typedef enum {correcto,error} Resultado;

typedef struct {
    int dia;
    int mes;
    int anio;
    Resultado validez;

} Fecha;

Fecha leer() {
    Fecha x;
    printf("Dia: ");
    scanf("%d",&x.dia);
    printf("Mes: ");
    scanf("%d",&x.mes);
    printf("Anio: ");
    scanf("%d",&x.anio);
    if (x.anio>=1990 && x.anio <= 2020) {
        x.validez = correcto;
    }
    return x;
}



void main () {
    Fecha hoy = leer();
    if (hoy.validez == correcto) {
        printf("La fecha es correcta");
    } else printf("Error");
}