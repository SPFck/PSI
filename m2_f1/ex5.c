#include <stdio.h>

int main() {
    float sal_grosso;
    char estado_civil;
    
    printf("Introduza o salário: ");
    scanf("%f", &sal_grosso);
    printf("[(s) = 'Solteiro']\n[(c) = 'Casado']\nIntroduza o seu Estado Civil(c/s): ");
    scanf("%s", &estado_civil);
    
    switch(estado_civil) {
        case 's':
        printf("Salário: %.2f\nImpostos: 10% (%.2f)\nSalário final: %.2f", sal_grosso, sal_grosso*0.10, sal_grosso-(sal_grosso*0.10));
        break;
        
        case 'c':
        printf("Salário: %.2f\nImpostos: 5% (%.2f)\nSalário final: %.2f", sal_grosso, sal_grosso*0.05, sal_grosso-(sal_grosso*0.05));
        break;
        
        default: printf("Estado civil inválido!");
    }
    
    return 0;
}