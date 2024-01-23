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

void imprimir_evento(Evento paciente) {
    if (paciente.e == alta){
        puts("ALTA:");
    } else {
        puts("INGRESO:");
    }
    printf("Paciente\nDNI: %d\nNombre: %s\nFecha: %d de %s de %d a las %02d:%02d\n",paciente.dni,paciente.nombre,paciente.f.dia,MESES[paciente.f.mes],paciente.f.anio,paciente.t.hour,paciente.t.min);
}

void main(){
    Evento paciente_1;
    strcpy(paciente_1.nombre,"Jesus");
    paciente_1.dni = 034;
    paciente_1.f.dia = 3;
    paciente_1.f.mes = 3;
    paciente_1.f.anio = 3343;
    paciente_1.t.hour = 23;
    paciente_1.t.min = 34;
    paciente_1.e = alta;

    imprimir_evento(paciente_1);
}