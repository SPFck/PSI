#include <stdio.h>

int main()
{
  float nota;
  
    printf("\na nota ");
    scanf("%f", &nota);
  if(nota < 5)
  {
      printf("mau");
    }
  else if(nota <= 5 && nota < 9.5)
  {
      printf("medíocre");
    }
  else if(nota <= 9.5 && nota < 13.5)
  {
      printf("suficiente");
    }
  else if(nota <= 13.5 && nota < 17.5)
  {
      printf("bom");
    }
  else if(nota >= 17.5)
  {
      printf("muito bom");
    }
}
