#include <stdio.h>

void mover (int n, int m, int matrix[n][m], int row) {
    int now, before;
    before = matrix[row][0];
    for (int i=0; i<m; i++) {
        now = matrix[row][(i+1)%m];
        matrix[row][(i+1)%m] = before;
        before = now;
    }
}

void rotacion (int n, int m, int matrix[n][m]) { 
    for (int i=0; i<n; i++) { 
        for (int j=0; j<i; j++) { // j se itera i veces
            mover(n,m,matrix,i); //le pasamos lo mismo mas la fila que queremos
        }
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