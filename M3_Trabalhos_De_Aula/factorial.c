#include <stdio.h>

void factorial(int x) {
    int i, n = 1;
    
    for(i = 1; i <= x; i++) {
        n = n*i;
    }
    
    printf("Factorial de %d � %d", x, n);
    
    return;
}

int main() {
    int nb;
    
    printf("Introduza o n�mero: ");
    scanf("%d", &nb);
    
    factorial(nb);
    
    return 0;
}