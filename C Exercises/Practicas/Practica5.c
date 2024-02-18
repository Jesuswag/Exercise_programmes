#include <stdio.h>
#include <math.h>

void seno(double x, int n,double *solucion);
double potencia(double base, int exponente);
void factorial(int numero,double *resultado);
void productorio(double x, int Y,double *resultado);

int main() {
    double x,solseno,solprod;
    int n,Y;
    //primera parte
    puts("Introduce un numero x en el intervalo [0,3]");
    scanf("%lf",&x);
    fflush(stdin);
    while (x>3 || x<0){
        puts("Error, vuelva a meter el numero");
        scanf("%lf",&x);
        fflush(stdin);
    }

    puts("Introduce un numero n en el intervalo [1,10]");
    scanf("%d",&n);
    fflush(stdin);
    while(n>10 || n<0){
        puts("Error, vuelva a meter el numero");
        scanf("%d",&n);
        fflush(stdin);
    }

    seno(x,n,&solseno);
    printf("sin(x) utilizando math.h es igual a: %lf\n",sin(x));
    printf("sin(x) utilizando la sucesion es igual a: %lf\n",solseno);
    //segunda parte
    puts("Ahora meta otro numero (x) entre 0 y 3 para hacer un productorio:");
    scanf("%lf",&x);
    puts("Mete el fin del productorio (Y)");
    scanf("%d",&Y);

    if (x<0 || x>3) printf("Al no estar x en [0-3] la tangete es igual a: %f",tan(x));
    else{
        productorio(x,Y,&solprod);
        printf("El resultado del productorio es: %lf", solprod);
    }

    return 0;
}

void seno(double x, int n, double *solucion){
    double suma = 0;
    double auxiliar;
    for (int i=0;i!=n;i++){
        factorial(2*i+1,&auxiliar);
        suma += potencia(-1,i) * potencia(x,2*i+1)/auxiliar;
    }
    *solucion = suma;
}

double potencia(double base, int exponente){
    if (exponente == 0) return 1;
    double resultado = base;
    for (int i=1;i<exponente;i++){
        resultado *= base;
    }
    return resultado;
}

void factorial(int numero,double *resultado){
    *resultado = 1;
    for (int i= numero; i>1; i--){
        *resultado *= i;
    }
}

void productorio(double x, int Y, double *resultado){
    *resultado = 1;
    for (int i=1;i<=Y;i++){
        *resultado *= potencia(i,2)/sin(x);
    }
}