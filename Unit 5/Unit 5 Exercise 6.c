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

void leer(){
    int n;
    do{
        scanf("%d",&n);
    } while (!primo(n));
}

int main() {
    puts("Mete numeros, cuando sea primo el programa acabara.");
    leer();
    puts("Saliendo del programa");
    return 0;
}
