#include <stdio.h>

int main(void) {
  int number;
  float water = 3e-23;

  printf("Enter Water's number: ");
  scanf("%d", &number);

  float Water;
  Water = 950 * number / water;

  printf("The result is: %e\n", Water);

  return 0;
}
