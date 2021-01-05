#include <stdio.h>

int main() {
    char cac;
    
    printf("Estado civil(c, s, v, d): ");
    scanf("%s", &cac);
    
    switch(cac) {
        case 'c': printf("Estado civil: Casado"); break;
        case 's': printf("Estado civil: Solteiro"); break;
        case 'v': printf("Estado civil: Viúvo"); break;
        case 'd': printf("Estado civil: Divorciado"); break;
        
        default: printf("Erro!");
    }
    
    return 0;
}