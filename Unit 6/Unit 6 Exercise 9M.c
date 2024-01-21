#include <stdio.h>
#include <stdbool.h>
void leer (int n, int m, int matriz[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void maxymin (int n, int m, int a[n][m]) {
    int posx,posy;
    bool min = true;

    for (int i = 0; i < n; i++) { // buscamos el mayor de cada fila
        posx = i;
        posy = 0;
        for (int j = 0; j < m; j++) {
            if (a[i][j]>a[posx][posy]) {
                posy = j;
            }
        } // ya lo tenemos
        for (int k=0; k<n; k++) { // ahora verificamos que es el mas pequenio de su columna
            if (a[posx][posy] > a[k][posy]) { // j es local al otro for, por eso usamos posy a la derecha
                min = false;
            }
        }
        if (min) { //si lo es lo imprimimos
            printf("a[%d][%d]: %d",posx,posy,a[posx][posy]);
        }
        min = true; // reiniciamos
    }
}

void main() {
    int n, m;
    puts("n:");
    scanf("%d", &n);
    puts("m:");
    scanf("%d", &m);
    int a[n][m];
    leer(n,m,a);
    maxymin(n,m,a);
}