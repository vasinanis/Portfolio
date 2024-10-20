#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"

void decompose(long num, long* digits, double* average, long* max);

int main() {

  printf("Please insert a non-negative number: ");
  long num;
  scanf("%ld", &num);


  long digits, max;
  double average;


  decompose(num, &digits, &average, &max);


  printf("Digits: %d\n", digits);
  printf("Average: %.3f\n", average);
  printf("Max: %d\n", max);

  return 0;
}



void decompose(long num, long* digits, double* average, long* max) {

  *digits = 0;
  *average = 0;
  *max = 0;


  while (num > 0) {
    (*digits)++;
    *average += num % 10;
    *max = fmax(*max, num % 10);
    num /= 10;
  }


  *average /= *digits;


  return;
}

