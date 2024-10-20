#include <stdio.h>
#include "simpio.h"

int Fibonacci(long n);

int main(){
long n;
printf("Dwse to n: ");
n=GetLong();
Fibonacci(n);


}

int Fibonacci(long n){

int i;
long t1 = 0, t2 = 1;
long nextTerm = t1 + t2;

printf("%5d\n%5d\n",t1,t2);


  for (i = 3; i <= n; ++i) {
    printf("%5d\n", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;



}
}
