#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "");
  
  for(int i = 100; i != -1; i--) {
    printf("%d ", i);
  }

  return 0;
}