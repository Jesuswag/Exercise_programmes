//
// Created by usuario on 22.11.2023.
//

#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>


/* con la longitud ya calculada y almacenada junto a la palabra*/

struct palabra
{
    char palabras[20];
    int longitud;
};

struct palabra diccionario[25]={{"memoria",7},
                                {"procesador",10},
                                {"linux",5},
                                {"windows",7},
                                {"teclado",7},
                                {"raton",5},
                                {"monitor",7},
                                {"pendrive",8},
                                {"microsoft",9},
                                {"programacion",12},
                                {"computador",10},
                                {"variable",8},
                                {"constante",9},
                                {"while",5},
                                {"switch",6},
                                {"vector",6},
                                {"recursividad",12},
                                {"funcion",7},
                                {"fichero",7},
                                {"puntero",7},
                                {"algoritmo",9}
};


int eligePalabra(char pal[])
{
    int np;
    srand((unsigned)time(NULL));
    np=rand()%20;
    strcpy(pal,diccionario[np].palabras);
    return diccionario[np].longitud;
}



