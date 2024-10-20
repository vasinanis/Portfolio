#include <stdio.h>
#include "simpio.h"
int main()
{
    double orio,  i;
    float athroisma = 0;
    printf("Dwse orio: ");
    orio=GetLong();
    for (i = 1; i <= orio; i++)
    {
        athroisma = athroisma + (1 / i);

    }
    printf("To athroisma einai %.2lf", athroisma);
}

