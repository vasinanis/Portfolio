#include <stdio.h>
#include "simpio.h"

int main (){

int KwdikosKathgoriasTimologiou,pagio;
long ParousaEndeixhMetrhth,ProhgoumenhEndeixhMetrhth,KatanalwshReumatosMonades,AxiaReumatos;
double fpa,SynolikoPoso;

printf("Dwse ton kwdiko kathgorias timologiou: ");
KwdikosKathgoriasTimologiou=GetInteger();

printf("Dwse tin parousa endeixh tou metriti: ");
ParousaEndeixhMetrhth=GetLong();

printf("Dwse tin prohgoumenh endeixh tou metriti: ");
ProhgoumenhEndeixhMetrhth=GetLong();

KatanalwshReumatosMonades = ParousaEndeixhMetrhth - ProhgoumenhEndeixhMetrhth;

printf("Katanalwsh reumatos se monades: %d \n",KatanalwshReumatosMonades);

//AKSIA REUMATOS//

if (KatanalwshReumatosMonades>=1 && KatanalwshReumatosMonades<=200){
    AxiaReumatos = KatanalwshReumatosMonades * 12;
}

if (KatanalwshReumatosMonades>=201 && KatanalwshReumatosMonades<=500){
    AxiaReumatos = (200*12)+ (KatanalwshReumatosMonades-200) * 15;
}

if (KatanalwshReumatosMonades>=501 && KatanalwshReumatosMonades<=1500){
    AxiaReumatos = (200*12)+(300*15)+ (KatanalwshReumatosMonades-500) * 20;
}

if (KatanalwshReumatosMonades>=1501 && KatanalwshReumatosMonades<=10000){
    AxiaReumatos =(200*12)+(300*15)+(1000*20)+ (KatanalwshReumatosMonades-1500) * 30;
}

printf("Axia reumatos(cent): %d \n",AxiaReumatos);

//PAGIO//

if( KwdikosKathgoriasTimologiou==1){
    pagio=20;
}

if( KwdikosKathgoriasTimologiou==2){
    pagio=20;
}
if (KwdikosKathgoriasTimologiou==3 ){
    pagio=100;
}

printf("Pagio(eyro): %d \n",pagio);

//FPA//

fpa=( ((AxiaReumatos/100) + pagio)* 0.18);
printf("FPA(euro): %g \n",fpa);

//SYNOLIKO POSO//

SynolikoPoso=(AxiaReumatos/100) + pagio + fpa;
printf("Synoliko poso plhrwmhs(euro): %g",SynolikoPoso);








}
