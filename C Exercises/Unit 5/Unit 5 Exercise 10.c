#include <stdio.h>
int fposicion(int x,int pos){
    int i = 1;
    int newx = x;
    while (x/10 != 0){
        i++;
        x /= 10;
    }
    i -= pos-1;
    while (i != 1){
        newx /= 10;
        i--;
    }
    return newx%10;

}
int main() {
    int numero, posicion;
    puts("Mete un numero");
    scanf("%d",&numero);
    puts("Mete una posicion de un numero");
    scanf("%d",&posicion);
    printf("La posicion %d del numero %d es %d",posicion,numero, fposicion(numero,posicion));
    return 0;
}
