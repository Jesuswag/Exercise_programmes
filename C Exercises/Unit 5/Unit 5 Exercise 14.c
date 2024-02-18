#include <stdio.h>

int sumafinal();
int contardigitos(int num);
int sumadigitos(int num);

int main(){
    int solucion;
    puts("Mete digitos. Para parar introduce un 0.");
    solucion = sumafinal();
    printf("La suma de los numeros cuya longitud es igual a la suma de sus cifras es %d",solucion);
}

int sumafinal(){
    int a;
    int suma = 0;
    do{
        scanf("%d",&a);
        if (contardigitos(a)==sumadigitos(a)){
            suma += a;
        }
    } while (a);
    return suma;
}


int contardigitos(int num) {
    int i = 0;
    if (num == 0) return 1;
    for (; num != 0; i++) {
        num /= 10;
    }
    return i;
}


int sumadigitos(int num){
    int suma = 0;
    do{
        suma += num % 10;
        num /= 10;
    }while(num != 0);
    return suma;
}