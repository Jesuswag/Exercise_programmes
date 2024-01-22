#include <stdio.h>
#include <string.h>

void deleter(char frase[]) {
    int newpos, oldpos;
    newpos = oldpos = 0;
    while(newpos < strlen(frase)) {
        if (frase[newpos] == ' ') { 
            newpos++;
        }
        frase[oldpos] = frase[newpos];
        newpos++;
        oldpos++;
    }
    frase[oldpos] = '\0';
}

void main () {
    char frase[100] = {0};
    puts("Frase:");
    gets(frase);

    deleter(frase);
    printf("%s",frase);
}