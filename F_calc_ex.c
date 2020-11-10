#include <stdio.h>

int main() {
	int x,y;
	float F;
	
	F = 0;
	
	printf("Valor de x: ");
	scanf("%d", &x);
	printf("Valor de y: ");
	scanf("%d", &y);
	if((x > 0) && (y > 0)) {
	    F = (5 * x + 2) / y;
	} else if((x == 0) && (y == 0)) {
	    F = 5 * x + 2;
	}
	
	printf("Valor de F: %f", F);
	
	return 0;
}
