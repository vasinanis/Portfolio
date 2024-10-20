#include <stdio.h>
#include <string.h>

#define MAX_PASSENGERS 100
#define MAX_NAME_LENGTH 19

int main() {
  char passengers[MAX_PASSENGERS][MAX_NAME_LENGTH + 1];
  int seat = 0;

  while (seat < MAX_PASSENGERS) {
    printf("Enter the name of passenger %d: ", seat + 1);
    scanf("%s", passengers[seat]);

    if (strcmp(passengers[seat], "----") == 0) {
      break;
    }

    // Check if this name already exists in the list
    int i;
    for (i = 0; i < seat; i++) {
      if (strcmp(passengers[i], passengers[seat]) == 0) {
        printf("Name already exists! Enter a different name.\n");
        seat--;
        break;
      }
    }

    seat++;
  }

  printf("\nPassengers on flight:\n");
  int i;
  for (i = 0; i < seat; i++) {
    printf("%d. %s\n", i + 1, passengers[i]);
  }

  return 0;
}

