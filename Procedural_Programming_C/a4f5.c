#include <stdio.h>

#define NUM_PRODUCTS 5
#define NUM_SELLERS 4

int main() {

    long productPrices[NUM_PRODUCTS] = {25000, 15000, 32000, 21000, 9200};


    int sales[NUM_SELLERS][NUM_PRODUCTS] = {
        {10, 4, 5, 6, 7},
        {7, 0, 12, 1, 3},
        {4, 9, 5, 0, 8},
        {3, 2, 1, 5, 6}
    };

    printf("EISPRAKSEIS: ");
    for (int i = 0; i < NUM_SELLERS; i++) {
        long eisprakseis = 0;

        for (int j = 0; j < NUM_PRODUCTS; j++) {
            eisprakseis += sales[i][j] * productPrices[j];

        }

        printf("%ld ", eisprakseis);

    }
    printf("\n");
    printf("PROMITHEIES: ");
    for (int i = 0; i < NUM_SELLERS; i++) {
         double promitheia = 0.0;

        for (int j = 0; j < NUM_PRODUCTS; j++) {
            promitheia += sales[i][j] * productPrices[j] * 0.1;

        }

        printf("%.2f ", promitheia);
    }

    printf("\n");

    printf("POSOTHTES: ");
    for (int j = 0; j < NUM_PRODUCTS; j++) {
        int posotita= 0;


        for (int i = 0; i < NUM_SELLERS; i++) {
            posotita += sales[i][j];
        }
        printf("%d ", posotita);
    }

    return 0;
}

