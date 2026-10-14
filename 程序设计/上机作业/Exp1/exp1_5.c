#include <stdio.h>

void decToBi(int dec, int res[]);

int main() {
  int numDec;
  scanf("%d", &numDec);
  int res[4] = {0};
  decToBi(numDec, res);
  
  printf("¶þ½øÖÆ£º");
  for(int i = 0; i < 4; i ++) {
    printf("%d", res[i]);
  }

  return 0;
}

void decToBi(int dec, int res[]) {
  res[0] = dec / 8;
  dec -= res[0] * 8;
  res[1] = dec / 4;
  dec -= res[1] * 4;
  res[2] = dec / 2;
  dec -= res[2] * 2;
  res[3] = dec;
}