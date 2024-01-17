#include "library.h"

#include <stdio.h>
#include<time.h>

void Get_hora(int *hora,int *min){
    struct tm *h;
    time_t hor;
    hor=time(NULL);
    h= localtime(&hor);
    *hora=h->tm_hour;
    *min=h->tm_min;
}