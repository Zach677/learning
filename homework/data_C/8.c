#include <stdio.h>

int main(void) {
  int Body;

  printf("Enter your 身高: ");
  scanf("%d", &Body);

  float body = Body * 2.54;

  printf("Your 身高(cm): %f\n", body);

  return 0;
}
