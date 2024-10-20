#include <stdio.h>
#include <stdlib.h>

void populate(int pinakas[], int plithos);
void printArr(int pinakas[], int plithos);
int checkTable(int pinakas[], int plithos, int N, int thesi[]);

int main() {

    const int plithos = 50;
    int pinakas[plithos];
    int thesi[plithos];
    int N;

    populate(pinakas, plithos);

    printArr(pinakas, plithos);

    printf("Dwse arithmo: ");
    scanf("%d", &N);

    int count = checkTable(pinakas, plithos, N, thesi);

    printf("O arithmos %d emfanizetai %d fores\n", N, count);

    for (int i = 0; i < count; i++) {
        printf("%d ", thesi[i]);
    }
    printf("\n");

    return 0;
}

void populate(int pinakas[], int plithos) {
    srand(20);
    for (int i = 0; i < plithos; i++) {
        pinakas[i] = rand() % 10;
    }
}


void printArr(int pinakas[], int plithos) {

    for (int i = 0; i < plithos; i++) {
        printf("%d ", pinakas[i]);
    }
    printf("\n");
}


int checkTable(int pinakas[], int plithos, int N, int thesi[]) {
    int count = 0;
    for (int i = 0; i < plithos; i++) {
        if (pinakas[i] == N) {
            thesi[count++] = i;
        }
    }
    return count;
}
