#include <stdio.h>

int main() {
    int n1x, n2x, soma, conta;
    
    printf("Introduza um 1º número: ");
    scanf("%d", &n1x);
    
    printf("Introduza um 2º número: ");
    scanf("%d", &n2x);
    
    if(n1x < n2x) {
        printf("O 2º número tem de ser maior");
    } else {
        soma = 0;
        
        for(conta = n2x; conta != n1x; conta++) {
            if(conta % 2 == 1) {
                soma = soma+conta;
            }
        }
        
        printf("A soma dos ímpares: %d", soma);
    }
    
    return 0;
}