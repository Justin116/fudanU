#include <stdio.h>
#include <math.h>

int greatestBiMagOfDec(int dec) {
  int k;
  for (k = 0; k < 16; k ++) {
    if ((int) pow(2, k) > dec)
      return k - 1;
  }
}

void decToBi(int dec) {
  int bi[16] = {0};
  int weight;
  int magnitude = greatestBiMagOfDec(dec);
  
  for (int i = 0; i <= magnitude; i ++) {
    weight = (int) pow(2, magnitude - i);
    bi[i] = dec / weight;
    dec -= bi[i] * weight;
    // printf("\nbi[%d] = %d, dec = %d\n", i, bi[i], dec);
  }

  bi[magnitude + 1] = -1;

  printf("转化后的二进制为：");
  for (int j = 0; j < 16; j ++) {
    if (bi[j] == -1) break;
    printf("%d", bi[j]);
  }
  printf("\n");
}

void biToDec(int bi) {
  int arr[8] = {0};
  int decNum = 0;
  int q = 1;
  for (int i = 0; i < 8; i ++) {
    arr[i] = bi % 10;
    bi /= 10;

    decNum += arr[i] * q;
    q *= 2;
  }

  printf("转化后的十进制为：%d\n", decNum);
}

int main() {
  int dec;
  printf("请输入十进制数：");
  scanf("%d", &dec);
  decToBi(dec);
  
  int bi;
  printf("请输入二进制数：");
  scanf("%d", &bi);
  biToDec(bi);

  return 0;
}