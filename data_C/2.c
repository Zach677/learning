#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test();//定义函数test

int main() {   //验证结果
  bool success = false;

  int result = test();
  if (result == 0) {
    success = true;
  }

  if (success) {
    printf("You are successful\n");
  } else {
    printf("Sorry, you didn't succeed\n");
  }

  return 0;
}

int test() {
  char password[1024];
  int attempts = 3;
  while (attempts > 0) {
    printf("Enter your password (%d attempts left):\t", attempts);
    scanf("%s", password);

    if (strcmp(password, "8726") == 0) {
      return 0;
    } else {
      printf("Password incorrect. Try again.\n");
      attempts--;
    }
  }

  return 1;
}

