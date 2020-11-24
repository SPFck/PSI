#include <stdio.h>

int main() {
  float kms, comb;

  printf("Introduza o número em km(s) percorridos: ");
  scanf("%f", &kms);
  printf("Introduza o valor do combustível(100km): ");
  scanf("%f", &comb);

  printf("Preço gasto em %.2f km(s): %.2f", kms, (kms/100)*comb);

  return 0;
}