#include <stdio.h>

void Valor_Soma(int n1, int n2) {
    int soma = 0;
        
    for(int conta = n2; conta != n1; conta++) {
        if(conta % 2 == 1) {
            soma = soma+conta;
        }
    }
	
	printf("A soma dos ímpares: %d", soma);
    
    return;
}

int main() {
    int n1x, n2x;
    
    printf("Introduza um 1º número: ");
    scanf("%d", &n1x);
    
    printf("Introduza um 2º número: ");
    scanf("%d", &n2x);
    
    if(n1x < n2x) {
        printf("O 2º número tem de ser maior");
    } else {
        Valor_Soma(n1x, n2x);
    }
    
    return 0;
}