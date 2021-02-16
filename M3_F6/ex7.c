#include <stdio.h>
#include <stdlib.h>

int mult_adc(a, b) {
    return a*b;
}

int main() {
    int a, b;
    
    printf("Nº1: ");
    scanf("%d", &a);
    printf("Nº2: ");
    scanf("%d", &b);
    
    if(a < 0 || b < 0) {
        exit(1);
    } else {
        printf("Resultado: %d", mult_adc(a, b));
    }
    
    return 0;
}