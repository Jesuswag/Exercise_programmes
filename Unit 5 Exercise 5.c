#include <stdio.h>
int primo(int n){
    int i;
    if (n<=1) return 0;

    for (i=n-1; i!=1; i--){
        if (n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int prueba;
    puts("Introduce un numero para saber si es primo:");
    scanf("%d",&prueba);
    prueba = primo(prueba);
    if (prueba){
        puts("El numero si es primo.");
    } else puts("El numero no es primo.");

    return 0;
}
