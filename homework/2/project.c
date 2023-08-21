#include <stdio.h>

int main(void) {
  int a, b;
  a = 2;
  b = 3;
  printf("%d %d\n", a, b);
  printf("%d\n%d\n", a, b);
  printf("%d ", a);
  printf("%d\n", b);

  return 0;
}
