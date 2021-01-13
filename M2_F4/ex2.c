#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "");
  float x = 1; int a = 0;

  printf("Insira uma nota negativa para sair.\n\n");

  while(x) {
    a += 1;
    printf("\nInsira a nota do aluno: ");
    scanf("%f", &x);
    if(x < 0) {
      return 0;
    } else if(x < 5) {
      printf("Aluno(%d): Mau!", a);
    } else if(x >= 5 && x < 9.5) {
      printf("Aluno(%d): Medíocre!", a);
    } else if(x >= 9.5 && x < 13.5) {
      printf("Aluno(%d): Suficiente!", a);
    } else if(x >= 13.5 && x < 17.5) {
      printf("Aluno(%d): Bom!", a);
    } else if(x >= 17.5) {
      printf("Aluno(%d): Muito bom!", a);
    }
  }

  return 0;
}