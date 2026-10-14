#include <stdio.h>

int countDigit(long long num) {
  long long temp = num < 0 ? (num * -1) : num;
  int digit = 0;
  do {
    digit ++;
    temp /= 10;
  } while (temp != 0);

  return digit;
}

int main() {
  long long num;
  scanf("%lld", &num);
  int numCount[11] = {0};
  
  int digit = countDigit(num);
  long long temp = num < 0 ? (num * -1) : num;
  int digitNum;
  for (int i = 0; i < digit; i ++) {
    digitNum = temp % 10;
    temp /= 10;
    numCount[digitNum] ++;
  }

  for (int i = 0; i < 10; i ++) {
    printf("%d %d\n", i, numCount[i]);
  }

  return 0;
}