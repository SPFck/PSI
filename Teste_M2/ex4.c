#include <stdio.h>

int main() {
    int x;
    
    printf("Nº: ");
    scanf("%d", &x);
    
    for(int i = 0; i <= 10; i++) {
        printf("\n%d X %d = %d", x, i, x*i);
    }
    
    return 0;
}