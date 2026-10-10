#include <stdio.h>

int main() {
  float singPrice, payPrice;
  int amount;
  scanf("%f%d%f", &singPrice, &amount, &payPrice);
  float totalPrice, extraPrice;
  totalPrice = singPrice * amount;
  extraPrice = payPrice - totalPrice;
  printf("应付金额：%.2f元\n", totalPrice);
  printf("找零金额：%.2f元", extraPrice);

  return 0;
}