#include <stdio.h>

int main() {
    int a,b; float y; char op;
    
    printf("N�1: ");
    scanf("%d", &a);
    printf("N�2: ");
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
