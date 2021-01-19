#include <stdio.h>

int main() {
    int tio, jel;
    
    printf("Horas do começo do torneio: ");
    scanf("%d", &tio);
    printf("Horas do fim do torneio: ");
    scanf("%d", &jel);
    
    if(tio > jel) {
        printf("Duração: %dh", (tio - jel) + 24);
    } else {
        printf("Duração: %dh", (jel - tio));
    }
    
    return 0;
}