#include <stdio.h>
void main(){
    int i, n;
    float suma = 0;
    puts("Introduce un numero n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        suma += 1/(float)i;
    }
    printf("%f",suma);
}