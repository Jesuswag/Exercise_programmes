#include <stdio.h>
#include <string.h>

void extraul (char x[], char y[], int p) {
    int i;
    int lon = strlen(x);
    for (i=lon-p; i<lon; i++) {
        y[i] = x[i];
    }
    y[i] = '\0'; // Hemos rellenado antes con 0 pero supongo que esto es buena practica


}

void main () {
    char x[100] = {0};
    char y[100] = {0};
    int p;
    puts("String: ")
    gets(x);
    puts("P: ");
    scanf("%d",&p);

    extraul(x,y,p);
    printf("%s",y);

}