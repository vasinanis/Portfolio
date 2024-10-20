#include <stdio.h>

int MAX (int x,int y);
int MIN (int x,int y);

int main(){

int x,y;

printf("x: ",x);
x=GetInteger();
printf("y: ",y);
y=GetInteger();
printf("MAX: %d \n",MAX(x,y));
printf("MIN: %d ",MIN(x,y));



}
int MAX (int x,int y){
if (x>y)
{return (x);}
else if (x<y)
    {return (y);}

}
int MIN (int x,int y){
if (x>y)
    {return (y);}
else if (x<y)
   {return (x);}

}
