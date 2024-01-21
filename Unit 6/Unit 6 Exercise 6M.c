#include <stdio.h>

void imprimir (int n, int m, int vector[n][m]) {
    printf("{ ");
    for (int i = 0; i < n; i++) {
        printf(" {");
        for (int j = 0; j < m; j++) {
            printf("%d, ", vector[i][j]);
        }
        printf("} ");
    }
    printf(" }");
}

void leer (int n, int m, int matriz[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void traspuesta (int n, int m, int matrix[n][m], int flip[m][n]) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            flip[i][j] = matrix[j][i];
        }
    }
}

void main () {
    int n,m;
    do {
        puts("n,m (MAX 20)");
        scanf("%d,%d",&n,&m);
    } while (n>20 || m>20);

    int matrix[n][m];
    int flip[m][n];
    leer(n,m,matrix);
    traspuesta(n,m,matrix,flip);
    imprimir(n,m,flip);

}