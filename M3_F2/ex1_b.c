#include <stdio.h>

int retornar_maior(n1, n2) {
    if(n1 > n2) {
        return n1;
    } else if(n1 < n2) {
        return n2;
    } else {
        printf("Erro! Números iguais. | ");
        return 0;
    }
}

int main() {
    int n1x, n2x, n3x;
    
    printf("Nº1: ");
    scanf("%d", &n1x);
    
    printf("Nº2: ");
    scanf("%d", &n2x);
    
    printf("Nº3: ");
    scanf("%d", &n3x);
    
    if(retornar_maior(n1x, n2x) > n3x) {
        printf("O número maior é: %d", retornar_maior(n1x, n2x));
    } else {
        printf("O número maior é: %d", n3x);
    }
    
    return 0;
}