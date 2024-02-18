#include <stdio.h>
int euclides(int A,int B){
    if (A%B == 0) return B;
    else return(euclides(B,A%B));
}

int euclides2(int A, int B){
    int resto;
    while (A%B != 0){
        resto = A%B;
        A = B;
        B = resto;
    }
    return B;
}

int main() {
    int A;
    int B;
    puts("Mete A");
    scanf("%d",&A);
    puts("Mete B");
    scanf("%d",&B);
    if (A>0 && B>0){
        printf("El maximo comun divisor de %d y %d es %d\n",A,B,euclides(A,B));
        printf("El maximo comun divisor de %d y %d es %d",A,B,euclides2(A,B));
    } else puts("A y B deben ser mayores que 0!!!!");
    return 0;
}
