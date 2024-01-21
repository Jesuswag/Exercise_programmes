#include <stdio.h>

void imprimir(int vector[],int len){
for (int i = 0; i<len;i++){
        printf(" %d",vector[i]);
        if (i<len-1) printf(",");
        else printf(".");
    }
}


void main () {
    int vector[100];
    int i = 0;
    int num;
    puts("Mete numeros (MAX 100). Para acabar pon un 0.");
    do{
        printf("Numero %d: ",i);
        scanf("%d",&num);
        if (num) vector[i] = num;

        i++;
    } while (i<100 && num);
    imprimir(vector,i-1);
}