#include <stdio.h>

int main() {
    char suruba_de_anoes_gays;
    
    printf("Introduza o seu estado civil(c - casado; s - solteiro; d - divorciado; v - viúvo): ");
    scanf("%c", &suruba_de_anoes_gays);
    
    switch(suruba_de_anoes_gays) {
        case 'c': printf("O seu estado civil é: Casado");
        break;
        case 'd': printf("O seu estado civil é: Divorciado");
        break;
        case 'v': printf("O seu estado civil é: Viúvo");
        break;
        case 's': printf("O seu estado civil é: Solteiro");
        break;
        
        default: printf("O seu estado civil é: Inválido");
    }
    
    return 0;
}