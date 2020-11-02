#include <stdio.h>

int main() {
  float t,h,m,s;
  printf("Insira o tempo em segundos: ");
  scanf("%f", &t);
  h = t/3600;
  m = h*60;
  s = m*60;
  printf("Horas: %.2f\nMinutos: %.2f\nSegundos: %.2f\n", h, m, s);

  return 0;
}
