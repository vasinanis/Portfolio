#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

long encode(long n,long en);
bool check(long n,long en);

int main(){


    long lower,upper,i,n,en;

    printf("Lower Limit: ");
    lower=GetLong();

    printf("Upper Limit: ");
    upper=GetLong();

    for(i=lower;i<=upper;i++){



    printf("Code: %d " ,i);

    encode(i,en);

    printf(" Encoding: %d " ,encode(i,en));

    if(check(i,encode(i,en))==TRUE){
    printf("isValid:yes\n");
}
else{
    printf("isValid:no\n");
}








}
}


long encode(long n,long en){


    long psifia;
    long pow=10;



    psifia=(98 - (n*100) % 97) % 97;

     while(psifia >= pow){
        pow *= 10;
}
        en=(n * pow + psifia);
    return (en);



}

bool check(long n,long en){



return en%97==1;









}



