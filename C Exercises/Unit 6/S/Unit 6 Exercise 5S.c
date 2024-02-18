#include <stdio.h>
#include <string.h>

void between(char x[], int n, int p) {
    char aux[100] = {0};
    int cont = 0;

    for (int i=p+n+1; i<strlen(x); i++) {
        aux[cont] = x[i];
        cont++;
    }
    x[p+1] = '\0';
    strcat(x,aux);
}

void main () {
    char x[100] = {0};
    int p,n;

    puts("X: ");
    gets(x);
    puts("N: ");
    scanf("%d",&n);
    puts("P: ");
    scanf("%d",&p);
    between(x,n,p);
    printf("%s",x);
}