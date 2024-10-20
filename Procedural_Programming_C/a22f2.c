#include <stdio.h>

int main() {
    int vathmoi;
    float gpa;


        printf("Enter your marks?");
        scanf("%d", &vathmoi);

        if (vathmoi >= 86 && vathmoi <= 100) {
            gpa = 4.0;
        } else if (vathmoi >= 61 && vathmoi<= 85) {
            gpa = 3.0;
        } else if (vathmoi >= 41 && vathmoi <= 60) {
            gpa = 2.0;
        } else if (vathmoi >= 31 && vathmoi <= 40) {
            gpa = 1.0;
        } else if (vathmoi < 31) {
            gpa = 0.0;
        }

        printf("GPA=%.2f\n", gpa);


    return 0;
}

