#include <stdio.h>

int main() {
    char x;
    
    printf("(c – casado; s – solteiro; d – divorciado; v - viúvo;)\nIntroduza o seu estado civil: ");
    scanf("%s", &x);
    
    if(x == 'c') {
        printf("O seu estado civil é 'Casado'.");
    } else if(x == 's') {
        printf("O seu estado civil é 'Solteiro'.");
    } else if(x == 'd') {
        printf("O seu estado civil é 'Divorciado'.");
    } else if(x == 'v') {
        printf("O seu estado civil é 'Viúvo'.");
    } else {
        printf("Estado civil inválido!");
    }

    return 0;
}