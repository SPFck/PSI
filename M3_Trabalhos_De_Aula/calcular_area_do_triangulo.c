#include <stdio.h>

float calcular_area_triangulo(float base, float altura) {
    return base*altura/2;
}

int main() {
    int vb, va;
    
    printf("Introduza o valor da base: ");
    scanf("%d", &vb);
    
    printf("Introduza o valor da altura: ");
    scanf("%d", &va);
    
    printf("Área do triângulo: %.2f", calcular_area_triangulo(vb, va));
    
    return 0;
}