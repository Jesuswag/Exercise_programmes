#include <stdio.h>
#define GRADO 3
struct Monomio{
    float coef;
    float exp;
};

void leer(struct Monomio polinomio[]){
    for (int i=0;i<GRADO;i++){
        printf("Termino %d -> ",i);
        scanf("%f",&polinomio[i].coef);
        printf("Exponente %d -> ",i);
        scanf("%f",&polinomio[i].exp);
    }
}

void imprimir(struct Monomio polinomio[]){
    for (int i = 0;i<GRADO;i++){
        printf("%.2fx^%.2f",polinomio[i].coef,polinomio[i].exp);
        if ((i+1) <GRADO) printf(" + ");
    }
    printf("\n");
}

int main() {
    struct Monomio polinomio[GRADO];
    int exe = 1;
    int option;
    while (exe){
        puts("Seleccione opcion:\n1.Introducir polinomio\n2.Imprimir polinomio.\n3.Salir\n");
        scanf("%d",&option);
        switch(option){
            case 3:
                puts("Chao");
                exe = 0;
                break;
            case 2:
                imprimir(polinomio);
                break;
            case 1:
                leer(polinomio);
                break;

        }
    }

    return 0;
}
