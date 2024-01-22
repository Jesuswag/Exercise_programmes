#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int tamanio (int vector[]) { //No funcionaria porque en las funciones los arrays se pasan como punteros que van primero a la posicion 0
    int size = sizeof(vector)/sizeof(vector[0]);
    return size;
}

void main () {
    short int peque = -5;
    unsigned positivo = 9;
    unsigned short int pequepositivo = 2;
    printf("Short: %d \nUnsigned: %d \nUnsigned short: %d \n",sizeof(short int),sizeof(unsigned int),sizeof(unsigned short int));
    int entero = 8;
    int vector[7] = {3,5,2};
    printf("Un int pesa: %d bytes\n",sizeof(entero));
    printf("El vector en total pesa: %d bytes\n",sizeof(vector));
    printf("Porque cada elemento pesa: %d bytes\n",sizeof(vector[0]));
    printf("La longitud del vector es por tanto de: %d\n",sizeof(vector)/sizeof(vector[0]));
}