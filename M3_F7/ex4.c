#include <stdio.h>
#include <math.h>

int calc_per(ql) {
  return 4*ql;
}

int calc_area(ql) {
  return (ql*ql);
}

float calc_diag(ql) {
  return ql*sqrt(2);
}

int main() {
  int ql;

  printf("Insira o lado do quadrado: ");
  scanf("%d", &ql);

  printf("Perímetro: %d\nÁrea: %d\nDiagonal: %f", calc_per(ql), calc_area(ql), calc_diag(ql));

  return 0;
}