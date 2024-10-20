#include <stdio.h>
int main(){
    int provlxrono,pragmxrono,apodiafora,diafora;

    printf("Dwse Provlepomeno Xrono: ",provlxrono);
    provlxrono=GetInteger();
     printf("Dwse Pragmatiko Xrono: ",pragmxrono);
    pragmxrono=GetInteger();

    if (provlxrono<=29)
        apodiafora=1;
    if(provlxrono>=30 && provlxrono<=59)
        apodiafora=2;
    if(provlxrono>=60 && provlxrono<=89)
        apodiafora=3;
    if (provlxrono>=90 && provlxrono<=119)
        apodiafora=4;
    if (provlxrono>=120 && provlxrono<=179)
        apodiafora=6;
    if (provlxrono>=180 && provlxrono<=239)
        apodiafora=8;
    if(provlxrono>=240 && provlxrono<=359)
        apodiafora=13;
    else if (provlxrono>=360)
        apodiafora=17;
    printf("Apodekth Diafora: %d \n",apodiafora);


    diafora=provlxrono-pragmxrono;
    printf("Diafora Eisodou: %d \n",diafora);

     if(diafora>apodiafora)
     printf("BIG");
     if (diafora<apodiafora &&apodiafora+diafora<0)
     printf("SMALL");
     if (diafora<=apodiafora && apodiafora+diafora>=0)
     printf("GOOD");






















}
