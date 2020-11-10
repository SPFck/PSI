#include <stdio.h>

int main() {
    char op; double n1,n2;
    printf("Nº: ");
    scanf("%lf %lf", &n1, &n2);
    printf("Operador (+,*,/,-): ");
    scanf("%c", &op);
    
    switch(op) {
        case '+': printf("%.1lf + %.1lf = %.1lf", n1, n2, n1+n2);
        break;
        case '-': printf("%.1lf + %.1lf = %.1lf", n1, n2, n1-n2);
        break;
        case '*': printf("%.1lf + %.1lf = %.1lf", n1, n2, n1*n2);
        break;
        case '/': printf("%.1lf + %.1lf = %.1lf", n1, n2, n1/n2);
        break;
        
        default: printf("Erro!");
    }
    
    return 0;
}
