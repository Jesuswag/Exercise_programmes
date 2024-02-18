#include <stdio.h>
#include <string.h>

int main () {
    int question;
    char frase[64];

    puts("0: Leer texto \n1: Meter frases");
    scanf("%d",&question);
    fflush(stdin);
    
    if (question) {

        FILE *parchivo = fopen("frases.txt","a");
        puts("Introduzca frases. Para finalizar meta frase vacia.");
        do {
            gets(frase);
            fputs(frase,parchivo);
        
        } while (strcmp(frase,"") != 0);
        
        fclose(parchivo);
    } else {

        FILE *parchivo = fopen("frases.txt","r");
        while (fgets(&frase,64,parchivo)) {
            printf("%s",frase);
        }
        fclose(parchivo);
    }
    return 0;
}