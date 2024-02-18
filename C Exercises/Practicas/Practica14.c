#include <stdio.h>

int main() {
    puts("Escribe a continuacion un caracter en minusculas:");
    char minuscula = getchar();
    char mayusculas = minuscula - 32;
    putchar(mayusculas);
}
