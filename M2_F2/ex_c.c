#include <stdio.h>

int main() {
  int i, par;
  
  par = 0;

  for(i = 0; i != 101; i++) {
    printf("%d\n", i);
    if(i % 2 == 0) {
      par += 1;
    }
    printf("%d\n", par);
  }

  printf("Quantia de números pares: %d", par);
  
  return 0;
}