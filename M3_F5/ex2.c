#include <stdio.h>

int sum(n1, n2) {

    int x = 0;

    for(int i = n1; n1 <= n2; n1++) {
        x += i;
    }

    return x;
}

int main() {
    int n1, n2;
    
    printf("Nº1: ");
    scanf("%d", &n1);
    printf("Nº2: ");
    scanf("%d", &n2);
    
    printf("Soma dos números existentes entre os dois: %d", sum(n1, n2));
    
    return 0;
}