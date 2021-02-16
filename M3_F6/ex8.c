#include <stdio.h>

int calc_somnt(n) {
    int res = 1;
    
    for(int i = 1; i <= n; i++) {
        res += i;
    }
    
    return res;
}

int main() {
    int n;
    
    printf("Nº: ");
    scanf("%d", &n);
    
    printf("Somatório de %d: %d", n, calc_somnt(n));
    
    return 0;
}