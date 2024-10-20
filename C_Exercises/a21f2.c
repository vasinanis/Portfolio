#include <stdio.h>
int main (){
int misthos,paidia,epidoma;
printf("dwse vasiko mistho: ",misthos);
misthos=GetInteger();
printf("dwse arithmo paidiwn: ",paidia);
paidia=GetInteger();

if (paidia==0)
    epidoma==0;

if (paidia==1)
  epidoma=misthos*0.04;


  else if (paidia==2)
    epidoma=misthos*0.09;

  else if (paidia==3)
    epidoma=misthos*0.15;


  else if (paidia>=4)
epidoma=(misthos*0.15)+misthos*0.04*(paidia-3);

printf("epidoma: %d ",epidoma);


}
