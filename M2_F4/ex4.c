#include <stdio.h>

int main()
{
  char*nome;
  
  printf("Insira o nome: ");
  scanf("%s", nome);

  for(int i = 0; i < 10; i++)
  {
    printf("%s ", nome);
  }
}
