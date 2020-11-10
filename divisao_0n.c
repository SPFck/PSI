#include <stdio.h>

int main() {
	float y,a,b;
	
	printf("Valor de a: ");
	scanf("%f", &a);
	printf("O valor de b: ");
	scanf("%f", &b);
	
	if(b != 0) {
	    y = a/b;
	    printf("Valor de y: %f", y);
	} else {
	    printf("Calculo Indeterminado!");
	}
	return 0;
}
