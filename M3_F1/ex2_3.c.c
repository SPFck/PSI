#include <stdio.h>

void escreverMensagem() {
    for(int i = 0; i < 3; i++) {
        printf("Olá tudo bem ! \n");
    }
}

int main() {
    escreverMensagem();
    
    system("PAUSE");
    
    return 0;
}