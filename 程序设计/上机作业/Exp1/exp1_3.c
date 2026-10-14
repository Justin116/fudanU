#include <stdio.h>

int main() {
  int totSec;
  scanf("%d", &totSec);

  int formattedHour, formattedMin, formattedSec;
  formattedHour = totSec / 3600;
  totSec -= formattedHour * 3600;
  formattedMin = totSec / 60;
  totSec -= formattedMin * 60;
  formattedSec = totSec;

  printf("%d ±%d∑÷%d√Î", formattedHour, formattedMin, formattedSec);
  
  return 0;
}