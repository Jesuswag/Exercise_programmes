#include <stdio.h>

void leer(int m, int n, int matriz[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimir(int m, int n, int matriz[n][m]) {
    printf("{ ");
    for (int i = 0; i < n; i++) {
        printf(" {");
        for (int j = 0; j < m; j++) {
            printf("%d, ", matriz[i][j]);
        }
        printf("} ");
    }
    printf(" }");
}

void main() {
    int n, m;
    puts("n:");
    scanf("%d", &n);
    puts("m:");
    scanf("%d", &m);

    int matriz[n][m];
    leer(m, n, matriz);
    imprimir(m, n, matriz);
}