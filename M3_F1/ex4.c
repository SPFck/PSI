#include <stdio.h>

void escreverMensagem(int nVezes, char msg[]) {
    for(int i = 0; i < nVezes; i++) {
        printf("%s\n", msg);
    }
}

int main() {
    int nx;
    char mensagem[200];
    
    printf("Insira o número de vezes: ");
    scanf("%d", &nx);
    
    fflush(stdin);
    
    printf("Insira a mensagem: ");
    scanf("%s", &mensagem);
    
    escreverMensagem(nx, mensagem);
    
    system("PAUSE");
    
    return 0;
}