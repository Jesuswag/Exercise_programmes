#include <stdio.h>

int main() {
    int cupon;
    puts("Escribe el cupon de la once:");
    scanf("%d",&cupon);
    printf("La ultima cifra del numero es: %d",cupon%10);
    return 0;
}
