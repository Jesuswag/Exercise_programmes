#include <stdio.h>

int main() {
    int n;
    float x, oldx;
    puts("Introduce un numero X y otro N separado por espacios:");
    scanf("%f %d",&x,&n);
    oldx = x;
    while (n > 1){
        x *= oldx;
        n--;
    }
    printf("%f elevado a %d es igual a %f",oldx,n,x);
}
