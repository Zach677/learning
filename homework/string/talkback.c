// talkback.c
#include <stdio.h>
#include <string.h> //提供strlen()

#define DESITY 62.4

int main(void) {
  float weight, volume;
  int size, letters;
  char name[40]; // name为可容纳40个字符的数组

  printf("Hi! What's your fist name?\n");
  scanf("%s", name);
  printf("%s, what's your weight in punds?\n", name);
  scanf("%f", &weight);
  size = sizeof(name);
  letters = strlen(name);
  volume = weight / DESITY;
  printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
  printf("Also, your first name has %d letters,\n", letters);
  printf("and we have %d bytes to store it.\n", size);

  return 0;
}
