#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int question,num;
    puts("1:Generar nuevo archivo aleatorio. \n0:Leer actual archivo.");
    scanf("%d",&question);

    if (question)
    {
        FILE *parchivo = fopen("texto.bin","w+b");
        srand((unsigned int) time (NULL));

        for (int i = 0; i<50;i++){
            num = rand();
            fwrite(&num,sizeof(int),1,parchivo);
        }
        fclose(parchivo);
    }
    else
    {
    FILE *parchivo = fopen("texto.bin","rb");
    while (fread(&num, sizeof(int), 1, parchivo)) {
        printf("%d\n", num);
    }
    fclose(parchivo);
    }
    
    printf("El archivo pesa %d bytes.",sizeof(int)*50);
    return 0;
}