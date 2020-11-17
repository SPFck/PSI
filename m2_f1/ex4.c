#include <stdio.h>

int main() {
    char x;
    
    printf("(c – casado; s – solteiro; d – divorciado; v - viúvo;)\nIntroduza o seu estado civil: ");
    scanf("%s", &x);
    
    switch(x) {
        case 'c':
        printf("O seu estado civil é 'Casado'.");
        break;
        
        case 's':
        printf("O seu estado civil é 'Solteiro'.");
        break;
        
        case 'd':
        printf("O seu estado civil é 'Divorciado'.");
        break;
        
        case 'v':
        printf("O seu estado civil é 'Viúvo'.");
        break;
        
        default: printf("Estado civil inválido!");
    }

    return 0;
}