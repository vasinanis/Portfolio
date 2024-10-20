#include <stdio.h>
#include <stdlib.h>

#define MINES 12
#define IMERES 30

void paragogiXreoseon(int xreoseis[MINES][IMERES]);
int evresiMegalisXreosis(int xreoseis[MINES][IMERES]);
void evresiMegaliXreosisImeres(int xreoseis[MINES][IMERES], int megaliXreosi, int imeresMegalisXreosis[MINES]);
void emfanisiXreoseon(int xreoseis[MINES][IMERES]);
void emfanisiMegalisXreosis(int megaliXreosi);
void emfanisiImeresMegalisXreosis(int imeresMegalisXreosis[MINES]);

int main() {

    int xreoseis[MINES][IMERES];
    int megaliXreosi, imeresMegalisXreosis[MINES];

    paragogiXreoseon(xreoseis);
    megaliXreosi = evresiMegalisXreosis(xreoseis);
    evresiMegaliXreosisImeres(xreoseis, megaliXreosi, imeresMegalisXreosis);

    emfanisiXreoseon(xreoseis);
    emfanisiMegalisXreosis(megaliXreosi);
    emfanisiImeresMegalisXreosis(imeresMegalisXreosis);

    return 0;
}

void paragogiXreoseon(int xreoseis[MINES][IMERES]) {

    srand(20);

    for (int i = 0; i < MINES; ++i) {
        for (int j = 0; j < IMERES; ++j) {
            xreoseis[i][j] = rand() % 24;
        }
    }
}

int evresiMegalisXreosis(int xreoseis[MINES][IMERES]) {

    int megaliXreosi = xreoseis[0][0];

    for (int i = 0; i < MINES; ++i) {
        for (int j = 0; j < IMERES; ++j) {
            if (xreoseis[i][j] > megaliXreosi) {
                megaliXreosi = xreoseis[i][j];
            }
        }
    }

    return megaliXreosi;
}

void evresiMegaliXreosisImeres(int xreoseis[MINES][IMERES], int megaliXreosi, int imeresMegalisXreosis[MINES]) {

    for (int i = 0; i < MINES; ++i) {
        imeresMegalisXreosis[i] = -1;

        for (int j = 0; j < IMERES; ++j) {
            if (xreoseis[i][j] == megaliXreosi) {
                imeresMegalisXreosis[i] = j + 1;
            }
        }
    }
}

void emfanisiXreoseon(int xreoseis[MINES][IMERES]) {

    for (int i = 0; i < MINES; ++i) {


        for (int j = 0; j < IMERES; ++j) {
            printf("%d ", xreoseis[i][j]);
        }

        printf("\n");
    }
}

void emfanisiMegalisXreosis(int megaliXreosi) {

    printf("\nmax %d\n", megaliXreosi);
}

void emfanisiImeresMegalisXreosis(int imeresMegalisXreosis[MINES]) {

    for (int i = 0; i < MINES; ++i) {
        if (imeresMegalisXreosis[i] != -1) {
            printf("%d %d\n", i + 1, imeresMegalisXreosis[i]);
        }
    }
}




