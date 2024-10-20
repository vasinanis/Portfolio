#include <stdio.h>
#include <string.h>

void common(char leksi1[], char leksi2[]);
void common_once(char leksi1[], char leksi2[]);

int main() {

    char leksi1[100], leksi2[100];

    printf("Insert two words to find the common characters\n");

    printf("Word 1: ");
    scanf("%s", leksi1);

    printf("Word 2: ");
    scanf("%s", leksi2);

    common(leksi1, leksi2);

    printf("\n");

    common_once(leksi1, leksi2);

    return 0;
}
void common(char leksi1[], char leksi2[]) {

    int i,j;

    printf("Common Characters: ");

    for (i = 0; i < strlen(leksi1); i++) {
        for (j = 0; j < strlen(leksi2); j++) {
            if (leksi1[i] == leksi2[j]) {
                printf("%c", leksi1[i]);

break;
}
}
}
}

void common_once(char leksi1[], char leksi2[]) {

    int i,j;
    int pinakas[256] = {0};

    printf("Unique Common Characters: ");

    for (i = 0; i < strlen(leksi1); i++) {

        for (j = 0; j < strlen(leksi2); j++) {

            if (leksi1[i] == leksi2[j] && !pinakas[j]) {

                printf("%c", leksi1[i]);
                pinakas[j] = 1;

break;
}
}
}
}


