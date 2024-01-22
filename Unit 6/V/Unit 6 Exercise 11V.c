#include <stdio.h>

void imprimir(char x[], int len) {
    printf("\"");
    for (int i=0; i<len; i++){
            printf(" %c,",x[i]);
        }
    printf("\"\n");
}

void ex_a (char a[], char b[], char c[], int n) {  // exclusivo de a xq no esta en b
    int conta,contb,contc;
    conta = contb = contc = 0;
    while (conta<n) {
        if (a[conta] < b[contb]) {
            conta++;
        } else if (a[conta] == b[contb]) {
            conta++;
            contb++;
        } else if (a[conta] > b[contb]) {
            c[contc] = b[contb];
            contc++;
            contb++;
        }
    }
    while (contb<n){
        c[contc] = b[contb];
        contc++;
        contb++;
    }
    c[contc] = '\0';

}

void main () {
    char c[5];
    char a[5] = "abde";
    char b[5] = "bcfg";
    ex_a(a,b,c,4);
    imprimir(c,4);
}