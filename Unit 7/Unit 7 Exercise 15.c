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

void leer(struct Evento *paciente);

void main(){
    struct Evento paciente_1;
    paciente_1.dni = 34658181;
    strcpy(paciente_1.nombre,"Jesus");
    paciente_1.estado = alta;
    paciente_1.fecha.anio = 2024;
    paciente_1.fecha.mes = 1;
    paciente_1.fecha.dia = 20;
    paciente_1.tiempo.hora = 18;
    paciente_1.tiempo.minuto = 34;

    leer(&paciente_1);
}

void leer(struct Evento *paciente) {
    puts("DNI:");
    scanf("%d",&paciente->dni); // &(*paciente).dni
    puts("NOMBRE:");
    gets(paciente->nombre);
    puts("FECHA (DD/MM/AAAA):");
    scanf("%d/%d/%d",&(*paciente).fecha.dia,&(*paciente).fecha.mes,&(*paciente).fecha.anio);
    puts("HORA (HH:MM)");
    scanf("%d:%d",&paciente->tiempo.hora,&paciente->tiempo.minuto);
    puts("INGRESO (0) O ALTA (1):");
    scanf("%d",&paciente->estado);
}