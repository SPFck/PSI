#include <stdio.h>

int main() {
  int x = 1, a = 0, b = 0, c = 0, d = 0, e = 0, flag;

  while(x != 0) {
    printf("Insira a idade: ");
    scanf("%d", &x);

    if(x >= 1 && x <= 15) {
      flag = 1;
    } else if(x >= 16 && x <= 30) {
      flag = 2;
    } else if(x >= 31 && x <= 45) {
      flag = 3;
    } else if(x >= 46 && x <= 60) {
      flag = 4;
    } else if(x >= 61) {
      flag = 5;
    } else if(x == 0) {
      flag = 0;
    }

    switch(flag) {
      case 1: a++;
              break;
      case 2: b++;
              break;
      case 3: c++;
              break;
      case 4: d++;
              break;
      case 5: e++;
              break;

      default: printf("Calculando resultado...\n");
    }
  }

  printf("(Faixas etárias)\nDe 1 a 15 anos -> %d\nDe 16 a 30 anos -> %d\nDe 31 a 45 anos -> %d\nDe 46 a 60 anos -> %d\nMais de 61 anos -> %d\n", a, b, c, d, e);

  return 0;
}