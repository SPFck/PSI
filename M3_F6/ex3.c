#include <stdio.h>

int d3n(n1, n2, n3) {
    printf("Nº1(Dobro): %d\n", n1*2);
    printf("Nº2(Dobro): %d\n", n2*2);
    printf("Nº3(Dobro): %d\n", n3*2);
    
    return 0;
}

int main() {
    int n1, n2, n3;
    
    printf("Nº1: ");
    scanf("%d", &n1);
    printf("Nº2: ");
    scanf("%d", &n2);
    printf("Nº3: ");
    scanf("%d", &n3);
    
    d3n(n1, n2, n3);
    
    return 0;
}