#include <stdio.h>
#include "simpio.h"

long max(long a,long b);
long gr(long a,long b,long c);

int main(){
long a,b,c;
double y;

printf("Dwse a: ");
a=GetLong();

printf("Dwse b: ");
b=GetLong();

printf("Dwse c: ");
c=GetLong();

long max( long a,long b);
long gr(long a,long b,long c);

y=(2*max(a,b)+3*gr(a,b,c))/4;

printf("y = %.2f",y);

}

long max(long a,long b){
    if(a>b)
        return a;
   else if (a<b)
        return b;

}

long gr(long a,long b,long c){
     if ( a > b && a > c )
      return a;
   else if ( b > a && b > c )
      return b;
   else if ( c > a && c > b )
      return c;

}
