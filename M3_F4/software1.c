#include <stdio.h>

int main() {
    int option;
    printf("\n--> Menu <--\n\n1 - A\n2 - B\n3 - C\n0 - Sair\n");
    printf("\nOpção: ");
    scanf("%d", &option);
    
    while(option > 0) {
        if(option == 1) {
            printf("Opção escolhida: A\n");
        } else if(option == 2) {
            printf("Opção escolhida: B\n");
        } else if(option == 3) {
            printf("Opção escolhida: C\n");
        } else {
            printf("Opção inválida!\n");
        }

        printf("\n--> Menu <--\n\n1 - A\n2 - B\n3 - C\n0 - Sair\n");
        printf("\nOpção: ");
        scanf("%d", &option);

    }
    
    printf("Fim do programa.");
    
    return 0;
}