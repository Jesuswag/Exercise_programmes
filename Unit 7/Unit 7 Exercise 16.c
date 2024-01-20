#include <stdio.h>
#include <string.h>

#define DIA 30
#define MES 12
#define HORA 24
#define MINUTO 60

enum Tipo {ingreso,alta};

struct Fecha {
    int dia;
    int mes;
    int anio;
};

struct Tiempo {
    int hora;
    int minuto;
};

struct Evento {
    enum Tipo estado;
    int dni;
    char nombre[10];
    struct Tiempo tiempo;
    struct Fecha fecha;
};

struct Evento lista[500];
int num_eventos;

void main(){
}