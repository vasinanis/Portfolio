#include <stdio.h>
#include <stdlib.h>

#define FOITITES 30
#define MATHIMATA 3

void populate(int vathmologiesFoititon[FOITITES][MATHIMATA], int sporos);
void printTab_2d(int vathmologiesFoititon[FOITITES][MATHIMATA]);
void FindStudents(int vathmologiesFoititon[FOITITES][MATHIMATA], int *exetaseisCount, float *exetaseisPercentage, int *anakuklosesCount, float *anakuklosesPercentage);

int main() {

    int vathmologiesFoititon[FOITITES][MATHIMATA];
    int sporos;

    printf("Give seed: ");
    scanf("%d", &sporos);

    populate(vathmologiesFoititon, sporos);

    printTab_2d(vathmologiesFoititon);

    int exetaseisCount, anakuklosesCount;
    float exetaseisPercentage, anakuklosesPercentage;

    FindStudents(vathmologiesFoititon, &exetaseisCount, &exetaseisPercentage, &anakuklosesCount, &anakuklosesPercentage);

    printf("\nSucceed: %d, %.1f%%\n", exetaseisCount, exetaseisPercentage);
    printf("Fail: %d, %.1f%%\n", anakuklosesCount, anakuklosesPercentage);

    return 0;
}

void populate(int vathmologiesFoititon[FOITITES][MATHIMATA], int sporos) {

    srand(sporos);

    for (int i = 0; i < FOITITES; i++) {
        for (int j = 0; j < MATHIMATA; j++) {
            vathmologiesFoititon[i][j] = rand() % 21;
        }
    }
}

void printTab_2d(int vathmologiesFoititon[FOITITES][MATHIMATA]) {

    for (int i = 0; i < FOITITES; i++) {
        for (int j = 0; j < MATHIMATA; j++) {
            printf("%2d ", vathmologiesFoititon[i][j]);
        }
        printf("\n");
    }
}

void FindStudents(int vathmologiesFoititon[FOITITES][MATHIMATA], int *exetaseisCount, float *exetaseisPercentage, int *anakuklosesCount, float *anakuklosesPercentage) {

    *exetaseisCount = 0;
    *anakuklosesCount = 0;

    for (int i = 0; i < FOITITES; i++) {
        float mo = 0;
        for (int j = 0; j < MATHIMATA; j++) {
            mo += vathmologiesFoititon[i][j];
        }
        mo /= MATHIMATA;

        if (mo > 18.5) {
            (*exetaseisCount)++;
        } else if (mo < 9.5) {
            (*anakuklosesCount)++;
        }
    }

    *exetaseisPercentage = (*exetaseisCount / (float)FOITITES) * 100;
    *anakuklosesPercentage = (*anakuklosesCount / (float)FOITITES) * 100;
}
