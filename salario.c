#include <stdio.h>

int main() {
  int s1,s2;
  float res;
  printf("Salário Nº1: ");
  scanf("%d", &s1);
  printf("Salário Nº2: ");
  scanf("%d", &s2);
  res = (s1+s2)/2;
  printf("Valor total dos salários: %d\nMédia dos salários: %.2f\n", s1+s2, res);
  if(s1 > s2) {
    printf("Salário Maior: %d\nSalário Menor: %d", s1, s2);
  } else {
    printf("Salário Maior: %d\nSalário Menor: %d", s2, s1);
  }
  return 0;
}
