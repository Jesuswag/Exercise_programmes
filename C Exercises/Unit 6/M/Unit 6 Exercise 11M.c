#include <stdio.h>

void rotacion (int n, int m, int matrix[n][m]) { 
    int steps = 0;
    int derecha, actual;
    int k;
    for (int i=0; i<n; i++) {
        actual = matrix[i][0];
        k=0;
        for (int j=0; j<m; j++) { // hay m rotaciones para cada fila
            derecha = matrix[i][(k+steps)%m]; //sin embargo la posicion de columnas tiene que cambiar segun steps (por eso uso k)
            matrix[i][(k+steps)%m] = actual;
            actual = derecha;
            k += steps;
        }
        steps++;
    }
}

void leer (int n, int m, int matriz[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimir (int n, int m, int vector[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", vector[i][j]);
        }
        printf("\n");
    }
}

void main () {
    int n,m;
    printf("n,m: ");
    scanf("%d,%d",&n,&m);
    int matrix[n][m];
    leer(n,m,matrix);
    rotacion(n,m,matrix);
    imprimir(n,m,matrix);
}