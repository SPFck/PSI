#include <stdio.h>

int maior3(int x, int y, int z) {
    if(x >= y && x >= z) {
        return x;
    } else if(y >= x && y >= z) {
        return y;
    } else if(z >= x && z >= y) {
        return z;
    }
    
    return 0;
}

int main() {
    int n1x, n2x, n3x;
    
    printf("Nº1: ");
    scanf("%d", &n1x);
    
    printf("Nº2: ");
    scanf("%d", &n2x);
    
    printf("Nº3: ");
    scanf("%d", &n3x);
    
    printf("Maior número: %d", maior3(n1x, n2x, n3x));
    
    return 0;
}