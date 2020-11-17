#include <stdio.h>

int main() {
    int sal_grosso;
    char estado_civil;
    
    printf("Introduza o salário: ");
    scanf("%d", &sal_grosso);
    printf("[(s) = 'Solteiro']\n[(c) = 'Casado']\nIntroduza o seu Estado Civil(c/s): ");
    scanf("%s", &estado_civil);
    if(estado_civil == 's') {
        printf("Imposto(s): %.2f", sal_grosso*0.09);
    } else if(estado_civil == 'c') {
        printf("Imposto(s): %.2f", sal_grosso*0.10);
    } else {
        printf("Estado civil incorreto, deverá introduzir c ou s!");
    }
    
    return 0;
}