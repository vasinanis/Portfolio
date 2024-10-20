#include <stdio.h>

#define NUM_STUDENTS 10
#define NUM_SUBJECTS 3

int main() {
    int grades[NUM_STUDENTS][NUM_SUBJECTS];
    double mo[NUM_STUDENTS];


    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("MATHITIS %d: \n", i + 1);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("MATHIMA %d:",j+1);
            scanf("%d", &grades[i][j]);

        }
        printf("\n");


        mo[i] = 0.0;
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            mo[i] += grades[i][j];
        }
        mo[i] /= NUM_SUBJECTS;
    }


    int failedCount = 0, excelledCount = 0;

    for (int i = 0; i < NUM_STUDENTS; i++) {
        if (mo[i] < 9.5) {
            failedCount++;
        } else if (mo[i] >= 18.5) {
            excelledCount++;
        }
    }

    double apotyxontes = (double)failedCount / NUM_STUDENTS * 100.0;
    double aristouxoi = (double)excelledCount / NUM_STUDENTS * 100.0;


    printf("\nAPOTYXONTES: %d (%.2f%%)\n", failedCount, apotyxontes);
    printf("ARISTOYXOI: %d (%.2f%%)\n", excelledCount, aristouxoi);
    printf("ARISTOYXOI: %d (%.2f%%)\n", excelledCount, aristouxoi);

    return 0;
}

