#include <stdio.h>
#define M_PI 3.14159265358979323846

float calc_per(r) {
  return 2*M_PI*r;
}

float calc_area(r) {
  return M_PI*(r*r);
}

int main() {
  int r;

  printf("Insira o raio do círculo: ");
  scanf("%d", &r);

  printf("Perímetro: %f\nÁrea: %f", calc_per(r), calc_area(r));

  return 0;
}