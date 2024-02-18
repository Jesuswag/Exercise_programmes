#include <stdio.h>
#include <math.h>
int main() {
    int n;
    int suma = 0;
    int i = 0;
    int newx;
    float media;
    scanf("%d",&n);
    newx = n;
    do{
        suma += newx%10;
        newx/=10;
        i++;
    }while(newx);
    media = suma/(float)i;
    if (media-(int)media >= 0.5){
        media+= 1;
    }
    printf("%d%d",n,(int)media);
    return 0;
}
