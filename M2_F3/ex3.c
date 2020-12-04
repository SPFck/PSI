#include <stdio.h>

int main() {
  int x = 1, a = 0, b = 0, c = 0, d = 0, e = 0, quant = 0;

  while(x != 0) {
    printf("Insira a idade: ");
    scanf("%d", &x);

    if(x >= 1 && x <= 15) {
      a += 1;
    } else if(x >= 16 && x <= 30) {
      b += 1;
    } else if(x >= 31 && x <= 45) {
      c += 1;
    } else if(x >= 46 && x <= 60) {
      d += 1;
    } else if(x >= 61) {
      e += 1;
    }

    if(x != 0) {
      quant += 1;
    }
  }

  printf("(Faixas etárias)\nTotal de pessoas: %d\nDe 1 a 15 anos -> %d\nDe 16 a 30 anos -> %d\nDe 31 a 45 anos -> %d\nDe 46 a 60 anos -> %d\nMais de 61 anos -> %d\n", quant, a, b, c, d, e);

  return 0;
}