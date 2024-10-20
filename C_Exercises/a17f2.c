#include <stdio.h>
#include "simpio.h"

int main (){

int theseis,epivates;


printf("Dwse theseis: ");
theseis=GetInteger();

printf("Dwse epivates: ");
epivates=GetInteger();

 if(epivates>=(theseis*0.5)){
    printf("Kerdos");
}

if(epivates<(theseis*0.3)){
    printf("Zimia");
}

if((epivates>=(theseis*0.3)) && (epivates<(theseis*0.5))){
    printf("Kostos");
}







}









