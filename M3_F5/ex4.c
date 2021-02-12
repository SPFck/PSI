#include <stdio.h>

int mp(n1, n2, n3, x1, x2, x3) {
    return ((n1*x1)+(n2*x2)+(n3*x3))/(x1+x2+x3);
}

int main() {
    int n1, n2, n3, x1, x2, x3;
    
    printf("Nº1: ");
    scanf("%d", &n1);
    printf("Peso da nota 1: ");
    scanf("%d", &x1);
    
    printf("Nº2: ");
    scanf("%d", &n2);
    printf("Peso da nota 2: ");
    scanf("%d", &x2);
    
    printf("Nº3: ");
    scanf("%d", &n3);
    printf("Peso da nota 3: ");
    scanf("%d", &x3);
    
    printf("Média ponderada: %d", mp(n1, n2, n3, x1, x2, x3));
    
    return 0;
}