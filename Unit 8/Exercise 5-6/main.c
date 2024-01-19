#include <stdio.h>

int main(){
    int num, suma, question;
    FILE *parchivo;
    suma = 0;
    puts("1:Escribir \n0:Leer y media");
    scanf("%d",&question);
    
    if (question) {
        parchivo = fopen("texto.bin","wb");
        for(int i=1;i<=5;i++){
            printf("\nIngrese el numero %d:",i);
            scanf("%d",&num);
            fwrite(&num,sizeof(int),1,parchivo);
        }
        puts("Datos almacenados!");

    }else {
        parchivo = fopen("texto.bin","rb");
        while(fread(&num,sizeof(int),1,parchivo)){
            printf(" %d ",num);
            suma += num;
        }
        printf("\n %f",(float)suma/5);
        printf("\n %lf",sizeof(parchivo));
    }

    fclose(parchivo);
    return 0;
}