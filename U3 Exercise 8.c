#include <stdio.h>
int main(){
    float a,b,c,d,e,f;
    float x,y;
    do{
        printf("Introduce los tres primeros coeficientes separados por coma:");
        scanf("%f,%f,%f",&a,&b,&c);
        printf("Ahora los tres ultimos:");
        scanf("%f,%f,%f",&d,&e,&f);
        if (!(b*d-a*e)) printf("No puedes dividir entre 0, vuelva a introducir los numeros:\n");
    }
    while (!(b*d-a*e));
    
    x = -(c*e-b*f)/(b*d-a*e);
    y = (d*c-a*f)/(b*d-a*e);

    printf("La solucion es: \nx = %f \ny = %f",x,y);
}
