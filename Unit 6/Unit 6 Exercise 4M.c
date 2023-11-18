#include <stdio.h>
void colmin(int n, int m, int a[n][m], int c[n]){
    int menor;
    for (int i = 0;i<n;i++){
        menor = a[i][0];
        for (int j = 0;j<m;j++){
            if (a[i][j]< menor){
                menor = a[i][j];
            }
        }
        c[i] = menor;
    }
}

void leer(int n, int m, int x[n][m]){
    for (int i = 0;i<n;i++){
        for (int j = 0;j<m;j++){
            printf("x[%d][%d]",i,j);
            scanf("%d",&x[i][j]);
        }
    }
}

void escribir(int n, int x[n]){
    printf("{ ");
    for (int i = 0;i<n;i++){
        printf("%d, ",x[i]);
    }
    printf("}");
}

void main() {
    int n,m;
    puts("Cuantas filas?");
    scanf("%d",&n);
    puts("Cuantas columnas?");
    scanf("%d",&m);

    int a[n][m],c[n];
    puts("Introduce el primer vector");
    leer(n,m,a);

    colmin(n,m,a,c);
    escribir(n,c);
}
