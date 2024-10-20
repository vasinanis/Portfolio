#include <stdio.h>
#include "simpio.h"

void Menu(void);
double ypologismos(int epilogh,double euro);
int DwseEpilogh(void);
double DwsePoso(void);

int main(){

    int epilogh;
    double euro;
while(epilogh!=6){

    Menu();
    epilogh=DwseEpilogh();
    if (epilogh==6)
        break;
    euro=DwsePoso();
    ypologismos(epilogh,euro);
    printf("%.2f\n",ypologismos(epilogh,euro));
}
}




void Menu(void)
{

    printf("1. Metetroph se dollaria\n");
    printf("2. Metatroph se lires\n");
    printf("3. Metatroph se fraga Elbetias\n");
    printf("4. Metatroph se dollaria Canada\n");
    printf("5. Metatroph se gien\n");
    printf("6. Exodos\n");


}

int DwseEpilogh(void)
{
   int epilogh;
   epilogh=GetInteger();

    return (epilogh);

}

double ypologismos(int epilogh,double euro)
{
    double aksia;



    if (epilogh==1){

    aksia=euro*0.89;

}
else if (epilogh==2){

    aksia=euro*0.618;

}
else if (epilogh==3){

    aksia=euro*1.5465;


}
else if (epilogh==4){

    aksia=euro*1.3565;


}
else if (epilogh==5){

    aksia=euro*109.22;

    return aksia;


}

}

double DwsePoso(void)
{
    double euro;

    printf("Dwse euro: ");
    euro=GetReal();

    return (euro);


}



