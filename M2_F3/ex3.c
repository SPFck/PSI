#include <stdio.h>

int main() {
  int x = 1;

  while(x != 0) {
    printf("Insira a idade: ");
    scanf("%d", &x);

    if(x >= 1 && x <= 15) {
      printf("Faixa etária: De 1 a 15 anos.\n");
    } else if(x >= 16 && x <= 30) {
      printf("Faixa etária: De 16 a 30 anos.\n");
    } else if(x >= 31 && x <= 45) {
      printf("Faixa etária: De 31 a 45 anos.\n");
    } else if(x >= 46 && x <= 60) {
      printf("Faixa etária: De 46 a 60 anos.\n");
    } else if(x >= 61) {
      printf("Faixa etária: Mais de 61 anos.\n");
    }
  }

  return 0;
}