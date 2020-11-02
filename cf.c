#include <stdio.h>

int main() {
  float y,x;
  printf("ºF: ");
  scanf("%f", &y);
  x = (y-32)*5/9;
  printf("ºC: %.1f", x);
}
