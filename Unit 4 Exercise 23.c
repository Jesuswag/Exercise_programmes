#include <stdio.h>

int main() {
    int num, s,st,i;
    s = st = i = 0;
    puts("Introduce numeros y cuando estes harto pulsa 0");
    for (i=1;num;i++){
        printf("Introduce el numero %d\n",i);
        scanf("%d",&num);
        s += num;
        if (num){
            st += s;
        }
    }
    printf("Resultado de S: %d \nResultado de St: %d",s,st);
    return 0;
}
