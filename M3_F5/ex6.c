#include <stdio.h>

int factorial(int x) {
    int temp = 1;
    
    for(int i = 1; i <= x; i++) {
        temp *= i;
    }
    
    printf("Factorial: %d", temp);
    
    return 0;
}

int main() {
    int n1;
    
    printf("Nº1: ");
    scanf("%d", &n1);
    
    factorial(n1);
    
    return 0;
}