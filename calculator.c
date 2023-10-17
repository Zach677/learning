#include <stdio.h>

int main(void) {
  char operator;
  double num1, num2, result;

  printf("请输入运算符 (+ , - , * , /): ");
  scanf("%c", &operator);

  printf("请输入两个数字: ");
  scanf("%lf %lf", &num1, &num2);

  switch (operator) {
  case '+':
    result = num1 + num2;
    break;
  case '-':
    result = num1 - num1;
    break;
  case '*':
    result = num1 * num2;
    break;
  case '/':
    if (num2 != 0) {
      result = num1 / num2;
    } else {
      printf("除数不能为0");
    }
    break;
  default:
    printf("error: 无效运算符\n");
    return 1;
  }

  printf("结果是 %lf\n", result);

  return 0;
}
