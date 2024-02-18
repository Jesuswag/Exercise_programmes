#include <stdio.h>
#include <string.h>

int position (char frase[], char letra);

void main () {
    char frase[100] = {0};
    char letra;

    puts("Frase:");
    gets(frase);
    puts("Letra");
    letra = getchar();

    printf("%d",position(frase,letra));
}

int position (char frase[], char letra) {
    for (int i=0; i<strlen(frase); i++) {
        if (letra == frase[i]) return i;
    }
    return -1;
}