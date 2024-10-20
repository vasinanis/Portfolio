#include <stdio.h>
int main(){
    int siskeves,kiv50,kiv20,kiv5,kiv1;

    printf("dwse plithos suskeuwn: ",siskeves);
    siskeves=GetInteger();

    kiv50=siskeves/50;
    printf("50 %d \n",kiv50);
    kiv20=siskeves%50/20;
    printf("20 %d \n",kiv20);
    kiv5=((siskeves%50)%20)/5;
    printf("5 %d \n",kiv5);
    kiv1=(((siskeves%50)%20)%5);
    printf("1 %d \n",kiv1);








}
