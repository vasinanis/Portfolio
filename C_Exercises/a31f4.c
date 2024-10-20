#include <stdio.h>

int Antistrofo(int a);

int main() {
    int arithmos;
    int antistrofo;

    while (1) {
        printf("Give a number: ");
        scanf("%d", &arithmos);

        if (arithmos == -1) {
            break;
        }

        antistrofo = Antistrofo(arithmos);
        printf("%d %d\n", arithmos, antistrofo);
    }

    return 0;
}

int Antistrofo(int a) {
    int b;

    for ( ;a > 0; a /= 10) {
        b = b * 10 + a % 10;
    }

    return b;
}




