#include <stdio.h>

long long fact(n) {
    long long res = 1;
    
    for(int i = 1; i <= n; i++) {
        res *= i;
    }
    
    return res;
}

int main() {
    int n;
    
    printf("Nº: ");
    scanf("%d", &n);
    
    printf("Factorial de %d: %lld", n, fact(n));
    
    return 0;
}