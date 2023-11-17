#include <stdio.h>

int prr(int a[], int b[], int n);

int main() {
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        printf("a[%d]\n",i);
        scanf("%d",&a[i]);
        printf("b[%d]\n",i);
        scanf("%d",&b[i]);
    }
    printf("%d",prr(a,b,n));
    return 0;
}

int prr(int a[], int b[],int n){
    int aux = 1;
    for (int i = 0;i<n;i++){
        if (a[i] <0){
            aux *= b[i];
        }
    }
    return aux;
}