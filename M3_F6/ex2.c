#include <stdio.h>

float calc_ta(a, b) {
    return (b*a)/2;
}

int calc_ra(a, b) {
    return b*a;
}

int main() {
    int a, b;
    
    printf("Altura do triângulo: ");
    scanf("%d", &a);
    printf("Base do triângulo: ");
    scanf("%d", &b);
    
    printf("Área do triângulo: %.2f", calc_ta(a, b));
    
    return 0;
}