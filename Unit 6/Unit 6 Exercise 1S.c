#include <stdio.h>
#include <string.h>
void Extrae(char cador[], int n, char cadres[]);

int main() {
    int n, tamanio;
    puts("Introduce la longitud de tu cadena");
    scanf("%d",&tamanio);
    fflush(stdin);

    char cadena[tamanio];
    char final[tamanio];
    puts("Introduce la cadena");
    gets(cadena);
    puts("Cuantos digitos quieres extraer?");
    fflush(stdin);
    scanf("%d",&n);
    Extrae(cadena,n,final);
    puts(final);
    return 0;
}

void Extrae(char cador[], int n, char cadres[]){
    if (n <strlen(cador)){ // comprueba si me pide menos caracteres que hay en la cadena
        strcpy(cadres,cador);
        cadres[n] = '\0'; //corto la cadena en la posicion n
    }
    else strcpy(cadres, cador); //la salida es toda la cadena
}

void Extrae2(char cador[],int n,char cadres[]){
    int i;
    if (n<strlen(cador)) {
        for (i = 0; i < n; i++) {
            cadres[n] = '\0';
        }
    }
    else strcpy(cadres,cador);
}