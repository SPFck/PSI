#include <stdio.h>

int main() {
    int a,b; float y; char op;
    
    printf("Nº1: ");
    scanf("%d", &a);
    printf("Nº2: ");
    scanf("%d", &b);
    printf("Operador (+,-,*,/): ");
    scanf("%s", &op);
    
    switch(op) {
        case '+': y = a+b;
                  break;
        case '-': y = a-b;
                      break;
        case '*': y = a*b;
                      break;
        case '/': y = a/b;
                      break;
        default: printf("Erro!");
    }
    printf("%.2f", y);
}
