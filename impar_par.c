#include <stdio.h>

int main() {
    int inum;
    
    printf("N�: ");
    scanf("%d", &inum);
    if(inum % 2 == 0) {
        printf("Par");
    } else {
        printf("Impar");
    }
    
     return 0;
}
