#include <stdio.h>
#include "simpio.h"

int main(){

long eispraxi004,eispraxi008,eispraxi018;
double FPA;

printf("Dwse tis synolikes eispraxeis gia FPA 0.04: ");
eispraxi004=GetLong();

printf("Dwse tis synolikes eispraxeis gia FPA 0.08: ");
eispraxi008=GetLong();

printf("Dwse tis synolikes eispraxeis gia FPA 0.18: ");
eispraxi018=GetLong();

FPA =( eispraxi004*0.04) + ( eispraxi008*0.08 ) + (eispraxi018*0.18);

printf("To synoliko poso FPA einai %g",FPA );







}
