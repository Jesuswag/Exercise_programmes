#include <stdio.h>

int main() {
    char letra, letraanterior = ' ';
    int conteo = 0;


    while (1) {
        scanf(" %c", &letra);
        fflush(stdin);
        if (letra == '%') {
            break;
        } else if ((letra == 'l') && (letraanterior == 'c')) {
            conteo++;

        } else if ((letra == 'c') && (letraanterior == 'l')){
            conteo++;
        }

        letraanterior = letra;
    }

    printf("%d", conteo);

    return 0;
}
