#include <stdio.h>

void leer(int n, int m, float matrix[n][m]) { //old exercises did't have good taste in the order of parameters
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%f", &matrix[i][j]);
        }
    }
}

void imprimir(int m, float matrix[m]) {
    printf(" {");
    for (int j = 0; j < m; j++) {
        printf("%f, ", matrix[j]);
    }
    printf("} ");
}

void mincol (int n, int m, float matrix[n][m], float vector[n]) {
    float min;
    for (int i=0; i<m; i++) {
        min = matrix[0][i];
        for (int j=0; j<n; j++) {
            if (matrix[j][i] < min) min = matrix[j][i];
        }
        vector[i] = min;
    }
}

void main () {
    int n,m;
    puts("n,m");
    scanf("%d,%d",&n,&m);
    float matrix[n][m];
    float vector[n];

    leer(n,m,matrix);
    mincol(n,m,matrix,vector);
    imprimir(n,vector);
}