#include <stdio.h>

int isLeap(int year) {
  if (year % 400 == 0) return 1;
  else if ((year % 4 == 0) && (year % 100 != 0)) return 1;

  return 0;
}

int main() {
  int year;
  scanf("%d", &year);
  printf("%s", isLeap(year) ? "ÈòÄê" : "Æ½Äê");

  return 0;
}