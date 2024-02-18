#include <stdio.h>
#include <string.h>

const char MESES[12][11] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
enum Estado {ingreso,alta};

struct Fecha {
    int dia;
    int mes;
    int anio;
};

struct Tiempo {
    int min;
    int hour;
};

typedef struct {
    int dni;
    char nombre[10];
    struct Tiempo t;
    struct Fecha f;
    enum Estado e;
} Evento;

void main(){
    Evento paciente_1;
}