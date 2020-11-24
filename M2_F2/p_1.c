#include <stdio.h>

int main() {
  float sal_grosso;

  printf("Introduza o seu salário: ");
  scanf("%f", &sal_grosso);

  printf("Salário bruto: %.2f\nValor do IRS: %.2f\nValor da Segurança Social: %.2f\nSalário líquido: %.2f", sal_grosso, sal_grosso*0.15, sal_grosso*0.12, sal_grosso-((sal_grosso*0.12)+(sal_grosso*0.15)));
  
  return 0;
}