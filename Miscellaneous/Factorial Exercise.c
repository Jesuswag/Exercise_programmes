#include <stdio.h>

int factorial(int num){
    int i = 1;
    for (; num!=1; num--){
        i *= num;
    }
    return i;
}

int main() {
    int n, m;
    int fn, fm, fnm;
    fn = fm = fnm = 1;
    puts("Introduce m");
    scanf("%d",&m);
    puts("Introduce n");
    scanf("%d",&n);

    fn = factorial(n);
    fm = factorial(m);
    fnm = factorial (n-m);

    printf("%f",fn/((float)fm*fnm));

    return 0;
}
