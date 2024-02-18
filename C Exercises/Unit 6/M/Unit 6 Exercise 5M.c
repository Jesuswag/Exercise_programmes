#include <stdio.h>

void leer (int n, int m, int matriz[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimir(int m, int vector[m]) {
    printf(" {");
    for (int j = 0; j < m; j++) {
        printf("%d, ", vector[j]);
    }
    printf("} ");
}


void colsum (int n, int m, int matrix[n][m], int vector[m]) {
    for (int i=0; i<m; i++) {
        vector[i] = 0;
        for (int j=0; j<n; j++) {
            vector[i] += matrix[j][i];
        }
    }
}

void main () {
    int n,m;
    puts("n,m");
    scanf("%d,%d",&n,&m);
    int matrix[n][m];
    int vector[m];
    leer(n,m,matrix);
    colsum(n,m,matrix,vector);
    imprimir(m,vector);
}