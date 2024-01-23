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

// VARIABLES GLOBALES
Evento lista[500];
int num_eventos = 0;

void leer_fecha(struct Fecha *x) {
    printf("Dia: ");
    scanf("%d",&x->dia);
    printf("Mes: ");
    scanf("%d",&x->mes);
    printf("Anio: ");
    scanf("%d",&x->anio);
}

void leer_hora(struct Tiempo *x) {
    printf("Hora: ");
    scanf("%d",&x->hour);
    printf("Minuto: ");
    scanf("%d",&x->min);
}

void leer_evento (Evento *x) {
    num_eventos++; // !!!!!!!!!!!

    printf("Nombre:");
    gets(x->nombre);
    printf("Dni:");
    scanf("%d",&x->dni);
    leer_fecha(&x->f);
    leer_hora(&x->t);
    printf("Estado (0->ingreso 1->alta):");
    scanf("%d",&x->e);
}

void imprimir_evento(Evento paciente) {
    if (paciente.e == alta){
        puts("ALTA:");
    } else {
        puts("INGRESO:");
    }
    printf("Paciente\nDNI: %d\nNombre: %s\nFecha: %d de %s de %d a las %02d:%02d\n\n",paciente.dni,paciente.nombre,paciente.f.dia,MESES[paciente.f.mes],paciente.f.anio,paciente.t.hour,paciente.t.min);
}

void leer_lista (Evento x[], int position) {
    leer_evento(&x[position]);
}

void imprimir_lista (Evento x[], int position) {
    for (int i=0; i<position; i++) {
        imprimir_evento(x[i]);
    }
}

void main(){
    int leer = 1;
    while (leer) {
        fflush(stdin);
        leer_lista(lista,num_eventos); //tonteria mandarlos xq son globales pero asi lo dice el ej
        puts("0: Finalizar\n1: Continuar");
        scanf("%d",&leer);
    }
    imprimir_lista(lista,num_eventos);
}