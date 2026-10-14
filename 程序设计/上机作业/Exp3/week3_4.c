#include <stdio.h>

void calc(double a, double b, char exec) {
  switch (exec) {
    case '+':
      printf("%.2f", a + b); break;
    case '-':
      printf("%.2f", a - b); break;
    case '*':
      printf("%.2f", a * b); break;
    case '/':
      if (b == 0) {
        printf("除数不能为0");
        break;
      }

      printf("%.2f", a / b); break;
    default:
      printf("无效运算符"); break;
  }
}

int main() {
  double a, b;
  char exec;
  scanf("%lf %c %lf", &a, &exec, &b);

  calc(a, b, exec);

  return 0;
}