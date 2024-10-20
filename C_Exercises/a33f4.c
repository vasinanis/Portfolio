#include <stdio.h>

float YpologiseMO(float a,float b,float c);

int main() {
    float a, b, c,mo;

    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    printf("Enter c: ");
    scanf("%f", &c);

    mo=YpologiseMO(a,b,c);

    if(mo!=-1){
        printf("Mesos Oros:%.2f",mo);
    }
    else if(mo=-1){
        printf("No value in [1, 2]");

    return 0;

    }
}

float YpologiseMO(float a,float b,float c){

    float d=0,e=0;

    if (a >= 1 && a <= 2) {
        d += a;
        e++;
    }
    if (b >= 1 && b <= 2) {
        d += b;
        e++;
    }
    if (c >= 1 && c <= 2) {
        d += c;
        e++;
    }
    if(e>0){
        return d/e;
    }
    return -1;
}



