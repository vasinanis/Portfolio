#include <stdio.h>
#include "simpio.h"

int main(){
int n,i,kwdikos,fyllo,baros,ypsos,hlikia,max1,max2,max3,max4,max5;

printf("Dwse to plhthos: ");
n=GetInteger();

    printf("Dwse ton kwdiko: ");
    kwdikos=GetInteger();

    printf("Dwse to fyllo: ");
    fyllo=GetInteger();

    printf("Dwse to baros: ");
    baros=GetInteger();

    printf("Dwse to ypsos: ");
    ypsos=GetInteger();

    printf("Dwse tin hlikia: ");
    hlikia=GetInteger();

    max1=kwdikos;
    max2=fyllo;
    max3=baros;
    max4=ypsos;
    max5=hlikia;



for(i=0;i<n-1;i++){
    printf("Dwse ton kwdiko: ");
    kwdikos=GetInteger();

    printf("Dwse to fyllo: ");
    fyllo=GetInteger();

    printf("Dwse to baros: ");
    baros=GetInteger();

    printf("Dwse to ypsos: ");
    ypsos=GetInteger();

    printf("Dwse tin hlikia: ");
    hlikia=GetInteger();

    if (ypsos>max4){
        max4=ypsos;
        max1=kwdikos;
        max2=fyllo;
        max3=baros;
        max5=hlikia;
    }


}
printf("%d %d %d %d %d",max1,max2,max3,max4,max5);

}
