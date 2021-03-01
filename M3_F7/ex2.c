#include <stdio.h>
#include <math.h>

int calc_per(b, alt) {
  return 2*(b+alt);
}

int calc_area(b, alt) {
  return b*alt;
}

float calc_diag(b, alt) {
  return sqrt((b * b) + (alt * alt));
}

int main() {
  int b, alt;

  printf("Insira a altura do retângulo: ");
  scanf("%d", &alt);
  printf("Insira a base do retângulo: ");
  scanf("%d", &b);

  printf("Perímetro: %d\nÁrea: %d\nDiagonal: %f", calc_per(b, alt), calc_area(b, alt), calc_diag(b, alt));

  return 0;
}