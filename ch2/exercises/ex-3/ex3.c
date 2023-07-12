#include <stdio.h>
#define  INCHES_PER_POUND 166
#define HEIGHT 10
#define LENGTH 5
#define WIDTH 15

int main(void) {
  int volume;

  volume = HEIGHT * LENGTH * WIDTH;

  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);

  return 0;
}