#include <stdio.h>
#include <stdlib.h>

#define M 5
#define N 4


void populate(int a[M][N]);
void print_2d(int a[M][N]);
void FindMaxMinRow(int a[M][N], int row, int size, int *max, int *min);

int main() {

    int array[M][N];
    populate(array);

    print_2d(array);

    int rowNum;

    printf("\nGive line number ", M - 1);
    scanf("%d", &rowNum);

    while (rowNum >= 0 && rowNum < M) {
        int max, min;
        FindMaxMinRow(array, rowNum, N, &max, &min);

        printf("%d,%d\n",max,min);


        printf("\nEnter row number (between 0 and %d): ", M - 1);
        scanf("%d", &rowNum);
    }

    return 0;
}

void populate(int a[M][N]) {

    srand(30);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            a[i][j] = rand() % 21;
        }
    }
}

void print_2d(int a[M][N]) {

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
}

void FindMaxMinRow(int a[M][N], int row, int size, int *max, int *min) {

    *max = *min = a[row][0];

    for (int j = 1; j < size; j++) {
        if (a[row][j] > *max) {
            *max = a[row][j];
        } else if (a[row][j] < *min) {
            *min = a[row][j];
        }
    }
}


