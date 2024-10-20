#include <stdio.h>

void LearnC10();
void LearnC(int n);
void EmfaniseAsteria(int typos, int n);

int main() {
    LearnC10();

    printf("Give number ");
    int numero;
    scanf("%d", &numero);

    EmfaniseAsteria(1,numero);
    EmfaniseAsteria(2,numero);
    EmfaniseAsteria(5,numero);
    LearnC(4);


    return 0;
}

void LearnC10() {
    for (int i = 0; i < 10; i++) {
        printf("learn C\n");
    }
}


void LearnC(int n) {
    for (int i = 0; i < n; i++) {
        printf("learn C\n");
    }
}


void EmfaniseAsteria(int typos, int n) {
    if (typos == 1) {
        for (int i = 0; i < n; i++) {
            printf("*-");
        }
        printf("\n");
    } else if (typos == 2) {
        for (int i = 0; i < n; i++) {
            printf("*-\n");
        }
    } else {
        printf("wrong type\n");
    }
}
