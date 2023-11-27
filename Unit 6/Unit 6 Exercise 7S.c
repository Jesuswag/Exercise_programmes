#include <stdio.h>
#include <string.h>
void insertar(int p, char a[], char b[],int tamanio1){
    char auxiliar[tamanio1];
    int contador = 0;
    for (int i = p;i<=strlen(a);i++){
        auxiliar[contador] = a[i];
        contador++;
    }
    puts(auxiliar);
    a[p] = '\0';
    strcat(a,b);
    strcat(a,auxiliar);
}

int main() {
    int tamanio1, tamanio2,p;

    puts("Tamanio cadena 2?");
    scanf(" %d",&tamanio2);
    char b[tamanio2+1];
    puts("Metela:");
    scanf(" %s",b);

    puts("Tamanio cadena 1?");
    scanf(" %d",&tamanio1);
    char a[tamanio1+tamanio2+1];
    puts("Metela:");
    scanf(" %s",a);

    puts("A partir de que posicion del primer string quieres introducir el segundo?");
    scanf(" %d",&p);

    insertar(p,a,b,tamanio1);
    puts(a);

    return 0;
}