#include <stdio.h>
#include <string.h>

void noinitialspace(char x[]) {
    int i,j,len;
    char y[100] = {0};
    i=j=0;
    len = strlen(x);

    while (x[i]==' ') {
        i++;
    }
    while(i < len) {
        y[j] = x[i];
        j++;
        i++;
    }
    strcpy(x,y);
}

void main () {
    char x[100] = {0};
    puts("Introduce la cadena: ");
    gets(x);

    noinitialspace(x);
    printf("%s",x);

}