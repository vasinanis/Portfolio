#include <stdio.h>
#include <ctype.h>

int main() {

    char pinakas1[100];
    int sum = 0;
    int psifio = 0;

    printf("Insert a string: ");

    fgets(pinakas1, sizeof(pinakas1), stdin);


    for (int i=0; pinakas1[i]!='\0'&&i<99; ++i) {

        if (isdigit(pinakas1[i])) {

            printf("%c + ", pinakas1[i]);
            sum += pinakas1[i] - '0';
            psifio = 1;
        }
    }

    if (psifio) {

        printf("\b\b = %d\n", sum);
    } else {

        printf("\nNo digits in input.\n");
    }

    return 0;
}

