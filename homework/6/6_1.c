#include <stdio.h>

void br(void);
void ic(void);

void br(void) { printf("Brazil, Russia\n"); }

void ic(void) { printf("India, China\n"); }

int main(void) {
  char name1[] = "Brazil";
  char name2[] = "Russia";
  char name3[] = "India";
  char name4[] = "China";

  printf("%s, %s, %s, %s\n", name1, name2, name3, name4);
  br();
  ic();
}
