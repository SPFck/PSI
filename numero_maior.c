#include <stdio.h>

int main() {
    int a,b,y;
    
    printf("N�1: ");
    scanf("%d", &a);
    printf("N�2: ");
    scanf("%d", &b);
    printf("N�3: ");
    scanf("%d", &y);
    
    if(a > b && a > y) {
        printf("O n�mero maior �: %d", a);
    } else if(b > a && b > y) {
        printf("O n�mero maior �: %d", b);
    } else if(y > a && y > b) {
        printf("O n�mero maior �: %d", y);
    } else {
        printf("Erro!");
    }
    
    return 0;
}
