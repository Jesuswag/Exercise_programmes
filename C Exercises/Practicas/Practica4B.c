#include <stdio.h>
#include <math.h>

double seno(double x, int n);
double potencia(double base, int exponente);
int factorial(int numero);
double productorio(double x, int Y);

int main() {
    double x,f;
    int n,Y;

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

    f = seno(x,n);
    printf("sin(x) utilizando math.h es igual a: %lf\n",sin(x));
    printf("sin(x) utilizando la sucesion es igual a: %lf\n",f);

    puts("Ahora meta otro numero (x) entre 0 y 3 para hacer un productorio:");
    scanf("%lf",&x);
    puts("Mete el fin del productorio (Y)");
    scanf("%d",&Y);

    if (x<0 || x>3) printf("Al no estar x en [0-3] la tangete es igual a: %f",tan(x));
    else printf("El resultado del productorio es: %lf", productorio(x,Y));

    return 0;
}


double seno(double x, int n){
    double suma = 0;
    for (int i=0;i!=n;i++){
        suma += potencia(-1,i) * potencia(x,2*i+1)/(double)factorial(2*i+1);
    }
    return suma;
}


double potencia(double base, int exponente){
    if (exponente == 0) return 1;
    double resultado = base;
    for (int i=1;i<exponente;i++){
        resultado *= base;
    }
    return resultado;
}


int factorial(int numero){
    int resultado = 1;
    for (int i= numero; i>1; i--){
        resultado *= i;
    }
    return resultado;
}

double productorio(double x, int Y){
    double resultado = 1;
    for (int i=1;i<=Y;i++){
        resultado *= potencia(i,2)/seno(x,10); //n = 10 para hacerlo bastante preciso
    }
    return resultado;
}
