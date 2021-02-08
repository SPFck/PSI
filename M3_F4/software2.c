#include <stdio.h>

int menu() {
    int option;
    printf("\n--> Menu <--\n\n1 - A\n2 - B\n3 - C\n0 - Sair\n");
    printf("\nOpção: ");
    scanf("%d", &option);
    
    return option;
}

int main() {
    int option;
    
    option = menu();
    
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
        
        option = menu();
    }
    
    printf("Fim do programa.");
    
    return 0;
}