#include <stdio.h>

int rlk(int x) {
    if(x > 0) {
        return 1;
    } else if(x < 0) {
        return -1;
    } else if(x == 0) {
        return 0;
    }
    
    return 0;
}

int main() {
    int n1;
    
    printf("Nº1: ");
    scanf("%d", &n1);
    
    printf("\n[1 = positivo,  0 = nulo, -1 = negativo]\nRetorno: %d", rlk(n1));
    
    return 0;
}