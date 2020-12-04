#include <stdio.h>

int main() {
  int x = 1, a = 0, b = 0, c = 0, d = 0, e = 0, quant = 0;

  while(x != 0) {
    printf("Insira a idade: ");
    scanf("%d", &x);

    if(x != 0) {
      switch(x) {
        case 1 ... 15: a++;
                      break;
        case 16 ... 30: b++;
                      break;
        case 31 ... 45: c++;
                      break;
        case 46 ... 60: d++;
                      break;

        default: e++;
      }
      quant += 1;
    }
  }

  printf("(Faixas etárias)\nTotal de pessoas: %d\nDe 1 a 15 anos -> %d\nDe 16 a 30 anos -> %d\nDe 31 a 45 anos -> %d\nDe 46 a 60 anos -> %d\nMais de 61 anos -> %d\n", quant, a, b, c, d, e);

  return 0;
}