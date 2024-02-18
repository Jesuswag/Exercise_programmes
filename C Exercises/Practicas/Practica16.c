#include <stdio.h>

int main() {
    int cola, naranja, limon;
    float colap, naranjap, limonp;
    puts("Introduce la cantidad vendida de cola y su precio separados por comas:");
    scanf("%i,%f",&cola,&colap);
    puts("Ahora de naranja:");
    scanf("%i,%f",&naranja,&naranjap);
    puts("Por ultimo de limon:");
    scanf("%d,%f",&limon,&limonp);
    printf("Producto\tVentas      \tPrecio       \tTotal             \n");
    printf("---------------------------------------------------------\n");
    printf("Cola    \t%d          \t%f           \t%f                \n",cola,colap,cola*colap);
    printf("Naranja \t%d          \t%f           \t%f                \n",naranja,naranjap,naranja*naranjap);
    printf("Limon   \t%d          \t%f           \t%f                \n",limon,limonp,limon*limonp);

    return 0;
}
