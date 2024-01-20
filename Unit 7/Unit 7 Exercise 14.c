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

void imprimir(struct Evento paciente);

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

    imprimir(paciente_1);
}

void imprimir(struct Evento paciente) {
    char meses[12][11] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    if (paciente.estado == alta){
        puts("ALTA");
    } else {
        puts("INGRESO");
    }
    printf("DNI: %d\nNombre: %s\nFecha: %d de %s de %d a las %d:%d\n",paciente.dni,paciente.nombre,paciente.fecha.dia,meses[paciente.fecha.mes],paciente.fecha.anio,paciente.tiempo.hora,paciente.tiempo.minuto);
}