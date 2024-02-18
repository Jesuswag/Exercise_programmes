#include <stdio.h>
#include <stdbool.h>

struct FICHA {
    int puntos1, puntos2;
};
struct JUGADOR {
    int num_fichas; // Numero de fichas del jugador
    struct FICHA ficha[7]; // Cada una de las fichas anteriores
};
struct MESA {
    int num_fichas; // Numero de fichas en la mesa
    struct FICHA ficha[28]; // Cada una de las fichas anteriores
    int extremo1, extremo2; // Puntos a cubrir por cada lado
};

bool pasar(struct MESA mesa, struct JUGADOR jug){ // Comparo todos los dos numeros de cada ficha de un jugador con los extremos de la mesa
    for (int i = 0;i<jug.num_fichas;i++){
        if (jug.ficha[i].puntos1 == mesa.extremo1||
            jug.ficha[i].puntos1 == mesa.extremo2||
            jug.ficha[i].puntos2 == mesa.extremo1||
            jug.ficha[i].puntos2 == mesa.extremo2) return false;
    }
    return true;
}

void main(){
    struct JUGADOR jug1, jug2,jug3,jug4;
    struct MESA mesa;
}

