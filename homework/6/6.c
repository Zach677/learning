#include <stdio.h>

int main(void) {
  char name1[] = "Brazil";
  char name2[] = "Russia";
  char name3[] = "India";
  char name4[] = "China";

  printf("%s, %s, %s, %s\n", name1, name2, name3, name4);
  printf("%s, %s\n", name3, name4);
  printf("%s, %s\n", name1, name2);

  return 0;
}
