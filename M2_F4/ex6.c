#include <stdio.h>

int main() {
  int x, y, z = 1;

  printf("Valor da base: ");
  scanf("%d",  &x);
  printf("Valor do expoente: ");
  scanf("%d", &y);

  while(y != 0) {
    z *= x;
    y -= 1;
  }

  printf("Resultado: %d", z);

  return 0;
}