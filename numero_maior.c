#include <stdio.h>

int main() {
    int a,b,y;
    
    printf("Nº1: ");
    scanf("%d", &a);
    printf("Nº2: ");
    scanf("%d", &b);
    printf("Nº3: ");
    scanf("%d", &y);
    
    if(a > b && a > y) {
        printf("O número maior é: %d", a);
    } else if(b > a && b > y) {
        printf("O número maior é: %d", b);
    } else if(y > a && y > b) {
        printf("O número maior é: %d", y);
    } else {
        printf("Erro!");
    }
    
    return 0;
}
