#include <stdio.h>

int div_times(d, dv) {
  int aka = 1;
  int quant = 1;
  int curr_n = d/dv;
  float curr_n_c = d/dv;
  while(aka) {
    curr_n = curr_n/dv;
    curr_n_c = curr_n_c/dv;
    if(curr_n_c == curr_n && curr_n > 0) {
      quant += 1;
    } else {
      aka = 0;
    }
  }
  return quant;
}

int main() {
  int d, dv;

  printf("Insira o dividendo: ");
  scanf("%d", &dv);
  printf("Insira o divisor: ");
  scanf("%d", &d);

  if(dv > d) {
    printf("O divisor é maior que o dividendo!");
  } else {
    printf("Número de vezes que é divisível: %d", div_times(d, dv));
  }

  return 0;
}