#include <stdio.h>
void main(){
    float foot, yard, pulg, cent, meter;
    puts("Introduzca el numero en pies:");
    scanf("%f",&foot);

    pulg = foot * 12;
    yard = foot / 3;
    cent = pulg * 2.54;
    meter = cent / 100;

    printf("%.2f pies equivale a: \n%10.2f pulgadas. \n%10.2f yardas. \n%10.2f centimetros. \n%10.2f metros.",foot,pulg,yard,cent,meter);
}