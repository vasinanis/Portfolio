#include <stdlib.h>
#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define ROWS 10
#define COLUMNS 10

void populate_data(int grammes,int sthles,int Apinakas[grammes][sthles]);
void print_array(int grammes,int sthles,int Apinakas[grammes][sthles]);
void change_array(int grammes,int sthles,int Apinakas[grammes][sthles]);

int main(){

    int grammes,sthles;
    int Apinakas[ROWS][COLUMNS];

    printf("Dwse ton arithmo twn grammwn: ");
    grammes=GetInteger();

    printf("Dwse ton arithmo twn sthlwn: ");
    sthles=GetInteger();
    printf("ARXIKOS PINAKAS\n");
    populate_data(grammes,sthles,Apinakas);
    print_array(grammes,sthles,Apinakas);
    printf("ALLAGMENOS PINAKAS\n");
    change_array(grammes,sthles,Apinakas);
    print_array(grammes,sthles,Apinakas);



}
void populate_data(int grammes,int sthles,int Apinakas[grammes][sthles]){

    int i,j;

    for(i=0;i<grammes;i++)
        for(j=0;j<sthles;j++)
            Apinakas[i][j]=rand() % 100;

}

void print_array(int grammes,int sthles,int Apinakas[grammes][sthles]){

    int i,j;
    for(i=0;i<grammes;i++)
    {
      for(j=0;j<sthles;j++)
      printf("%2d ",Apinakas[i][j]);
      printf("\n");
    }
}

void change_array(int grammes,int sthles,int Apinakas[][sthles]){
    int i,j,mx;
for(i=0;i<sthles;i++)
{
mx=Apinakas[i][0];
for(j=1;j<grammes;j++)
 if (Apinakas[i][j]>mx)
     mx=Apinakas[i][j];
for (j=1;j<grammes;j++)
     Apinakas[i][j-1]=mx;



}
}








