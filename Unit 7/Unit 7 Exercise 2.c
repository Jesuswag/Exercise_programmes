#include <stdio.h>
struct Complejo{
    float real;
    float imaginaria;
};

struct Complejo suma(struct Complejo numero1, struct Complejo numero2){
    struct Complejo auxiliar;
    auxiliar.real = numero1.real + numero2.real;
    auxiliar.imaginaria = numero1.imaginaria + numero2.imaginaria;
    return auxiliar;
}

void resta(struct Complejo numero1, struct Complejo numero2, struct Complejo *auxiliar){
    auxiliar->real = numero1.real - numero2.real;
    (*auxiliar).imaginaria = numero1.imaginaria - numero2.imaginaria;
}

int main() {
    char eleccion;
    struct Complejo numero1,numero2,auxiliar;

    puts("Introduce el primer numero");
    scanf("%f+%f",&numero1.real,&numero1.imaginaria);

    puts("Introduce el segundo numero");
    scanf("%f+%f",&numero2.real,&numero2.imaginaria);

    puts("Quieres sumarlos o restarlos?");
    fflush(stdin);
    scanf("%c",&eleccion);

    if (eleccion == '+'){
        auxiliar = suma(numero1,numero2);
        printf("El resultado de la suma es: %f+%fi",auxiliar.real,auxiliar.imaginaria);
    }
    else if (eleccion == '-'){
        resta(numero1,numero2,&auxiliar);
        printf("El resultado de la resta es: %f+%fi",auxiliar.real,auxiliar.imaginaria);
    }
    else puts("Vuelva a intentarlo");

    return 0;
}
