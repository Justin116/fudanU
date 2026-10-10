#include <stdio.h>

void main() {
  double f, c;
  int lower, upper, step;
  lower = 0;
  upper = 200;
  step = 20;
  f = lower;
  printf("\t »ªÊÏÎÂ¶È\t ÉãÊÏÎÂ¶È\n");
  while (f <= upper) {
    c = 5.0 / 9.0 * (f - 32.0);
    printf("\t%7.0f\t%7.1f\n", f, c);
    f += step;
  }
}