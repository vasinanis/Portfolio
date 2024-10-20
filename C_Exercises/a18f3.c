#include <stdio.h>

int main() {
    int poso1, total = 0, fores = 1, min, max, poso2, syn;
    fores = 1;

    printf("Dwse poso: ");
    scanf("%d", &poso1);
    max = poso1;
    min = poso1;

    do {
        printf("Dwse poso: ");
        scanf("%d", &poso2);
        total += poso2;

        if (poso2 > max) {
            max = poso2;
        }
        if (poso2 < min) {
            min = poso2;
        }

        fores = fores + 1;
    } while (total + poso1 < 100000);

    syn = poso1 + total;

    printf("Plithos atomwn: %d\n", fores);
    printf("Synoliko poso: %d\n", syn);
   printf("Megalytero poso: %d  Mikrotero poso: %d\n", max, min);

    return 0;
}

