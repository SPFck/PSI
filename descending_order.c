#include <stdio.h>

int main() {
  int n1,n2,n3,n4,n5,x,i,temp;
  printf("Nº1: ");
  scanf("%d", &n1);
  printf("Nº2: ");
  scanf("%d", &n2);
  printf("Nº3: ");
  scanf("%d", &n3);
  printf("Nº4: ");
  scanf("%d", &n4);
  printf("Nº5: ");
  scanf("%d", &n5);
  int num[] = {n1,n2,n3,n4,n5};
  for(i = 0; i < 5; i += 1) {
    for(x = i + 1; x < 5; x += 1) {
      if(num[i] < num[x]) {
        temp = num[i];
        num[i] = num[x];
        num[x] = temp;
      }
    }
  }
  for (i = 0; i < 5; i += 1) {
    printf("%d | ", num[i]);
  }
}
