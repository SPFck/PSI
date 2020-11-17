#include <stdio.h>

int main() {
    int sal_grosso;
    
    printf("Introduza o salário: ");
    scanf("%d", &sal_grosso);
    
    if(sal_grosso > 999.99) {
        printf("Salário antigo: %d\nAumento: 5% (%.2f)\nNovo salário: %.2f", sal_grosso, (sal_grosso+sal_grosso*0.05)-sal_grosso, sal_grosso+sal_grosso*0.05);
    } else {
        printf("Salário antigo: %d\nAumento: 7% (%.2f)\nNovo salário: %.2f", sal_grosso, (sal_grosso+sal_grosso*0.07)-sal_grosso, sal_grosso+sal_grosso*0.07);
    }

    return 0;
}