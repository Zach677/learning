#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  char password[1024];
  while (true) {
    printf("please input password:\t");
    scanf("%s", password);

    if (strcmp(password, "12345")) {
      printf("Incorrect!\n");
    }

    else {
      printf("Congratulation!\n");
      break;
    }
  }
  return 0;
}
