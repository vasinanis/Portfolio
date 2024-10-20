#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convert_to_alphanumeric(int num,int length,char result[]);

int main(){

    int num,length;

    char result[100];

    printf("Dwse noumero: ");
    scanf("%d",&num);

    printf("Dwse length: ");
    scanf("%d",&length);

    convert_to_alphanumeric(num, length, result);

  printf("The converted number is: %s\n", result);

  return 0;
}

void convert_to_alphanumeric(int num,int length,char result[]){

    sprintf(result,"%d",num);

    int num_of_zeros=length-strlen(result);


memmove(result + num_of_zeros, result, strlen(result) );
    memset(result, '0', num_of_zeros);




}
