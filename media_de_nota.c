#include <stdio.h>

int dawae(char *nota) {
  printf("Nota Final: %s", nota);

  return 0;
}

int main() {
  float n1,n2,n3,n4,mp;
  char *yes;

  printf("Nota Nº1: ");
  scanf("%f", &n1);
  printf("Nota Nº2: ");
  scanf("%f", &n2);
  printf("Nota Nº3: ");
  scanf("%f", &n3);
  printf("Nota Nº4: ");
  scanf("%f", &n4);

  if(n1 > 20 || n1 < 0 || n2 > 20 || n2 < 0 || n3 > 20 || n3 < 0 || n4 > 20 || n4 < 0) {
    printf("Notas 0/20!");
    return 0;
  }

  mp = ((n1*3)+(n2*4)+(n3*2)+(n4*2))/11;

  printf("Média ponderada: %.1f\n", mp);

  if(mp >= 0 && mp <= 9) {
    yes = "Insuficiente";
  } else if(mp >= 9 && mp < 13) {
    yes = "Satisfatório";
  } else if(mp >= 13 && mp <= 17) {
    yes = "Bom";
  } else if(mp >= 17 && mp <= 20) {
    yes = "Muito Bom";
  }
  
  dawae(yes);

  return 0;
}
