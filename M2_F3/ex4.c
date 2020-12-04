#include <stdio.h>

int main() {
  int x = 1;
  int flag;

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
      case 1: printf("Faixa etária: De 1 a 15 anos.\n");
              break;
      case 2: printf("Faixa etária: De 16 a 30 anos.\n");
              break;
      case 3: printf("Faixa etária: De 31 a 45 anos.\n");
              break;
      case 4: printf("Faixa etária: De 46 a 60 anos.\n");
              break;
      case 5: printf("Faixa etária: Mais de 61 anos.\n");
              break;

      default: printf("Encerrando...\n");
    }
  }

  return 0;
}