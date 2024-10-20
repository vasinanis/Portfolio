#include <stdio.h>

int main(){
int kathara_tm,mikta_tm;
float dt,df;


printf("dwse kathara tm: ",kathara_tm);
kathara_tm=GetInteger();

printf("dwse mikta tm: ",mikta_tm);
mikta_tm=GetInteger();

dt=(kathara_tm*1.33*61)/365;
df=(mikta_tm*0.13*61)/365;

printf("DT: %.2f \n",dt);
printf("DF: %.2f",df);





}
