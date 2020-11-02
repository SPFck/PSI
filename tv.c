#include <stdio.h>

int main() {
  int x,y,temp;
  printf("Nº1: ");
  scanf("%d", &x);
  printf("Nº2: ");
  scanf("%d", &y);
  printf("Valor de x: %d\nValor de y: %d\nTrocando...\n", x, y);
  temp = x;
  x = y;
  y = temp;
  printf("Sucesso!\nValor de x: %d\nValor de y: %d\n", x, y);
}
