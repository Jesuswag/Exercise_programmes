#include <stdio.h>

int main() {
    int i, big, small,n;
    float suma = 0;
    i = 0;
    puts("Introduce varios numeros, cuando quieras parar introduce 0");
    scanf("%d",&n);
    small = n;
    big = n;
    while (n){
        suma += n;
        if (big<n) big =n;
        if (n<small) small = n;
        i++;
        scanf("%d",&n);
        }
    printf("Has introducido %d numeros.\nEl mas grande es el %d.\nEl mas chico es el %d.\nLa media de los numeros es igual a %f.",i,big,small,suma/i);
    return 0;
}