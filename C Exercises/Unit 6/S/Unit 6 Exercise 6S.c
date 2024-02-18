#include <stdio.h>
#include <string.h>

void function_6(char x[], char y[], int n, int p) {
    int cont = 0;

    for (int i=p+1; cont<n; i++) {
        y[cont] = x[i];
        cont++;
    }
    y[cont] = '\0';

}

void main () {
    char x[100] = {0};
    char y[100] = {0};    
    int p,n;

    puts("X: ");
    gets(x);

    puts("N: ");
    scanf("%d",&n);
    puts("P: ");
    scanf("%d",&p);

    function_6(x,y,n,p);
    printf("%s",y);
}