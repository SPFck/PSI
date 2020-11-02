Source Code [C]

#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
  float a_c, raio, per;
  printf("Introdza o raio: ");
  scanf("%f", &raio);
  a_c = PI*(raio*raio);
  printf("Área de uma circunferência: %f\n", a_c);
  per = 2*PI*raio;
  printf("Perímetro: %f\n", per);
}
