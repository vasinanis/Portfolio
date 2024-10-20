#include <stdio.h>

#define STUDENT 5

void FindMax(int data[STUDENT][4], int *maxBoys, int *maxGirls, int column);

int main() {
    int mathitesData[STUDENT][4] = {
        {1, 40, 120, 12},
        {0, 45, 110, 13},
        {0, 50, 140, 14},
        {1, 40, 120, 14},
        {1, 45, 135, 15}
    };

    int maxWeightBoys, maxHeightBoys, maxAgeBoys;
    int maxWeightGirls, maxHeightGirls, maxAgeGirls;

    FindMax(mathitesData, &maxWeightBoys, &maxWeightGirls, 1);
    FindMax(mathitesData, &maxHeightBoys, &maxHeightGirls, 2);
    FindMax(mathitesData, &maxAgeBoys, &maxAgeGirls, 3);


    printf("Max Weight Boy: %.1f\n", (float)maxWeightBoys);
    printf("Max Weight Girl: %.1f\n", (float)maxWeightGirls);

    printf("Max Height Boy: %.1f\n", (float)maxHeightBoys);
    printf("Max Height Girl: %.1f\n", (float)maxHeightGirls);

    printf("Max Age Boy: %.1f\n", (float)maxAgeBoys);
    printf("Max Age Girl: %.1f\n", (float)maxAgeGirls);

    return 0;
}

void FindMax(int data[STUDENT][4], int *maxBoys, int *maxGirls, int column) {

    *maxBoys = *maxGirls = -1;

    for (int i = 0; i < STUDENT; i++) {
        if (data[i][0] == 0) {
            if (data[i][column] > *maxBoys) {
                *maxBoys = data[i][column];
            }
        } else {
            if (data[i][column] > *maxGirls) {
                *maxGirls = data[i][column];
            }
        }
    }
}



