#include <stdio.h>

int main(void) {
  int Age;
  float s = 3.156e7;

  printf("Please enter your age: ");
  scanf("%d", &Age);

  float result = Age * s;
  printf("This is your Age's time: %e\n", result);

  return 0;
}
