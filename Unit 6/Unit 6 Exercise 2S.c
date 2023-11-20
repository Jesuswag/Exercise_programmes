#include <stdio.h>
#include <string.h>
void extrault(int n, char cad[], char sol[]){
    int j = 0;
    for (int i = strlen(cad)-n;i<strlen(cad);i++){
        sol[j] = cad[i];
        j++;
    }
    sol[j] = '\0';
}
int main() {
    char cad[201],sol[201];
    int n;
    puts("Introduce cadena (max 200)");
    gets(cad);
    puts("Cuantos digitos quieres extraer del final?");
    scanf("%d",&n);
    extrault(n,cad,sol);
    puts(sol);
    return 0;
}
