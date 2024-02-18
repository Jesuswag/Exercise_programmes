#include <stdio.h>
int cuentadigitos(int x) {
    int i = 1;
    while (x / 10 != 0) {
        x /= 10;
        i++;
    }
    return i;

}
int fposicion(int x,int pos){
    int i = 1;
    int newx = x;
    while (x/10 != 0){
        i++;
        x /= 10;
    }
    i -= pos-1;
    while (i != 1){
        newx /= 10;
        i--;
    }
    return newx%10;

}

int capicua(int x,int dx,int y,int dy){
    int izquierda = 1;
    int derecha = dy;
    if (dx != dy) return 0;
    while(izquierda<derecha){
        if (fposicion(x,izquierda) != fposicion(y,derecha)) return 0;
        izquierda ++;
        derecha --;
    }
    return 1;
}

int main(){
    int x,y,dx,dy;
    scanf("%d,%d",&x,&y);
    dx = cuentadigitos(x);
    dy = cuentadigitos(y);
    printf("%d",capicua(x,dx,y,dy));
    return 0;
}
