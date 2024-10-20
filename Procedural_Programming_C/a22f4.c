#include <stdio.h>

double calculateVAT(int cat, double timh);


int main() {

    int posotita;
    double timi,kostos = 0,FPA = 0;
    int katigoria,i=0;
    double Kostos_Proiontos;
    double FPA_Proiontos;


    for (i = 1; i <= 5; i++) {

        printf("Dwse to plithos temaxiwn apo to proion %d: ",i);
        scanf("%d", &posotita);
        printf("Dwse timi gia to proion %d: ",i);
        scanf("%lf", &timi);
        printf("Dwse katigoria FPA gia to proion %d: ",i);
        scanf("%d", &katigoria);

        Kostos_Proiontos =posotita*timi;
        FPA_Proiontos = calculateVAT(katigoria, timi * posotita);

        if (FPA_Proiontos == 0) {
            kostos += Kostos_Proiontos;
        } else {
            kostos += Kostos_Proiontos + FPA_Proiontos;
            FPA += FPA_Proiontos;
        }
    }

    printf("Synoliko kostos: %.2lf\n", kostos);
    printf("Synoliko FPA: %.2lf\n", FPA);

    return 0;
}

double calculateVAT(int cat, double timh) {
    switch (cat) {
        case 1:
            return timh * 0.00;
        case 2:
            return timh * 0.06;
        case 3:
            return timh * 0.13;
        case 4:
            return timh * 0.19;
        default:
            printf("Lathos kathgoria FPA\n");
            return 0;
    }
}



