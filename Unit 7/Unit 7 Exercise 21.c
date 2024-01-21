#include <stdio.h>
//El ejercicio no es muy claro.
struct Alumno {
    char DNI[10];
    char nombre[15];
    char direccion[30];
    float notas[3]; // Imagino que una para cada año
};

float media(struct Alumno lista, int num_alumno,anio);
float leer(struct Alumno lista, int num_alumno);

void main(){
    int num_alumno;
    int exit = 0;
    int anio;
    int opcion;
    do {
        puts("Cuantos alumnos hay en la escuela?");
        scanf("%d",&num_alumno);
    } while (num_alumno <= 0);

    struct Alumno Lista[num_alumno];

    while (!exit){
        puts("0:Introducir datos. \n1:Nota media \n2:Salir")
        scanf("%d",&opcion);
        switch (opcion){
            case 0:
                leer(lista,num_alumno);
                break;
            case 1;
                puts("De que anio (1,2,3) quiere ver la media?");
                scanf("%d",&anio);
                printf("%f",media(lista,num_alumno,anio));
                break;
            case 2;
                exit = 1;
                break;
            default;
                puts("Opcion incorrecta");
        }
    }
}

float media(struct Alumno lista, int num_alumno, int anio){
    float suma = 0;

    for (int i=0; i<num_alumno;i++){
        suma += lista[i].notas[anio-1];
    }
    return suma/num_alumno;
}

void leer(struct Alumno lista, int num_alumno){
    for (int i=0;i<num_alumno;i++){
        printf("\nAlumno nº %d:",i+1);
        printf("DNI: ");
        scanf("%s",lista[i].DNI);
        printf("Nombre: ");
        gets(lista[i].nombre);
        printf("Direccion: ");
        gets(lista[i].direccion);
        for (j=0;j<3;j++){
            printf("Nota anio %d: ",j+1);
            scanf("%f",&lista[i].notas[j]);
        }
    }
}