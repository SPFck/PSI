#include <stdio.h>

int main() {
  int idade_pedofilo, idade_apedofilada, tudo, quant, x;
  
  idade_pedofilo = 0; tudo = 0; quant = 0;

  printf("Insira o número 0 para sair.\n\n");

  while(x != 0) {
    printf("Insira a idade: ");
    scanf("%d", &x);

    if(x != 0) {
      if(x > idade_pedofilo) {
        idade_pedofilo = x;
      } else if(x < idade_apedofilada) {
        idade_apedofilada = x;
      }

      tudo += x;
      quant += 1;
    }
  }

  printf("\n\nQuantia de idades inseridas: %d\nMédia: %d\nIdade da pessoa mais velha: %d\nIdade da pessoa mais nova: %d\n", quant, tudo/quant, idade_pedofilo, idade_apedofilada);

  return 0;
}