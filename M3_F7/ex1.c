#include <stdio.h>
#define M_PI 3.14159265358979323846

float calc_rad(ang) {
  return (ang*M_PI)/180;
}

int main() {
  int ang;
  printf("Insira o valor do ângulo(Graus): ");
  scanf("%d", &ang);
  printf("Radianos: %f", calc_rad(ang));
}