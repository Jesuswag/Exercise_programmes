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
    /* Cuerpo de programa */
    printf("Bienvenido/a a \"Calculadora v1.0\".\n");
    printf("\n");
    printf("Introduce Primer operando:\t");
    scanf("%d", &num1);
    printf("Introduce Segundo operando:\t");
    scanf("%d", &num2);
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
//Muestra los resultados
    printf("Suma:    \t%d\n", sum);
    printf("Resta:   \t%d\n", res);
    printf("Producto:\t%d\n",prod);
    printf("Division:\t%d\n",div_e);
    printf("\nBye\n");
    return 0;
}