#include <stdio.h>

int main() {
  int age;

  printf("Anos de escola: ");
  scanf("%d", &age);

  if(age < 0 || age == 0) {
    printf("Ainda tens muito que comer!!");
  } else if(age > 0 && age < 5) {
    printf("Você é da primária!");
  } else if(age > 4 && age < 7) {
    printf("Você é do 2ºCiclo!");
  } else if(age > 6 && age < 10) {
    printf("Você é do 3ºCiclo!");
  } else if(age > 9 && age < 13) {
    printf("Você é do Secundário!");
  } else if(age > 30) {
    printf("Vai masé trabalhar!!!!");
  } else if(age > 12) {
    printf("Você é do Superior!");
  } else {
    printf("\nErro! Idade: %d", age);
  }
}
