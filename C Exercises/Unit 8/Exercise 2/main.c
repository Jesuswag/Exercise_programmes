#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// https://stackoverflow.com/questions/13408990/how-to-generate-random-float-number-in-c
float float_rand( float min, float max )
{   
    float scale = rand() / (float) RAND_MAX; /* [0, 1.0] */
// El tio normaliza el numero (en este caso justamente no hace falta), muy buena.
    return min + scale * ( max - min );      /* [min, max] */
}

int main(){
    FILE *parchivo = fopen("texto.txt","w");
    srand((unsigned int)time(NULL));
    for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            fprintf(parchivo,"%.5f \t",float_rand(0,1));
        }
        fputs("\n",parchivo);
    }
    fclose(parchivo);
    return 0;
}