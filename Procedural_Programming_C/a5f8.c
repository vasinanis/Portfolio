#include <stdio.h>
#define N 20

struct Seller {
    int code;
    char lastName[16];
    long salesAmount;
    int region;
};

void insertSellers(struct Seller sellers[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter the details of seller %d:\n", i+1);
        printf("Code: ");
        scanf("%d", &sellers[i].code);
        printf("Last name: ");
        scanf("%s", sellers[i].lastName);
        printf("Sales amount: ");
        scanf("%ld", &sellers[i].salesAmount);
        printf("Region (1=Thes/niki, 2=Athens, 3=Volos, 4=Hrakleio): ");
        scanf("%d", &sellers[i].region);
    }
}

void calculateTotalSalesByRegion(struct Seller sellers[], int count, long totals[]) {
    for (int i = 0; i < count; i++) {
        totals[sellers[i].region-1] += sellers[i].salesAmount;
    }
}

void displayTotalSalesByRegion(long totals[]) {
    printf("PERIOXH | SYNOLIKES PWLHSEIS\n");
    printf("------------------------------------------------\n");
    printf("Thes/niki | %ld\n", totals[0]);
    printf("Athens | %ld\n", totals[1]);
    printf("Volos | %ld\n", totals[2]);
    printf("Hrakleio | %ld\n", totals[3]);
    printf("------------------------------------------------\n");
    printf("SYNOLO: %ld\n", totals[0] + totals[1] + totals[2] + totals[3]);
}

int main() {
    int count;
    printf("Arithmos Pwlhtwn: ");
    scanf("%d", &count);
    struct Seller sellers[N];
    insertSellers(sellers, count);
    long totals[4] = {0};
    calculateTotalSalesByRegion(sellers, count, totals);
    displayTotalSalesByRegion(totals);
    return 0;
}

