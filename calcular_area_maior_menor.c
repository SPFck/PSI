#include <stdio.h>

int main() {
    int a,b; float y;
    
    printf("Altura: ");
    scanf("%d", &a);
    printf("Base: ");
    scanf("%d", &b);
    
    y = a*b/2;
    
    if(y > 10) {
        printf("Área Maior!");
    } else {
        printf("Área Menor!");
    }
    
    return 0;
}
