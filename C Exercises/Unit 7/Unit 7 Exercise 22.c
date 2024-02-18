#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define ESTANTES 5
typedef enum{perecedero,ferreteria,ropa,otros} producto;

typedef struct{
    int codigo[15];
    char nombre[21];
    producto tipo;
    int cantidad;
    float precio;
}Lista;

void leecodigo(int x[15]);
bool comparocodigo(int x[15], int y[15]);

int main() {
    int codigo[15];
    int E,cantidad, restante,dinero;
    dinero = 0;
    puts("Cuantas estanterias?");
    scanf("%d",&E);
    Lista almacen[E][ESTANTES];

    leecodigo(codigo);

    puts("Cantidad del producto?");
    scanf("%d",&cantidad);

    restante = cantidad;

    for (int i=0;i<E;i++){
        for (int j=0;j<ESTANTES;j++){
            if (comparocodigo(codigo,almacen[i][j].codigo) && restante>0){
                if (almacen[i][j].cantidad >= restante){
                    almacen[i][j].cantidad -= restante;
                    printf("El importe son %f euros",restante*almacen[i][j].precio);
                    exit(0);
                } else{
                    restante -= almacen[i][j].cantidad;
                    dinero += almacen[i][j].cantidad * almacen[i][j].precio;
                    almacen[i][j].cantidad =0;
                }
            }
        }
    }
    printf("Hay %d productos disponibles. Cuesta %d euros",cantidad-restante,dinero);
    return 0;
}

void leecodigo(int x[15]){
    for (int i = 0;i<15;i++){
        printf("Introduce el numero %d del codigo:\n",i+1);
        scanf("%d",&x[i]);
    }
}

bool comparocodigo(int x[15], int y[15]){
    for (int i=0;i<15;i++){
        if (x[i] != y[i]){
            return false;
        }
    }
    return true;
}