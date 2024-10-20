#include <stdio.h>
#include <stdbool.h>

void DeikseLeapYear(int arxikh, int telikh);
bool isLeapYear(int xronologia);

int main(){

    int arxikh,telikh;

    printf("Apo etos:");
    scanf("%d",&arxikh);

    printf("Eos etos:");
    scanf("%d",&telikh);

    DeikseLeapYear(arxikh,telikh);


    return 0;
}

bool isLeapYear(int xronologia) {
    if ((xronologia %4 ==0 && xronologia %100 !=0) || (xronologia %400 ==0)) {

        return true;
    }

    return false;
}

void DeikseLeapYear(int arxikh, int telikh) {

    for (int xronologia = arxikh;xronologia <= telikh;xronologia++) {
        if (isLeapYear(xronologia)) {
            printf("%d\n", xronologia);

        }
    }

}



