#include <stdio.h>

int check_cv(c) {
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
        printf("É uma vogal!");
    } else {
        printf("É uma consoante!");
    }
    
    return 0;
}

int main() {
    char c;
    
    printf("Introduza uma letra: ");
    scanf("%s", &c);
    
    check_cv(c);
    
    return 0;
}