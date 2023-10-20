#include <stdio.h>

void main() {
    int numero,potencia, nuevonum,comprobar = 0;
    nuevonum = 0;
    puts("Introduce un numero para saber comprobar es automorfico");
    scanf("%d",&numero);
    potencia = numero * numero;
    while (potencia){
        nuevonum+= potencia % 10;
        if (nuevonum == numero){
            puts("SI");
            comprobar = 1;
        }
        potencia /= 10;
        nuevonum *= 10;
    }
    if (!comprobar){
        puts("NO");
    }
}
