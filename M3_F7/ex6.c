#include <stdio.h>

float calc_media(n1, n2, n3) {
  return (n1+n2+n3)/3;
}

int main() {
  int n1, n2 ,n3;

  printf("Insira a 1º nota: ");
  scanf("%d", &n1);
  printf("Insira a 2º nota: ");
  scanf("%d", &n2);
  printf("Insira a 3º nota: ");
  scanf("%d", &n3);

  printf("Média do aluno: %.2f", calc_media(n1, n2, n3));

  return 0;
}