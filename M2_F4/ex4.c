#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "");
  char *x;
  
  printf("Insira o seu username: ");
  scanf("%s", x);

  for(int i = 0; i != 10; i++) {
    printf("%s\n", x);
  }

  return 0;
}