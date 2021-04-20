#include <stdio.h>

int main() {
  int n1, n2; int sss = 0;

  printf("Nº1: ");
  scanf("%d", &n1);
  printf("Nº2: ");
  scanf("%d", &n2);

  for(int i = n1; i != n2; i++) {
    if(n1 % 2 == 0) {
      sss = sss + n1;
    }
  }

  printf("Resultado: %d", sss);

  return 0;
}