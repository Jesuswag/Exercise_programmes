#include <stdio.h>
float norecu(float x, int n){
    float denominador = x;
    for (int i=2;i<=n;i++){
        denominador = x + i/denominador;
    }
    return denominador;
}

float sirecu(float x,int n){
    if (n==2) return x+2/x;
    else return x+ n/sirecu(x,n-1);
}
int main() {
    float x;
    int n;
    puts("Mete x");
    scanf("%f",&x);
    puts("Mete n");
    scanf("%d",&n);
    printf("La expresion con x=%.2f y n=%d es igual a %f\n",x,n,norecu(x,n));
    printf("La expresion con x=%.2f y n=%d es igual a %f",x,n,sirecu(x,n));
    return 0;
}
