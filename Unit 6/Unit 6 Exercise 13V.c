#include <stdio.h>
int fusion(int v1[], int v2[], int v3[], int n1, int n2){
    int i1,i2,i3;
    i1 = i2 = i3 = 0;
    while(i1<n1 && i2<n2){
        if(v1[i1] < v2[i2]){
            v3[i3] = v1[i1];
            i1++;
            i3++;
        }else if (v1[i1]>v2[i2]){
            v3[i3] = v2[i2];
            i2++;
            i3++;
        }else{
            v3[i3] = v1[i1];
            i1++;
            i2++;
            i3++;
        }
    }
    while(i1<n1){
        v3[i3] = v1[i1];
        i1++;
        i3++;
    }
    while(i2<n2){
        v3[i3] = v2[i2];
        i2++;
        i3++;

    }
}
int main() {
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    int a[n1],b[n2];
    int res[n1 + n2];

    for (int i = 0; i < n1; i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n2; i++){
        scanf("%d",&b[i]);
    }

    fusion(a, b, res, n1, n2);
    for (int i = 0; i < n1 + n2; i++){
        printf("%d\n", res[i]);
    }
}
