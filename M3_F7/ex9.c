#include <stdio.h>

int dec2bin(n) {
  int a[10], i;

  for(i = 0; n > 0; i++) {
    a[i] = n % 2;
    n = n/2;
  }

  printf("Número Binário: ");

  for(i -= 1; i >= 0; i--) {
    printf("%d", a[i]);
  }

  return 0;
}

int main() {
  int n;

  printf("Nº: ");
  scanf("%d", &n);

  dec2bin(n);

  return 0;
}