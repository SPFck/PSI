#include <stdio.h>

int maior(int n1, int n2) {
  if(n1 > n2) {
    return n1;
  } else {
    return n2;
  }
}

int main() {
  int n1, n2;

  printf("Nº1: ");
  scanf("%d", &n1);
  printf("Nº2: ");
  scanf("%d", &n2);

  if(n1 > 0 && n2 > 0 && n1 != n2) {
    printf("O número maior é: %d", maior(n1, n2));
  } else {
    printf("Erro! Os números são iguais ou maiores que 0.");
  }
  
  return 0;
}