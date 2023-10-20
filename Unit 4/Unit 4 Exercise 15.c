#include <stdio.h>

void main() {
    int i, m, n;
    i = 0;
    scanf("%d,%d",&m,&n);
    while(m){
        i += m%10;
        m /= 10;
        if (m != 0){
            i *= 10;
        }
    }
    if (i == n){
    puts("Yes");
    }else puts("NO");
}
