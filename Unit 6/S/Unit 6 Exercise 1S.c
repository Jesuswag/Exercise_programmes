#include <stdio.h>
#include <string.h>

void extractor_1 (char x[], char y[], int p) {
    int i;
    for (i=0; i<p; i++){
        y[i] = x[i];
    }
    // y[strlen(y)] = '\0';  si y no estuviera llena de 0 podria haber basura y joderse
    y[i] = '\0';
}
void extractor_2 (char x[], char y[], int p) {
    x[p] = '\0';
    strcpy(y,x);
}

void main () {
    char x[100] = {0};
    char y_1[100] = {0};
    char y_2[100] = {0};
    int p;
    puts("Introduzca la cadena:");
    gets(x);
    puts("Introduzca p");
    scanf("%d",&p);

    extractor_1(x,y_1,p);
    printf("%s \n",y_1);

    extractor_2(x,y_2,p);
    printf("%s \n",y_2);


}