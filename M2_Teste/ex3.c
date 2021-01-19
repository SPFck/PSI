#include <stdio.h>

int main() {
    int pornhub, brazzers = 1;
    
    printf("Nº: ");
    scanf("%d", &pornhub);
    
    for(int xvideos = pornhub; xvideos != 0; xvideos--) {
        brazzers *= xvideos;
    }
    
    printf("Fatorial de %d: %d", pornhub, brazzers);
    
    return 0;
}