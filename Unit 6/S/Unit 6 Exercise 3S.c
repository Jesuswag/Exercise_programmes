#include <stdio.h>
#include <string.h>

void nofinalspace(char x[]) { //proud to solve it at the first time
    for (int i=strlen(x)-1; x[i]==' '; i--) {
        x[i] = '\0';
    }
}

void main () {
    char x[100] = {0};
    puts("Introduce la cadena: ");
    gets(x);

    nofinalspace(x);
    printf("%s",x);

}