#include <stdio.h>
// El enunciado no es muy claro que digamos. :/
// Como no dice cuantas notas por cada curso el pt.3 lo hago a mi forma
struct Alumno {
    char DNI[10];
    char nombre[10];
    char direccion[20];
    float notas[3]; // Una para cada anio.
};

void leer (int num_alumnos, struct Alumno lista[num_alumnos]);
float media(int num_alumnos, struct Alumno lista[num_alumnos]);

void main () {
    int num_alumnos;
    puts("Cuantos alumnos hay en el cole?");
    scanf("%d",&num_alumnos);
    fflush(stdin);

    struct Alumno lista[num_alumnos];
    leer(num_alumnos,lista);
    printf("%f",media(num_alumnos,lista));
}

void leer (int num_alumnos, struct Alumno lista[num_alumnos]){
    for (int i=0; i<num_alumnos; i++) {
        printf("Alumno numero %d:\n",i+1);
        printf("DNI: ");
        gets(lista[i].DNI);
        printf("Nombre: ");
        gets(lista[i].nombre);
        printf("Direccion: ");
        gets(lista[i].direccion);
        for (int j=0; j<3; j++) {
            printf("Nota anio %d: ",j+1);
            scanf("%f",&lista[i].notas[j]);
        }
        fflush(stdin);
    }
}

float media(int num_alumnos, struct Alumno lista[num_alumnos]){
    float suma = 0;
    int anio;
    puts("En que anio quiere ver la media?");
    scanf("%d",&anio);

    for (int i=0; i<num_alumnos; i++) {
        suma += lista[i].notas[anio-1];
    }
    return suma/num_alumnos;
}
