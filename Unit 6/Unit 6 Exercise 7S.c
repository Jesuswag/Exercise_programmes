#include <stdio.h>
#include <string.h>
void insertar(int p, char a[], char b[]){
    a[p] = '\0';
    strcat(a,b);
}

int main() {
    int tamanio1, tamanio2,p;

    puts("Tamanio cadena 1?");
    scanf(" %d",&tamanio1);
    char a[tamanio1+1];
    puts("Metela:");
    scanf(" %s",a);

    puts("Tamanio cadena 2?");
    scanf(" %d",&tamanio2);
    char b[tamanio2+1];
    puts("Metela:");
    scanf(" %s",b);

    puts("A partir de que posicion del primer string quieres introducir el segundo?");
    scanf(" %d",&p);

    insertar(p,a,b);
    puts(a);

    return 0;
}
