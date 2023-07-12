#include <stdio.h>

int main(void) {
  float radius;
  float volume;

  printf("Please enter the radius: \n");
  scanf("%f", &radius);

  volume = 4.0f/3.0f * 3.14 * radius * radius * radius;
  printf("The volume of the sphere is: %f\n", volume);

  return 0;
}