#include <stdio.h>

int mp_calc(int n1, int n2, int n3, int p1, int p2, int p3) {
  return ((n1 * p1) + (n2 * p2) + (n3 * p3))/3;
}

int main() {
  int n1, n2, n3, p1, p2, p3;

  printf("Nº1: ");
  scanf("%d", &n1);
  printf("Nº2: ");
  scanf("%d", &n2);
  printf("Nº3: ");
  scanf("%d", &n3);
  printf("Peso da Nº1: ");
  scanf("%d", &p1);
  printf("Peso da Nº2: ");
  scanf("%d", &p2);
  printf("Peso da Nº3: ");
  scanf("%d", &p3);

  printf("Média ponderada: %d", mp_calc(n1, n2, n3, p1, p2, p3));

  return 0;
}