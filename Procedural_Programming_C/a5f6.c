#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"
#define SIZE 100


void inputArray(int* array, int* size);
void inputNumbers(int* a, int* b);
void performCalculations(int* array, int size, int a, int b, int* numLessThanA, int* numGreaterThanB, int* numInRange);
void showResults(int* array, int size, int a, int b, int numLessThanA, int numGreaterThanB, int numInRange);

int main()
{

    int array[SIZE];
    int size;
    int a, b;
    int numLessThanA, numGreaterThanB, numInRange;


    inputArray(array, &size);
    inputNumbers(&a, &b);


    performCalculations(array, size, a, b, &numLessThanA, &numGreaterThanB, &numInRange);


    showResults(array, size, a, b, numLessThanA, numGreaterThanB, numInRange);

    return 0;
}


void inputArray(int* array, int* size)
{
    printf("Give n: ");
    scanf("%d", size);


    for (int i = 0; i < *size; i++){
        printf("Give element[%d]: ",i);
        scanf("%d", &array[i]);
    }
}

void inputNumbers(int* a, int* b)
{
    printf("Give A: ");
    scanf("%d",a);
    printf("Give B: ");
    scanf("%d",b);
}

void performCalculations(int* array, int size, int a, int b, int* numLessThanA, int* numGreaterThanB, int* numInRange)
{
    *numLessThanA = 0;
    *numGreaterThanB = 0;
    *numInRange = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] <= a)
            (*numLessThanA)++;
        else if (array[i] >= b)
            (*numGreaterThanB)++;
        else
            (*numInRange)++;
    }
}

void showResults(int* array, int size, int a, int b, int numLessThanA, int numGreaterThanB, int numInRange)
{
    printf("----The numbers of the array----\n");
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");

    printf("A= %d\nB= %d\n", a, b);

    printf("Number smaller or equal to A: %d\n", numLessThanA);
    printf("Number bigger or equal to B: %d\n", numGreaterThanB);
    printf("Number bigger than A and smaller than B: %d",numInRange);
}
