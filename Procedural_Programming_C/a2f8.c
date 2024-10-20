#include <stdio.h>

struct MonthlyData {

    float thermansi;
    float koinoxrhsta;
};

struct Diamerisma {

    int arithmos;
    char onoma[25];
    int tm;
    int fetes;
};

struct Total {

    float totalthermansi;
    float totalkoinoxrhsta;
    float totalAmount;
    int totaltm;
    int totalFetes;
};

void ReadEnoikoiData(struct Diamerisma Diamerismas[], int m);
struct Total Calculations(struct Diamerisma Diamerismas[], int m, struct MonthlyData monthlyData);
void DisplayPaymentStatus(struct Total Total);
struct MonthlyData ReadMonthData();
int ReadNumApparts();

int main() {

    int m;
    struct MonthlyData monthlyData;
    struct Diamerisma Diamerismas[20];

    m = ReadNumApparts();
    monthlyData = ReadMonthData();
    ReadEnoikoiData(Diamerismas, m);

    struct Total Total = Calculations(Diamerismas, m, monthlyData);

    DisplayPaymentStatus(Total);

    return 0;
}

int ReadNumApparts() {

    int m;
    printf("DWSE TO PLH8OS TWN DIAMERISMATWN?");
    scanf("%d", &m);
    return m;
}


struct MonthlyData ReadMonthData() {

    struct MonthlyData data;
    printf("DWSE TO MHNIAIO POSO THERMANSHS? ");
    scanf("%f", &data.thermansi);
    printf("DWSE TO MHNIAIO POSO KOINOXRHSTWN? ");
    scanf("%f", &data.koinoxrhsta);
    return data;
}


void ReadEnoikoiData(struct Diamerisma Diamerismas[], int m) {

    for (int i = 0; i < m; i++) {
        Diamerismas[i].arithmos = i + 1;

        printf("Dwse onomatepwnymo? ");
        scanf("%s", Diamerismas[i].onoma);
        printf("Dwse t.m? ");
        scanf("%d", &Diamerismas[i].tm);
        printf("Dwse fetes? ");
        scanf("%d", &Diamerismas[i].fetes);
    }
}


struct Total Calculations(struct Diamerisma Diamerismas[], int m, struct MonthlyData monthlyData) {

    struct Total Total = {0, 0, 0, 0, 0};

    for (int i = 0; i < m; i++) {
        Total.totalFetes += Diamerismas[i].fetes;
        Total.totaltm += Diamerismas[i].tm;
    }


    printf("\n%-3s%-20s%-15s%-10s%-15s%-15s%-15s\n", "A/A", "ONOMATEPWNYMO", "T.M", "FETES", "POSO THERM.", "POSO KOIN.", "SYNOLO");
    printf("-----------------------------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < m; i++) {
        float thermansi = (float)Diamerismas[i].fetes / Total.totalFetes * monthlyData.thermansi;
        float koinoxrhsta = (float)Diamerismas[i].tm / Total.totaltm * monthlyData.koinoxrhsta;
        float total = thermansi + koinoxrhsta;

        printf("%-3d%-20s%-15d%-10d%-15.2f%-15.2f%-15.2f\n",
               Diamerismas[i].arithmos, Diamerismas[i].onoma,
               Diamerismas[i].tm, Diamerismas[i].fetes,
               thermansi, koinoxrhsta, total);

        Total.totalthermansi += thermansi;
        Total.totalkoinoxrhsta += koinoxrhsta;
    }

    Total.totalAmount = Total.totalthermansi + Total.totalkoinoxrhsta;

    return Total;
}


void DisplayPaymentStatus(struct Total Total) {

    printf("-----------------------------------------------------------------------------------------------------------------------------\n");
    printf("%-3s%-20s%-15d%-10d%-15.2f%-15.2f%-15.2f\n",
           "SYNOLA", "", Total.totaltm, Total.totalFetes,
           Total.totalthermansi, Total.totalkoinoxrhsta, Total.totalAmount);
}












