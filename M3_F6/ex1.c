#include <stdio.h>

int calc_ra(a, b) {
    return b*a;
}

int main() {
    int a, b;
    
    printf("Altura do retângulo: ");
    scanf("%d", &a);
    printf("Base do retângulo: ");
    scanf("%d", &b);
    
    printf("Área do retângulo: %d", calc_ra(a, b));
    
    return 0;
}