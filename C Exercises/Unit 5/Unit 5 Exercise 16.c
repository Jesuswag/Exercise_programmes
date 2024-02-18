#include <stdio.h>
#include <math.h>
void binario(int code, int *suma);

int main() {
    int code,suma = 0;
    puts("Introduce un numero en codigo binario");
    scanf("%d",&code);
    binario(code,&suma);
    printf("%d en binario es: %d",code,suma);
    return 0;
}

void binario(int code, int *suma){
    int peso = 0;
    do{
        *suma += code%10 * pow(2,peso);
        peso += 1;
        code /=10;
    }while(code);

}

