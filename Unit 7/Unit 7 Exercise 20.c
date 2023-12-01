#include <stdio.h>
#include <string.h>

enum Papel{mate,brillo,satinado};
enum Revelado{digital,tradicional};

struct Fecha{
    int dia;
    int mes;
    int anio;
};

typedef struct{
    int id;
    char nombre[11];
    char apellidos[21];
    int telefono;
    enum Papel tipo_papel;
    enum Revelado tipo_revelado;
    struct Fecha entrega,salida;
    int fotos;
} Ficha;

int main(){
    Ficha solicitudes[30];
    /**
    solicitudes[9].id = 123;
    strcpy("Gomez Perez",solicitudes[9].apellidos);
    strcpy("Enrique",solicitudes[9].nombre);
    solicitudes[9].tipo_revelado = tradicional;
    solicitudes[9].entrega.anio = 1999;
    solicitudes[9].fotos = 3;
    solicitudes[8].tipo_papel = satinado;
    printf("%d",solicitudes[8].tipo_papel);
     **/
    return 0;
}
