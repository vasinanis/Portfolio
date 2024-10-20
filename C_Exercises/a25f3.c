#include <stdio.h>

int main() {
    int number, sum = 0, typos;
    int elegxos = 0;

    while (!elegxos) {
        printf("Give an even integer between [0...1000] ");
        scanf("%d", &number);

        if (number >= 0 && number <= 1000) {
            elegxos = 1;
        }
    }


    for (int i = 1; i <= number; i++) {
        sum += i;
    }


    typos = (number * (number + 1)) / 2;


    printf("The sum of 0+1+2...+number is %d %d", sum,typos);

    return 0;
}



