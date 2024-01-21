#include <stdio.h>

void leer(int m, int n, float matriz[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}

void imprimir(int m, int n, float vector[n][m]) {
    printf("{ ");
    for (int i = 0; i < n; i++) {
        printf(" {");
        for (int j = 0; j < m; j++) {
            printf("%f, ", vector[i][j]);
        }
        printf("} ");
    }
    printf(" }");
}

void mult(int m1, int m2, int n1, int n2, float matriz_1[n1][m1], float matriz_2[n2][m2], float matriz_3[n1][m2]) {
    for (int i=0; i<n1; i++){
        for (int j=0; j<m2; j++) {
            matriz_3[i][j] = 0;
            for (int k=0; k<m1; k++) { //da igual usar m2 o n1
                matriz_3[i][j] += matriz_1[i][k]*matriz_2[k][j];
            }
        }
    }
}

int main() {
    int n1, m1, n2, m2;
    do {
        puts("Las matrices deben ser compatibles.");
        printf("n1,m1\n");
        scanf("%d,%d",&n1,&m1);
        printf("n2,m2\n");
        scanf("%d,%d",&n2,&m2);
    } while (m1 != n2);

    float matriz_1[n1][m1];
    float matriz_2[n2][m2];
    float matriz_3[n1][m2];

    puts("Matriz uno:");
    leer(m1, n1, matriz_1);
    puts("Matriz dos:");
    leer(m2,n2,matriz_2);
    
    mult(m1,m2,n1,n2,matriz_1,matriz_2,matriz_3);
    imprimir(m2,n1,matriz_3);
}