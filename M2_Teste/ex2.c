#include <stdio.h>

int main() {
    int tio, jel, sal;
    
    tio = 0;
    jel = 0;
    
    printf("Nº: ");
    scanf("%d", &sal);
    
    for(int grosso = 1; grosso <= sal; grosso++) {
        if(grosso % 2 == 0) {
            tio += 1;
        } else {
            jel += 1;
        }
    }
    
    printf("Pares: %d\n", tio);
    printf("Ímpares: %d", jel);
    
    return 0;
}