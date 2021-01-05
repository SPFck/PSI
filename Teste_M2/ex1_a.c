#include <stdio.h>

int main() {
    int x, y, z;
    
    z = 0;
    
    printf("Número final: ");
    scanf("%d", &y);
    
    for(int i = 0; i <= y; i++) {
        printf("%d ", i);
        z += i;
    }
    
    printf("\nResultado: %d", z);
    
    return 0;
}