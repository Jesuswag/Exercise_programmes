#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int jugar0(int m);
int jugar1(int m);
int jugar2();
void actualizar(int quien, int *G, int *P, int *T);
void estad(char inicial, int G, int P, int T);
void reset(char *inicial, int *G, int *P, int *T);
char LeeInicial();
int dificultad();


int main()
{
    int opcion,ganador,dif;
    char inicial='X';
    int ganadasYo=0, perdidasYo=0, total=0;

    do{
        printf("\n\n1. Iniciar una nueva partida.\n");
        printf("2. Mostrar estad�sticas de las jugadas\n");
        printf("3. Introducir jugadores.\n");
        printf("4. Resetear juego.\n");
        printf("5. Salir del programa\n");
        printf("Elige una opcion: ");
        scanf("%d",&opcion);
        switch(opcion){
            case 1: dif=dificultad();
                int n;
                if(dif==1){
                    do{
                        printf("Cuantas monedas? (>=10)");
                        scanf("%d",&n);
                    }while(n<10);
                    ganador=jugar0(n);
                }
                else if (dif==2){
                    do{
                        printf("Cuantas monedas? (>=30)");
                        scanf("%d",&n);
                    }while(n<30);
                    ganador=jugar1(n);
                }
                else {
                    printf("Jugamos con 21 monedas, a ver que haces ...\n");
                    ganador=jugar2();
                }
                actualizar(ganador,&ganadasYo,&perdidasYo,&total);
                break;

            case 2:estad(inicial,ganadasYo,perdidasYo,total);
                break;
            case 3:inicial=LeeInicial();
                break;
            case 4: reset(&inicial,&ganadasYo,&perdidasYo,&total);
                break;
            case 5: printf("Adios ...");
                break;
            default: printf("Opcion incorrecta ...");


        }
    }while(opcion!=5);

    return 0;


}

void actualizar(int quien, int *G, int *P, int *T){
    if(quien==2) (*G)++;
    else (*P)++;
    (*T)++;
}

void reset(char *inicial, int *G, int *P, int *T){
    *inicial='X';
    *G=0;
    *P=0;
    *T=0;
}

void estad(char inicial, int G, int P, int T){
    printf("Jugador %c:\n", inicial);
    printf("Ganadas: %d\n", G);
    printf("Perdidas %d\n\n", P);
    printf("Ordenador:\n");
    printf("Ganadas: %d\n", (T-G));
    printf("Perdidas %d\n", (T-P));
    printf("Total de jugadas: %d\n\n", T);


}

char LeeInicial(){
    printf("Dame la inicial: ");
    return getche();

}

int dificultad(){
    int D;
    printf("Nivel de dificultad (1/2/3)\n");
    scanf("%d",&D);
    return D;
}


int jugar0(int m){

    int  p, c;
    srand((unsigned)time( NULL));


    while(1)
    {
        do{
            printf("Coge 1 , 2 , 3 o 4 monedas\n");
            scanf("%d", &p);
        }while (p < 1 || p > 4);

        m = m - p;
        printf("Quedan %d monedas\n", m);
        if(m == 1)
        {
            printf("HAS GANADO !!!!...\n");
            return 2;
        }
        if(m-1<=4) c=m-1;
        else c =((int)rand() % 4)+1;
        printf("\nEl ordenador coge %d monedas \n", c);

        m = m - c;
        printf("Quedan %d monedas\n", m);
        if(m == 1)
        {
            printf("HAS PERDIDO, JA, JA JA ...\n");
            return 1;
        }

    }

}


int jugar1(int m){

    int  p, c;

    while(1)
    {
        do{
            printf("Coge 1 , 2 , 3 o 4 monedas\n");
            scanf("%d", &p);
        }while (p < 1 || p > 4);

        m = m - p;
        printf("Quedan %d monedas\n", m);
        if(m == 1)
        {
            printf("HAS GANADO !!!!...\n");
            return 2;
        }


        int quedan=m-21;
        if(quedan>=1 && quedan<=4) c=quedan;
        else if(quedan<=0) c=5-p;
        else c=1;

        printf("\nEl ordenador coge %d monedas \n", c);

        m = m - c;
        printf("Quedan %d monedas\n", m);
        if (m<=0){
            printf("Que tonto ...!!!  ");
            printf("HAS GANADO !!!!...\n");
            return 2;
        }
        else if(m == 1)
        {
            printf("HAS PERDIDO, JA, JA JA ...\n");
            return 1;
        }

    }

}

int jugar2(){

    int  p, c;
    int m=21;
    while(1)
    {
        do{
            printf("Coge 1 , 2 , 3 o 4 monedas\n");
            scanf("%d", &p);
        }while (p < 1 || p > 4);

        m = m - p;
        printf("Quedan %d monedas\n", m);
        c=5-p;
        printf("\nEl ordenador coge %d monedas \n", c);
        m = m - c;
        printf("Quedan %d monedas\n", m);
        if(m == 1)
        {
            printf("HAS PERDIDO, JA, JA JA ...\n");
            return 1;
        }

    }

}