#include <stdio.h>
#include <string.h>



void ConvertToUpper(const char *firstName, const char *lastName, char *fullName, char *upperFullName,char c) {

    if (c >= 'a' && c <= 'z') return c - ('a' - 'A');
    return c;

    sprintf(fullName, "%s %s", firstName, lastName);


    for (int i = 0; fullName[i]; i++) {
        upperFullName[i] = convertToupper(fullName[i]);
    }
}

int main() {
    char firstName[50], lastName[50], fullName[100], upperFullName[100];

    // Input first name
    printf("Enter name: ");
    scanf("%s", firstName);

    // Input last name
    printf("Enter eponym: ");
    scanf("%s", lastName);

    // Call ConvertToUpper function
    ConvertToUpper(firstName, lastName, fullName, upperFullName);

    // Display results
    printf("Onoma = %s, %lu\n", firstName, strlen(firstName));
    printf("Eponymo = %s, %lu\n", lastName, strlen(lastName));
    printf("Onomateponymo = %s, %lu\n", fullName, strlen(fullName));
    printf("Upper Onomatoponymo = %s, %lu\n", upperFullName, strlen(upperFullName));

    return 0;
}

