#include <stdio.h>

int prodneg (int a[], int b[], int n) {
    int productorio = 1;
    for (int i=0; i<n; i++) {
        if (a[i]<0){
            productorio *= b[i];
        }
    }
    return productorio;
}

void main () {
    int a[4] = {3,-5,2,-7};
    int b[4] = {2,6,0,11};
    int n = 4;

    printf("%d",prodneg(a,b,n));
}
