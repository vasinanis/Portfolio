#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

bool Valid_Time(int wres,int lepta,int deuterolepta);

int main(){

int wres,lepta,deuterolepta;

printf("Dwse tis ores: ");
wres=GetInteger();

printf("Dwse ta lepta: ");
lepta=GetInteger();

printf("Dwse ta defterolepta: ");
deuterolepta=GetInteger();

if (Valid_Time(wres,lepta,deuterolepta)==TRUE){
    printf("Valid: yes");
}
else{
    printf("Valid: no");
}

}






bool Valid_Time(int wres,int lepta,int deuterolepta){

    return (wres>=0 && wres<24 && lepta>=0 && lepta<60 && deuterolepta>=0 && deuterolepta<60);


}














