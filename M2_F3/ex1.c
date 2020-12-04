#include <stdio.h>

int main() {
  int x;
  printf("Insira o número: ");
  scanf("%d", &x);
  
  for(int i = 0; i != 11; i++) {
    printf("%dx%d = %d\n", x, i, x*i);
  }

  return 0;
}