#include <stdio.h>

int main() {
  float y,x;
  printf("ºC: ");
  scanf("%f", &y);
  x = (y*9)/5+32;
  printf("ºF: %.1f", x);
}
