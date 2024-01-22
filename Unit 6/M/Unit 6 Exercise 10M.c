#include <stdio.h> //lo he sacado de bing ai pero esq es la ostia el codigo
#include <string.h>

int main() {
    // Matriz de 26x26 para contar la cantidad de veces que aparece cada pareja de letras.
    int count[26][26] = {0};
    // Variables para leer la secuencia de letras.
    char c, prev = '\0';

    // Leer la secuencia de letras hasta encontrar un punto.
    while ((c = getchar()) != '.') {
        // Si la letra anterior y la letra actual son minúsculas, actualizar la matriz.
        if (prev >= 'a' && prev <= 'z' && c >= 'a' && c <= 'z') {
            count[prev - 'a'][c - 'a']++;
        }
        // Actualizar la letra anterior.
        prev = c;
    }

    // Imprimir las parejas de letras que aparecen y la cantidad de veces que aparecen, en orden alfabético.
    printf("Las parejas de letras que aparecen son:\n");
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            if (count[i][j] > 0) {
                printf("%c%c: %d\n", i + 'a', j + 'a', count[i][j]);
            }
        }
    }

    return 0;
}