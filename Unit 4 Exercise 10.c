#include <stdio.h>

int main() {
    int i, oldy, x, y;
    i = 1;
    puts("Introduce dos numeros a dividir separados por espacio");
    scanf("%d %d",&x,&y);
    oldy = y;
    while ((y + oldy) <= x){
        y = y + oldy;
        i++;
    }
    printf("La division entre %d y %d es: %d",x,oldy,i);
}
