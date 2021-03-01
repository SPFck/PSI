#include <stdio.h>

int calc_fib(n) {
  printf("A sequência de Fibonacci é: ");
  int x1 = 0;
  int x2 = 1;
  int temp;
  for(int i = 1; x1 != n; i++) {
    printf("\n%d", x1);
    temp = x1+x2;
    x1 = x2;
    x2 = temp;
  }
  printf("\n%d", n);
  return 0;
}

int main() {
  int n;

  printf("Nº: ");
  scanf("%d", &n);

  calc_fib(n);

  return 0;
}