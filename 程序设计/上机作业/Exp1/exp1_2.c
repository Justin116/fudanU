#include <stdio.h>

float fahrToCelc(float fahrTemp);

int main() {
  float morningFahr, noonFahr;
  float morningCelc, noonCelc;
  scanf("%f%f", &morningFahr, &noonFahr);
  morningCelc = fahrToCelc(morningFahr);
  noonCelc = fahrToCelc(noonFahr);
  printf("早晨温度：%.2f摄氏度\n中午温度：%.2f摄氏度\n升高温度：%.2f摄氏度",
    morningCelc, noonCelc, noonCelc - morningCelc);

  return 0;
}

float fahrToCelc(float fahrTemp) {
  return (fahrTemp - 32) * 5 / 9;
}