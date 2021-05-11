#include <stdio.h>

int main() {
  int x[10]; int y[10]; int k = 0;

  for(int i = 0; i != 10; i++) {
    printf("Nº: ");
    scanf("%d", &x[i]);
    if(x[i] > k) {
      k = x[i];
    }
  }

  printf("Maior: %d\n", k);

  for(int i = 0; i != 10; i++) {
    y[i] = x[i] * k;
  }

  for(int i = 0; i != 10; i++) {
    printf("%d <- %d\n", y[i], x[i]);
  }

  return 0;
}
