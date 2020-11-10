#include <stdio.h>

int main() {
    int inum;
    
    printf("Nº: ");
    scanf("%d", &inum);
    if(inum % 2 == 0) {
        printf("Par");
    } else {
        printf("Impar");
    }
    
     return 0;
}
