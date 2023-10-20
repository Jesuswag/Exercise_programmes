#include <stdio.h>

int primo(int num){
    for (int i = num-1;i>1;i--){
        if (num%i == 0) return 0;
    }
    return num;
}

void factor(int num) {
    for (int i = 2; i <= num || num != 1; i++) {

        if ((primo(i)) && (num % primo(i) == 0)) {

            if (num/primo(i) == 1) {
                printf("%d",primo(i));}
            else {
                printf("%d * ", primo(i));}

            num /= primo(i);
            i--;
        }
    }
}
int main() {
    int x;

    puts("Introduce un numero entero para conocer su factorizacion");
    scanf("%d",&x);
    printf("%d = ",x);

    if (x!=1){
        factor(x);
    } else printf("1");
    
    return 0;
}
