#include <stdio.h>
#include <stdlib.h>

double sunarthsh(double prwth, double deuterh, double trith);

int main() {

    double prwth1=1,prwth2=2,prwth3=3,prwth4=10,deuterh=5,trith=10;

    double apotelesma1 = sunarthsh(prwth1, deuterh,trith);
    printf("Athr= %6f\n",apotelesma1);
    double apotelesma2 = sunarthsh(prwth2, deuterh,trith);
    printf("Gin= %6f\n",apotelesma2);
    double apotelesma3 = sunarthsh(prwth3, deuterh,trith);
    printf("Mo= %6f\n",apotelesma3);
    double apotelesma4 = sunarthsh(prwth4, deuterh,trith);
    printf("",apotelesma4);



    return 0;
}


double sunarthsh(double prwth, double deuterh, double trith) {

    double sum;

    if (prwth == 1) {
        sum =deuterh+trith;
    }
    else if (prwth == 2) {
        sum =deuterh*trith;
    }
    else if (prwth == 3) {
        sum =(deuterh+trith)/2;
    }
    else  {
        printf("Antikanoniki ektelesi synartisis\n");


    }

    return sum;
}
