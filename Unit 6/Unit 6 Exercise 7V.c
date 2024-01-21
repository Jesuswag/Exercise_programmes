#include <stdio.h>

#define SUMA 0
#define MEDIA 1
#define MIN 2
#define MAX 3

void operar (int vector[],int len, float resultado[]) {
    //Inicializo la suma!!!
    resultado[SUMA] = 0;
    //Pa comparar
    int grande, peque;
    grande = peque = vector[0];

    for (int i=0; i<len; i++) {
        resultado[SUMA] += vector[i];
        if (vector[i] > grande) grande = vector[i];
        if (vector[i] < peque) peque = vector[i];
    }
    resultado[MEDIA] = resultado[SUMA]/len;
    resultado[MIN] = peque;
    resultado[MAX] = grande;
}

void main () {
    int len;
    float res[4];

    puts("Cuantos numeros?");
    scanf("%d",&len);
    int vec[len];
    
    for (int i=0; i<len; i++) {
        printf("Numero [%d]: ",i);
        scanf("%d",&vec[i]);
    }
    operar(vec,len,res);
    printf("Suma: %f \nMedia: %f \nMin: %f \nMax: %f\n",res[0],res[1],res[2],res[3]);
}