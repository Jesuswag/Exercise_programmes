#include <stdio.h>
#include <string.h>

void func_10 (char x[], char y[], int p, int n) {
    int conty = 0;

    for (int i=p; i<p+n; i++) {
        y[conty] = x[i];
        conty++;
    }
    y[conty] = '\0';
}

void main () {
    char frase[100] = {0};
    char res[100] = {0};
    int p,n;
    puts("Frase:");
    gets(frase);
    puts("P:");
    scanf("%d",&p);
    puts("N:");
    scanf("%d",&n);

    func_10(frase,res,p,n);

    printf("%s",res);
}