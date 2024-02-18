
#include <stdio.h>
#define MAX_COCHES_SECCION 10
#define MAX_PLANTAS   3
#define MAX_SECCION 4

#include <time.h>
#include <math.h>

void vaciarAparcamiento(int m[MAX_PLANTAS][MAX_SECCION],int disponibles[]);
void ocupacion (int m[MAX_PLANTAS][MAX_SECCION],int disponibles[MAX_PLANTAS],char colorPlanta[MAX_PLANTAS][15]) ; //libres en cada planta

// Mis funciones:
int plazasLibresPlanta (int m[MAX_PLANTAS][MAX_SECCION], int planta);
int aparcar(int planta, int m[MAX_PLANTAS][MAX_SECCION],int disponibles[MAX_PLANTAS]);

int main()
{   char colorPlanta[MAX_PLANTAS][15]={"roja","azul","amarilla"};
    int planta,total;
    int aparcamiento[MAX_PLANTAS][MAX_SECCION];
    int disponibles[MAX_PLANTAS];
    int opcion=0,numplanta;
    vaciarAparcamiento(aparcamiento,disponibles);
    //Mis variables:
    int plantaparcar;

    while (opcion!=4)
    {
        printf("\nPARKING \n***********************\n\n\t");
        printf("1.Vaciar Aparcamiento\n\t");
        printf("2.Aparcar Coche (LA PLANTA BAJA ES LA 0)\n\t");
        printf("3.Comprobar ocupacion\n\t");
        printf("4.Salir\n\n\t\t");
        printf("Opcion:");
        scanf("%d",&opcion);
        switch (opcion){
         case 1:
                //Completa el c�digo
                vaciarAparcamiento(aparcamiento,disponibles);
                break;

         case 2:
                printf("Introduzca la planta donde quiere aparcar: ");
                scanf("%d",&numplanta);
                // Completa el c�digo llamando a la funci�n correspondiente
                // Mostrar el color de la planta asignada
                // Mostrar el total de plazas disponibles.
                plantaparcar = aparcar(numplanta,aparcamiento,disponibles);
                if (plantaparcar != -1){
                    printf("Ha aparcado en la planta %s.",colorPlanta[plantaparcar]);
                    printf("En esta planta quedan %d plazas disponibles.",disponibles[plantaparcar]);
                }else printf ("No hay mas plazas disponibles. Lo sentimos.");
                break;
            case 3:
                   //Completa el c�digo
                   ocupacion(aparcamiento,disponibles,colorPlanta);
                   break;
            case 4:
                   printf("Fin de la Aplicacion");
                   break;
            default: printf("Opcion Incorrecta ...");
        }

    }

}


void vaciarAparcamiento(int m[MAX_PLANTAS][MAX_SECCION],int disponibles[] ){
    int i,j;

    for(j=0;j<MAX_PLANTAS;j++){
        disponibles[j]= MAX_COCHES_SECCION * MAX_SECCION;
    }
       for(i=0;i<MAX_PLANTAS;i++)
           for(j=0;j<MAX_SECCION;j++)
               m[i][j]=0;

}


void ocupacion (int m[MAX_PLANTAS][MAX_SECCION],int disponibles[MAX_PLANTAS],char colorPlanta[MAX_PLANTAS][15])
{
    int i,j;

    printf("\nPANEL DE CONTROL DE PLAZAS\n");

    for(i=0;i< MAX_PLANTAS;i++)
    {
        printf("\nExisten %d plazas disponibles en la planta %s\n\n",disponibles[i],colorPlanta[i]);
        for(j=0;j< MAX_SECCION;j++)
        {   if (m[i][j]!=0)
               printf("\nPlanta %s Existen %d plazas disponibles en la seccion %d\n",colorPlanta[i], MAX_COCHES_SECCION-m[i][j],j+1);
        }

    }
}

int plazasLibresPlanta (int m[MAX_PLANTAS][MAX_SECCION], int planta){
    for (int i = 0;i<MAX_SECCION;i++){
        if (m[planta][i] <10) return i;
    }
    return -1;
}

int aparcar(int planta, int m[MAX_PLANTAS][MAX_SECCION],int disponibles[MAX_PLANTAS]){
    int plazalibre;
    for (int i = planta;i<MAX_PLANTAS;i++){
        plazalibre = (plazasLibresPlanta(m,i));
        if (plazalibre != -1){
            disponibles[i] -= 1;
            m[i][plazasLibresPlanta(m,i)] +=1;
            return i;
        }
    }
    return -1;
}