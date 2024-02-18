#include <stdio.h>

int main() {
    char letra;
    char ketra = ' ';
    int contador = 0;
    do{
        letra = getchar();
        getchar(); // limpiar el buffer
        if (letra == 'a' && ketra == 'l') contador++;
        ketra = letra;
    }while (letra != '$');
    printf("'la' aparecio %d veces",contador);
    return 0;
}
