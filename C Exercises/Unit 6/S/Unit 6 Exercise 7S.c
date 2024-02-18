#include <stdio.h>
#include <string.h>

void between(char x[], char y[], int p) {
    char z[100];
    int countz = 0;
    for (int i=p+1; i<strlen(x); i++) { // supongo que la primera posicion es la 0
        z[countz] = x[i];
        countz++;
    }
    z[countz] = '\0';
    x[p+1] = '\0';
    strcat(x,y);
    strcat(x,z);
}

void main () {
    char x[100] = {0};
    char y[100] = {0};
    int p;
    puts("X: ");
    gets(x);
    puts("Y: ");
    gets(y);
    puts("P: ");
    scanf("%d",&p);

    between(x,y,p);
    printf("%s",x);

}