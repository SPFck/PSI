#include <stdio.h>

int main() {
    int i,par;
    
    par = 2;
    
    for(i = 1; i <= 10; ++i) {
        printf("%d\n", par);
        par += 2;
    }
    
    return 0;
}
