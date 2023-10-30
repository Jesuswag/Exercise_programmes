#include <stdio.h>


int binario(int num);

int main() {
    int num;
    puts("Mete numero decimal para pasar a binario");
    scanf("%d",&num);
    printf("El numero %d en base 2 es %d",num,binario(num));
    return 0;
}

int binario(int num){
    int i, aux;
    aux = 0;
    i = 1;
    do{
        aux += num%2 *i;
        i*=10;
        num/=2;
    } while(num);
    return aux;
}