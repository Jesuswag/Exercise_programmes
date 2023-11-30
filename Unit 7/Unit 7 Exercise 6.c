#include <stdio.h>

struct FECHA {
    int dia;
    int mes;
    int anio;
};

struct HORA{
    int hora;
    int min;
    int sec;
};

void main() {
    struct FECHA fevento1= {14, 03, 2005};
    struct HORA herento1= {11,30,00};

    struct FECHA fevento2 = {11,07,1996};
    struct HORA herento2 = {01,00,00};
}