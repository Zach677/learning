#include <stdio.h>

int main(void) {
  float weight; // weight
  float value;  // gold

  printf("Are you worth your weight in platinum?\n");
  printf("Let's check it out.\n");
  printf("Please enter your weight in pounds: ");

  // uses output
  scanf("%f", &weight);

  value = 1700.0 * weight * 14.5833;
  printf("Your weight in platinum is worth $%.2f.\n", value);
  printf("You are easily worth that! If platinum prices drop,\n");
  printf("eat more to maintain yor value.\n");

  getchar();
  getchar();

  return 0;
}
