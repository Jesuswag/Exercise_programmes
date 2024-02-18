#include <stdio.h>
int main(void){
    /* Declaración de variables. */
    int num1,num2;
    /* Elimina los comentarios y sustituye los
    interrogantes por el tipo de datos correspondiente. */
    int sum;
    int res;
    int prod;
    int div_e;
    // Nuevas variables del ejercicio 3 (modificacion del 2)
    float div_r;
    int modulo;
    float porcentaje;
    float media;
    float final;
    float truncar;

    /* Cuerpo de programa */
    printf("Bienvenido/a a \"Calculadora v1.0\".\n");
    printf("\n");
    printf("Introduce Primer operando:\n");
    scanf("%d", &num1);
    printf("Introduce Segundo operando:\n");
    scanf("%d", &num2);
    printf("Introduce un numero real para truncarlo:\n");
    scanf("%f",&truncar);
    // Añade un salto de linea más.
    printf("...calculando resultados...\n");

// Calcula suma (éste te lo damos hecho)
    sum = num1 + num2;
// Calcula resta (no te olvides de sustituir los interrogantes...)
    res = num1 - num2;
// Calcula producto (completa el código)
    prod = num1 * num2;
// Calcula división entera
    div_e = num1 / num2;
// Calcula division real
    div_r = (float)num1 / (float)num2;
// Calcula el modulo
    modulo = num1 % num2;
// Calcula el tanto por ciento
    porcentaje =
// Calcula la media
    media = (num1+num2)/2.0;
// Calcula la mitad de la suma del primero más el doble del segundo
    final = (num1+2*num2)/2.0;
//Muestra los resultados
    printf("Suma:           \t%d\n", sum);
    printf("Resta:          \t%d\n", res);
    printf("Producto:       \t%d\n",prod);
    printf("Division entera:\t%d\n",div_e);
    printf("Division real:  \t%.2f\n",div_r);
    printf("Modulo:         \t%d\n",modulo);
    printf("Tanto por uno:  \t%f\n",(float)num1/100);
    printf("Media:          \t%f\n",media);
    printf("Truncamiento:   \t%d\n",(int)truncar);
    printf("Mitad de la suma del primer numero mas el doble del segundo:\t%f\n",final);
    printf("\nBye\n");
    return 0;
}