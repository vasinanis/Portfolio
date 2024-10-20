#include <stdio.h>

void DateString(int day, int month, int year, char date[10]) {
  char monthName[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  sprintf(date, "%02d-%s-%02d", day, monthName[month - 1], year % 100);
}

int main() {
  char date[10];
  int day,month,year;
  printf("Enter the Day: ");
  scanf("%d", &day);
  printf("Enter month: ");
  scanf("%d", &month);
  printf("Enter year: ");
  scanf("%d", &year);
  DateString(day, month, year, date);
  printf("%s\n", date);
  return 0;
}

