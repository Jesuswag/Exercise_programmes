#include <stdio.h>
#include <string.h>

int frecuencia(char x[], char y[]) {
    int cont, posy, posx;
    cont = posy = posx = 0;
    
    while (posx < strlen(x)) {
        if (x[posx] == y[posy]) {
            posy++;
            if (posy == strlen(y)) {
                cont++;
                posy=0;
            }
        } else {
            posy = 0;
        }
        x++;
    }
    return cont;
}

void main () {
    char x[100] = {0};
    char y[100] = {0};    

    puts("X: ");
    gets(x);
    puts("Y: ");
    gets(y);

    printf("%d",frecuencia(x,y));
}