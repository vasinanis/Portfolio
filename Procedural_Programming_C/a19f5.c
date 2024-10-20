#include <stdio.h>

#define GRAMMES 3
#define STHLES 4

int main() {

    int pinakas[GRAMMES][STHLES];


    for (int i = 0; i < GRAMMES; i++) {
        for (int j = 0; j < STHLES; j++) {
            pinakas[i][j] = i + j;
        }
    }

    for (int i = 0; i < GRAMMES; i++) {
        for (int j = 0; j < STHLES; j++) {
            printf("%d ", pinakas[i][j]);
        }
        printf("\n");
    }

    return 0;
}

