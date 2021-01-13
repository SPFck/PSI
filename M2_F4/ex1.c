#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "");
  float ft, st, m;

  printf("Insira a nota do 1º teste: ");
  scanf("%f", &ft);
  printf("Insira a nota do 2º teste: ");
  scanf("%f", &st);
  m = (ft+st)/2;
  printf("Média: %.2f\n", m);
  if(m >= 10) {
    printf("Você passou!");
  } else {
    printf("Você reprovou!");
  }

  return 0;
}