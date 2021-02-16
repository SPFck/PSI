#include <stdio.h>

int cpn(n) {
    int res = 0;
    
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            res += 1;
        }
    }
    
    return res;
}

int main() {
    int n;
    
    printf("Nº: ");
    scanf("%d", &n);
    
    if(cpn(n) == 0) {
        printf("É um número primo!");
    } else {
        printf("Não é um número primo!");
    }
    
    return 0;
}