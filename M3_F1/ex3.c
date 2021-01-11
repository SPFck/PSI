#include <stdio.h>

void escreverMensagem(int nVezes) {
    for(int i = 0; i < nVezes; i++) {
        printf("Olá tudo bem ! \n");
    }
}

int main() {
    int nx;
    
    printf("Insira o número de vezes: ");
    scanf("%d", &nx);
    
    escreverMensagem(nx);
    
    system("PAUSE");
    
    return 0;
}