#include <stdio.h>
int digitos(int n){
    int i = 0;
    if (n==0) return 1;
    for (;n!=0;i++){
        n /= 10;
    }
    return i;
}
int main() {
    int n;
    puts("Introduce un numero para saber su cantidad de digitos:");
    scanf("%d",&n);
    printf("El numero %d tiene %d digito/s",n,digitos(n));
    return 0;
}
