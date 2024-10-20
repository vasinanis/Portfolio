#include <stdio.h>

int main(){
    int varos;
    float telos;

    printf("Dwse to varos: ");
    scanf("%d",&varos);

    if (varos >= 1 && varos <= 20) {
        telos = 25.00;
    } else if (varos > 20 && varos <= 200) {
        telos = 60.00;
    } else if (varos > 200) {
        telos = 0.4 * varos;
    }
    printf("Ta taxudromika telh einai %.2f",telos);

    return 0;

}
