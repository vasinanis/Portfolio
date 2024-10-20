#include <stdlib.h>
#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define size 50

int Read(int n);
void Add(int n,long a[n]);
void print_it(long n,long a[n]);
int FindMaxsPos(int n, long a[], int index[]);

int main(){

    int n;
    long a[size];
    int index[size];

    n=Read(n);
    Add(n,a);
    print_it(n,a);
    FindMaxsPos(n,a,index);





}

int Read(int n){

    printf("Dwse to plhthos twn stoixeiwn: ");
    n=GetInteger();
    return n;



}

void Add(int n,long a[n]){

    int i;

    for(i=0;i<n;i++){
        a[i]=GetLong();

    }
}

void print_it(long n,long a[n]){


    int i;
    for (i = 0; i<n; i++){
         printf("%d ",a[i]);

}
}

int FindMaxsPos(int n, long a[], int index[]){

    long max;
    int i,total=1,j=0;


    for(i=0;i<n-1;i++){

            if (a[i]==max){
                total++;
                j++;
                index[j]=i;
            }
            else if(a[i]>max){
                total=1;
                max=a[i];
                j=0;
                index[j]=i;

            }
        }




    printf("\n");
    printf("maximum %d\n",max);
    printf("%Plithos maximum %d\n",total);
    printf("Position of maximum ");
    for(i=0;i<=j;i++){
        printf("%d ",index[i]);
    }
}




