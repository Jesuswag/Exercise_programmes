#include <stdio.h>
void sumatriz(int row, int col, int m1[row][col], int m2[row][col], int m3[row][col]){
    for (int i = 0; i<row; i++){
        for (int j=0;j<col;j++){
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
}
int main() {
    int col, row;
    puts("Mete el numero de filas y luego col (<=20)");
    do{
        scanf("%d",&row);
        scanf("%d",&col);
    }while (row >20 || col >20);

    int m1[row][col],m2[row][col],m3[row][col];

    for (int i = 0; i<row; i++){
        for (int j=0;j<col;j++){
            printf("m1[%d][%d]\n",i,j);
            scanf("%d",&m1[i][j]);
            printf("m2[%d][%d]\n",i,j);
            scanf("%d",&m2[i][j]);
        }
    }

    sumatriz(row,col,m1,m2,m3);

    for (int i = 0; i<row; i++){
        printf("{ ");
        for (int j=0;j<col;j++){
            printf("%d ",m3[i][j]);
        }
        printf("} ");
    }

    return 0;
}
