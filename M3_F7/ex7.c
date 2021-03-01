#include <stdio.h>
#include <math.h>

int check_integer(float n) {
  int x1 = n;
  float x2 = n;

  if(x1 == x2) {
    return 1;
  } else {
    return 0;
  }

  return 0;
}

int main() {
  int n;

  printf("Nº: ");
  scanf("%d", &n);

  printf("A raiz de %d é %.2f.", n, sqrt(n));
  if(check_integer(sqrt(n))) {
    printf("\nA raiz é exata!");
  } else {
    printf("\nA raiz não é exata!");
  }

  return 0;
}