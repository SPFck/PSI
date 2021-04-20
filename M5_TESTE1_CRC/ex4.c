#include <stdio.h>

int fn(n) {
  if(n == 0) {
    return 1;
  } else {
    return fn(n - 1) * n;
  }

  return 0;
}

int main() {
  int n;

  printf("Nº: ");
  scanf("%d", &n);

  printf("O fatorial de %d é %d.", n, fn(n));

  return 0;
}