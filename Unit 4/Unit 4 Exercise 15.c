#include <stdio.h>

int main() {
    int diez = 1;
    int n,m,x;

    printf("Introduce el primer numero");
    scanf("%d",&n);
    printf("Ahora el segundo");
    scanf("%d",&m);

    x = m; //aqui usamos la x para luego devolver m a la normalidad
    while (m/10 != 0){ //calculo cuantos digitos tiene m
        m /= 10;
        diez *= 10;
    }

    m = x; //restauramos m y x
    x = 0; //ahora x la usaremos para calcular el espejo de m
    while (m){
        x += m%10 * diez;
        diez /= 10;
        m /= 10;
        }
    if (x == n){
        puts("SI");
    }else{
        puts("NO");
    }

    return 0;
}
