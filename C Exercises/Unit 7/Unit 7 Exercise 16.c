#include <stdio.h>
#include <string.h>

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

// VARIABLES GLOBALES
Evento lista[500];
int num_eventos = 0;


void main(){

}


