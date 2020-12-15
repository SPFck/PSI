#include <stdio.h>

int main() {
  float x = 1;

  printf("Insira uma nota negativa para sair.\n\n");

  while(x) {
    printf("\nInsira a nota do aluno: ");
    scanf("%f", &x);
    if(x < 0) {
      return 0;
    } else if(x < 5) {
      printf("Mau!");
    } else if(x <= 5 && x < 9.5) {
      printf("Medíocre!");
    } else if(x <= 9.5 && x < 13.5) {
      printf("Suficiente!");
    } else if(x <= 13.5 && x < 17.5) {
      printf("Bom!");
    } else if(x >= 17.5) {
      printf("Muito bom!");
    }
  }

  return 0;
}