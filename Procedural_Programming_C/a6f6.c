#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"


#define N 5

void readData(int data[N][4]);
void findMean(int data[N][4], float *meanMale, float *meanFemale, int element);

int main() {

  int data[N][4];


  readData(data);


  float meanMale, meanFemale;


  findMean(data, &meanMale, &meanFemale, 1);
  printf("Mesos oros barous andrwn: %.1f\n", meanMale);
  printf("Mesos oros barous gynaikwn: %.1f\n", meanFemale);


  findMean(data, &meanMale, &meanFemale, 2);
  printf("Mesos oros ypsous andrwn: %.1f\n", meanMale);
  printf("Mesos oros ypsous gynaikwn: %.1f\n", meanFemale);


  findMean(data, &meanMale, &meanFemale, 3);
  printf("Mesos oros hlikias andrwn: %.1f\n", meanMale);
  printf("Mesos oros hlikias gynaikwn: %.1f\n", meanFemale);

  return 0;
}


void readData(int data[N][4]) {
  for (int i = 0; i < N; i++) {

    printf("Dwse fylo: ");
    scanf("%d", &data[i][0]);
    printf("Dwse baros: ");
    scanf("%d", &data[i][1]);
    printf("Dwse ypsos: ");
    scanf("%d", &data[i][2]);
    printf("Dwse ilikia: ");
    scanf("%d", &data[i][3]);
    printf("-----\n");
  }
}


void findMean(int data[N][4], float *meanMale, float *meanFemale, int element) {

  int sumMale = 0, sumFemale = 0;


  int countMale = 0, countFemale = 0;


  for (int i = 0; i < N; i++) {
    if (data[i][0] == 0) {

      sumMale += data[i][element];
      countMale++;
    } else {

      sumFemale += data[i][element];
      countFemale++;
    }
  }


  *meanMale = (float)sumMale / countMale;
  *meanFemale = (float)sumFemale / countFemale;
}

