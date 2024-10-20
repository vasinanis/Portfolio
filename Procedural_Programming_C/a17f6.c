#include <stdio.h>

void ReadData(int grammes, int stiles, int pinakas[grammes][stiles]);
void printTab_2d(int grammes, int stiles, int pinakas[grammes][stiles]);
void  FindMaxRowMinCol(int grammes, int stiles, int pinakas[grammes][stiles], int grammi, int stili, int *maxGramma, int *minStili);

int main() {

    int grammes = 3, stiles = 4;
    int pinakas[grammes][stiles];

    ReadData(grammes, stiles, pinakas);

    printTab_2d(grammes, stiles, pinakas);

    int grammi, stili;
    printf("Give row ");
    scanf("%d", &grammi);
    printf("Give column ");
    scanf("%d", &stili);

    int megalyteroGramma, elaxistoStili;
    FindMaxRowMinCol(grammes, stiles, pinakas, grammi, stili, &megalyteroGramma, &elaxistoStili);

    printf("max=%d, ",megalyteroGramma);
    printf("min=%d\n",elaxistoStili);

    return 0;
}

void ReadData(int grammes, int stiles, int pinakas[grammes][stiles]) {

    for (int i = 0; i < grammes; ++i) {
        for (int j = 0; j < stiles; ++j) {
            printf("Give element %d, %d ", i, j);
            scanf("%d", &pinakas[i][j]);
        }
    }
}


void printTab_2d(int grammes, int stiles, int pinakas[grammes][stiles]) {
    printf("2d array is:\n");
    for (int i = 0; i < grammes; ++i) {
        for (int j = 0; j < stiles; ++j) {
            printf("%d\t", pinakas[i][j]);
        }
        printf("\n");
    }
}

void FindMaxRowMinCol(int grammes, int stiles, int pinakas[grammes][stiles], int grammi, int stili, int *megalyteroGramma, int *elaxistoStili) {
    *megalyteroGramma = pinakas[grammi][0];
    for (int j = 1; j < stiles; ++j) {
        if (pinakas[grammi][j] > *megalyteroGramma) {
            *megalyteroGramma = pinakas[grammi][j];
        }
    }

    *elaxistoStili = pinakas[0][stili];
    for (int i = 1; i < grammes; ++i) {
        if (pinakas[i][stili] < *elaxistoStili) {
            *elaxistoStili = pinakas[i][stili];
        }
    }
}






