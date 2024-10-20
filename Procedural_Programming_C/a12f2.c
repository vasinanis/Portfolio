#include <stdio.h>

int main(){
    int varos,xwra,xrewsh;
    float epivarinsi,telh;

    printf("Dwse to baros:");
    scanf("%d",&varos);

    printf("Dwse ton kwdiko ths xwras apostolhs (0,1):");
    scanf("%d",&xwra);

    printf("To varos einai %d",varos);

    if (varos >= 1 && varos <= 20) {
        xrewsh = 5 * varos;
    } else if (varos > 20 && varos <= 100) {
        xrewsh = 5 * 20 + (varos - 20) * 7;
    } else if (varos > 100) {
        xrewsh = 5 * 20 + 80 * 7 + (varos-100) * 10;
    }
    printf("\nH epipleon xrewsh einai %d",xrewsh);

    if (xwra==0){

        epivarinsi=( 12.0 + xrewsh ) * 0.12;
    }
    else if(xwra==1){

        epivarinsi=( 12.0 + xrewsh ) * 0.15;
    }

    printf("\n H epibarunsh einai %.2f",epivarinsi);

    telh= 12 + xrewsh + epivarinsi;
    printf("\nTa taxydromika telh einai %.2f",telh);

    return 0;
}
