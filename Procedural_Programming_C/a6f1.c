#include <stdio.h>
#include "simpio.h"

int main (){
int HmeresErgasias;
long amoivh;
double pososto;
double dwro=0;



printf("Dwse tis hmeres ergasias: ");
HmeresErgasias=GetInteger();

printf("Dwse thn hmerhsia amoivh: ");
amoivh=GetLong();

printf("Dwse to pososto dwroy: ");
pososto=GetReal();


dwro = ((double)HmeresErgasias) * ((double)amoivh) * pososto;

printf("To dwro einai : %g",dwro);










}
