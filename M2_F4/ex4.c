#include <stdio.h>

int main() {
  char *x;
  
  printf("Insira o seu username: ");
  scanf("%s", x);

  for(int i = 0; i != 10; i++) {
    printf("%s\n", x);
  }

  return 0;
}