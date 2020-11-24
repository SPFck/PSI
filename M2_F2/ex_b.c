#include <stdio.h>

int main() {
  int i,res,les,lulz;
  printf("Introduza o número inicial: ");
  scanf("%d", &res);

  printf("Introduza o número final: ");
  scanf("%d", &les);

  for(i = res; i != les+1; i++) {
    lulz += i;
  }

  printf("Resultado: %d", lulz);
  
  return 0;
}