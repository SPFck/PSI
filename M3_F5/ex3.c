#include <stdio.h>

int hlnf(int a, int b, int c, int d, int e) {
    int h = a; int l = a;
    
    if(b < l) {
        l = b;
    } else if(b > h) {
        h = b;
    }
    
    if(c < l) {
        l = c;
    } else if(c > l) {
        h = c;
    }
    
    if(d < l) {
        l = d;
    } else if(d > l) {
        h = d;
    }
    
    if(e < l) {
        l = e;
    } else if(e > l) {
        h = e;
    }
    
    printf("Maior número: %d\nMenor número: %d", h, l);
    
    return 0;
}

int main() {
    int n1, n2, n3, n4, n5;
    
    printf("Nº1: ");
    scanf("%d", &n1);
    printf("Nº2: ");
    scanf("%d", &n2);
    printf("Nº3: ");
    scanf("%d", &n3);
    printf("Nº4: ");
    scanf("%d", &n4);
    printf("Nº5: ");
    scanf("%d", &n5);
    
    hlnf(n1, n2, n3, n4, n5);
    
    return 0;
}