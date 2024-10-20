#include <stdio.h>
#include "simpio.h"

int main(){

long eswteriko,exwteriko,totales,totalex,synolo,totalsyn;
long telhEsw,telhExw;

totalsyn=0;
totalex=0;
totales=0;

while(TRUE){

printf("Kibwtia eswterikou? ");
eswteriko=GetLong();

if(eswteriko==-9999)break;

printf("Kibwtia exwterikou? ");
exwteriko=GetLong();

telhEsw=eswteriko*10;
telhExw=exwteriko*15;
synolo=telhEsw+telhExw;

printf("%10d %10d %10d\n",telhEsw,telhExw,synolo);

totales+=telhEsw;
totalex+=telhExw;
totalsyn+=synolo;

}

printf("%10d %10d %10d\n",totales,totalex,totalsyn);

return 0;
}
