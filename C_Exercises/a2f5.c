#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){

    double klimaka[]={0,0.18,0.21,0.24,0.28,0.33,0.38,0.43,0.49,0.50};
    long extra[]={0,5220,7320,9720,17000,21950,29550,42450,52250};
    long apodoxes,foros,xrhmata,synolo;

    printf("Dwse to eisodhma: ");
    apodoxes=GetLong();

    if (apodoxes>=1 && apodoxes<=10000){
        foros==0;
        xrhmata==0;
        synolo==0;
    }

    if (apodoxes>=10001 && apodoxes<=39000){
        foros=apodoxes*klimaka[1];
        xrhmata=extra[0];
        synolo=foros;

    }

    if (apodoxes>=39001 && apodoxes<=49000){
        foros=(apodoxes-39000)*klimaka[2];
        synolo=foros+extra[1];
        xrhmata=extra[1];
    }

    if (apodoxes>=49001 && apodoxes<=59000){
        foros=(apodoxes-49000)*klimaka[3];
        synolo=foros+extra[2];
        xrhmata=extra[2];
    }

    if (apodoxes>=59001 && apodoxes<=85000){
        foros=(apodoxes-59000)*klimaka[4];
        synolo=foros+extra[3];
        xrhmata=extra[3];
    }

    if (apodoxes>=85001 && apodoxes<=100000){
        foros=(apodoxes-85000)*klimaka[5];
        synolo=foros+extra[4];
        xrhmata=extra[4];
    }

    if (apodoxes>=100001 && apodoxes<=120000){
        foros=(apodoxes-100000)*klimaka[6];
        synolo=foros+extra[5];
        xrhmata=extra[5];
    }

    if (apodoxes>=120001 && apodoxes<=150000){
        foros=(apodoxes-120000)*klimaka[7];
        synolo=foros+extra[6];
        xrhmata=extra[6];
    }

    if (apodoxes>=150001 && apodoxes<=170000){
        foros=(apodoxes-150000)*klimaka[8];
        synolo=foros+extra[7];
        xrhmata=extra[7];
    }

    if (apodoxes>=170001){
        foros=(apodoxes-150000)*klimaka[9];
        synolo=foros+extra[8];
        xrhmata=extra[8];
    }

    printf("%d Euro\n",apodoxes);
    printf("%d Euro\n",xrhmata);
    printf("%d Euro\n",foros);
    printf("%d Euro",synolo);






}








