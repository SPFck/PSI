#include <stdio.h>
#define PI 3.14159265359

float calcular_area_circulo(int raio) {
    float area;
    area = PI + raio + raio;
    return area;
}

int main() {
    int ai;
    
    printf("Introduza o valor do raio: ");
    scanf("%d", &ai);
    
    printf("Área do circulo: %.2f", calcular_area_circulo(ai));
    
    return 0;
}