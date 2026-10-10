#include <stdio.h>

int main() {
  for (int i = 0; i < 4; i ++)
    printf("字符 十进制 八进制 十六进制      ");
  printf("\n");

  for (int j = 33; j <= 126; j ++) {
    printf("%4c %6d %6o %8x      ", j, j, j, j);
    if ((j - 32) % 4 == 0)
      printf("\n");
  }
}