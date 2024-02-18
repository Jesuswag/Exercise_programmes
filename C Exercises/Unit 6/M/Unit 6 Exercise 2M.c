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

void sumar(int m, int n, int m1[n][m], int m2[n][m], int m3[n][m]) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            m3[i][j] = m2[i][j] + m1[i][j];
        }
    }
}

int main() {
    int n, m;
    do {
        puts("TAMANIO MAXIMO 20");
        printf("n,m\n");
        scanf("%d,%d",&n,&m);
    } while (n*m >20);

    int matriz_1[n][m];
    int matriz_2[n][m];
    int matriz_3[n][m];

    puts("Matriz uno:");
    leer(m, n, matriz_1);
    puts("Matriz dos:");
    leer(m,n,matriz_2);
    
    sumar(m,n,matriz_1,matriz_2,matriz_3);
    imprimir(m,n,matriz_3);
}