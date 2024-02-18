#include <stdio.h>
int primo(int x){
    if (x == 1) return 0;
    for (int i=2;i<=x-1;i++){
        if (x%i == 0) return 0;
    }
    return 1;
}
int main() {
    int x;
    int suma = 0;
    scanf("%d",&x);
    if (x<=0){
        printf("INVALIDO");
    }else{
        while(x){
            if (primo(x%10)){
                suma += (x%10);
            }
            x/= 10;
        }
        printf("%d",suma);
    }


    return 0;
}
