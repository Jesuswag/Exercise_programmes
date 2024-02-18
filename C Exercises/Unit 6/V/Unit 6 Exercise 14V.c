#include <stdio.h>
#include <string.h>

void contabilizar (char frase[]) {
    float suma = 0;
    int media;
    int registro[100];
    int cont_frase = 0;
    int cont_registro = 0;
    while (frase[cont_frase] != '\0') {
        registro[cont_registro] = 0;
        while (frase[cont_frase] != ' ') {
            registro[cont_registro] += 1;

            cont_frase += 1;
        }
        printf("Num letras palabra %d: %d\n",cont_registro+1,registro[cont_registro]);
        suma += registro[cont_registro];
        cont_registro += 1;

        cont_frase += 1;
    }
    printf("Num total letras: %f\n", suma);
    printf("Tamanio medio: %f\n",suma/cont_registro);
}







void main () {
    char frase[100];
    gets(frase);
    contabilizar(frase);

}