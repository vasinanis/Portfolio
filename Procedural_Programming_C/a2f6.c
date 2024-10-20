#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"


int readData(int arr[], int size);
void findMinMax(int arr[], int size, int *min, int *max);

int main()
{
int data[100];
int size;
int min, max;



size = readData(data, 100);


findMinMax(data, size, &min, &max);


printf("The minimum value is %d and the maximum value is %d\n", min, max);

return 0;
}


int readData(int arr[], int size)
{
int count = 0;



printf("Enter the elements of the array, one per line. \n");
printf("Use -1 to signal the end of the list.\n");
printf("? ");
scanf("%d", &arr[count]);
while (arr[count] != -1 && count < size)
{
    count++;
    printf("? ");
    scanf("%d", &arr[count]);
}


return count;
}


void findMinMax(int arr[], int size, int *min, int *max)
{

*min = arr[0];
*max = arr[0];



for (int i = 1; i < size; i++)
{
    if (arr[i] < *min)
    {
        *min = arr[i];
    }
    else if (arr[i] > *max)
    {
        *max = arr[i];
    }
}
}
