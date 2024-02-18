#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool vocal(char x) {
    char vocales[6] = "aeiou";
    for (int i=0; i<5; i++) {
        if (x==vocales[i]) {
            return true;
        }
    }
    return false;
}

void latin (char x[], char y[]) {
    int conty = 0;

    for (int i=0; i<strlen(x); i++) {
        if ( (x[i]==' ') && (!vocal(x[i-1])) ) {
            strcat(y,"us ");
            conty += 3;
        } else if ( (x[i]==' ') && (vocal(x[i-1])) ) {
            y[conty-1] = '\0';
            strcat(y,"us ");
            conty += 2;
        } else {
            y[conty] = x[i];
            conty += 1;
        }
    }

    y[conty] = '\0';
}

void main () {
    char frase[100] = {0};
    char traducido[100] = {0};
    gets(frase);
    strcat(frase," "); // para que pille la ultima palabra
    latin(frase,traducido);
    printf("%s",traducido);
}