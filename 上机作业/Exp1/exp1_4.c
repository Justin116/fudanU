#include <stdio.h>

int main() {
  int fakeBi;
  scanf("%d", &fakeBi);

  int biOne, biTen, biHun, biThous;
  biThous = fakeBi / 1000;
  fakeBi -= biThous * 1000;
  biHun = fakeBi / 100;
  fakeBi -= biHun * 100;
  biTen = fakeBi / 10;
  fakeBi -= biTen * 10;
  biOne = fakeBi;

  unsigned num = biThous * 8 + biHun * 4 + biTen * 2 + biOne * 1;
  printf("十进制：%u\n八进制：%o\n十六进制：%x", num, num, num);

  return 0;
}