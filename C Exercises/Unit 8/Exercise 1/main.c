#include <stdio.h>

int main(){
    FILE *parchivo = fopen("texto.txt","w");
    for (int i=1;i<=100;i++){
        fprintf(parchivo," %d ",i);
    }
    fclose(parchivo);
    return 0;
}