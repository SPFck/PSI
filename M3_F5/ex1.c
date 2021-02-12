#include <stdio.h>

int npow(base, expoente) {
    
    int res = 1;
    
    while(expoente != 0) {
        res *= base;
        expoente -= 1;
    }
    
    return res;
}

int main() {
    int bs, ex;
    
    printf("Base: ");
    scanf("%d", &bs);
    printf("Expoente: ");
    scanf("%d", &ex);
    
    printf("Potência: %d", npow(bs, ex));
    
    return 0;
}