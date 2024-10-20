#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convert_to_alphanumeric(int num, int length, char result[]) {
  // convert the integer to a string
  sprintf(result, "%d", num);

  // calculate the number of zeros to be added in front of the string
  int num_of_zeros = length - strlen(result);

  // add the zeros in front of the string
  if (num_of_zeros > 0) {
    memmove(result + num_of_zeros, result, strlen(result) + 1);
    memset(result, '0', num_of_zeros);
  }
}

int main() {
  int num, length;
  char result[100];

  printf("Enter a positive integer: ");
  scanf("%d", &num);

  printf("Enter the desired length: ");
  scanf("%d", &length);

  convert_to_alphanumeric(num, length, result);

  printf("The converted number is: %s\n", result);

  return 0;
}
