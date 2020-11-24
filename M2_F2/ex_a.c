#include <stdio.h>

int main() {
  int i,res,kuk;
  printf("Introduza um número: ");
  scanf("%d", &res);

  kuk = 0;

  for(i = 0; i != res+1; i++) {
    kuk += i;
    printf("%d -> %d\n", i, kuk);
  }

  printf("\nResultado: %d", kuk);
  
  return 0;
}