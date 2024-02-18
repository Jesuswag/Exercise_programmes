/*
 * File:   plantillaP5.c
 * Author: usuario
 * Created
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "misterio.h"

//variables globales
int longitudPal;
// prototipos de las funciones

void usa_letra(char palabra[], char aciertos[], char letra);
// Comprueba si la letra existe en palabra, y si existe,
// sustituye la letra en el vector aciertos (cambia '_' por
//la 'letra')

bool iguales(char p1[], char p2[]);
// Devuelve 1 si palabra1 (p1) y palabra2 (p2) son
//iguales y 0 si no lo son

void pide_entrada(char entrada[]);
// lee la entrada del usuario y la guarda en entrada
//puede ser una letra o una palabra

int check_entrada(char entrada[],char aciertos[],char palabra[]);
/* Si la entrada es un caracter (longitud 1):
 *   comprueba si esta letra aparece en la solución => usa_letra()
 *   y comprueba si las letras acertadas ya son la palabra buscada  => iguales()
 *
 * Si la entrada es una cadena:
 *    mira si directamente es la solucion => iguales()
 *   (las dos palabras son iguales)
 */
void imprimePalabra (char p[]);
//imprime la jugada

int main(){

    // Variables que guardan el estado del juego.
    int INTENTOS ;		// Numero de intentos permitido

    char palabra[20];           // Palabra oculta a descubir
    char entrada[20];    	// Entrada del usuario;
    char aciertos[20];	// Cadena que se va rellenado con los aciertos

    int tam;                 	// Tamaño de la palabra oculta
    int jugadas=1;              // Contador de intentos
    bool acertado = false;      // Acertado o No (valor booleano)

    int i;

    printf("Inicio del juego.\n\n");

    longitudPal=tam =eligePalabra(palabra);


    INTENTOS=tam +1;
    // Inicializa la plantilla aciertos: "_______".
    for (i=0;i<tam;i++)
        aciertos[i]='_';
    aciertos[tam]='\0'; // Añade el caracter de fin de cadena

    printf("Palabra:" );
    imprimePalabra (aciertos);
    printf("(%d)\n\n",tam);
    while((jugadas < INTENTOS) && (!acertado)){
        pide_entrada(entrada);
        acertado = check_entrada(palabra,aciertos, entrada);
        if (!acertado)
            printf("\nIntento %d: %s\n",++jugadas,aciertos);
    }

    if (acertado)
        printf("\n%s!!! Acertado en %d jugadas!", palabra, jugadas);

    else 		// se alcanza el número de intentos sin acertar
        printf("\nLa palabra correcta era: %s",palabra);
}

// Funciones

void pide_entrada(char entrada[]){
    // lee la entrada del usuario y la guarda en entrada
    scanf("%s",entrada);
}


int check_entrada(char palabra[],char aciertos[], char entrada[]){
    int devuelve=0;
    if (strlen(entrada)==1){ // Si el tamaño es uno => es una letra
        // Completar
        usa_letra(palabra,aciertos,entrada[0]);
        return iguales(palabra,aciertos);
    }
    else{
        // Completar
        return iguales(palabra,entrada);

    }

    return devuelve;
}


bool iguales(char p1[], char p2[]){
    // Completar
    int mayor;
    if (strlen(p1) != strlen(p2)) {
        return 0;
    }else{
        for (int i = 0; i < strlen(p1); i++) {
            if (p1[i] != p2[i])
            return 0;
        }
    }
    return 1;
}

void usa_letra(char palabra[], char aciertos[], char letra){
    // Completar
    for (int i = 0;i<strlen(palabra);i++) {
        if (palabra[i] == letra) {
            aciertos[i] = letra;
        }
    }
}

void imprimePalabra (char p[]){
    // Completar
    puts(p);
}
