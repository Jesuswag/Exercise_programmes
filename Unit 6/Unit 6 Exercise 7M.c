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

int sum_sin_diagonal (int n, int m, int a[n][m]) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i!=j) suma += a[i][j];
        }
    }
    return suma;
}

void main() {
    int n, m;
    puts("n:");
    scanf("%d", &n);
    puts("m:");
    scanf("%d", &m);
    int a[n][m];
    leer(n,m,a);
    printf("%d",sum_sin_diagonal(n,m,a));
}