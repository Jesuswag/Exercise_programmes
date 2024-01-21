#include <stdio.h>

void main () {
    int vector[10];
    for (int i = 0; i<10;i++){
        printf("Numero %d: ",i);
        scanf("%d",&vector[i]);
    }
    for (int i = 0; i<10;i++){
        printf(" %d ",vector[i]);
    }
}