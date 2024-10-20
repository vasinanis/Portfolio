#include <stdio.h>

int main() {
    int kafes, dio, ena, peninta, eikosi, deka;

    printf("Dose kafedes: ");
    scanf("%d", &kafes);

    if (kafes <= 7) {
        printf("Resta: \n");
        int totalCost = kafes * 70;

        dio = (500 - totalCost) / 200;
        ena = (500 - totalCost - dio * 200) / 100;
        peninta = (500 - totalCost - dio * 200 - ena * 100) / 50;
        eikosi = (500 - totalCost - dio * 200 - ena * 100 - peninta * 50) / 20;
        deka = (500 - totalCost - dio * 200 - ena * 100 - peninta * 50 - eikosi * 20) / 10;

        printf("Kermata 2E: %d\n", dio);
        printf("Kermata 1E: %d\n", ena);
        printf("Kermata 50L: %d\n", peninta);
        printf("Kermata 20L: %d\n", eikosi);
        printf("Kermata 10L: %d\n", deka);
    } else {
        printf("Sfalma\n");
    }

    return 0;
}










