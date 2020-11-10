#include <stdio.h>

int main() {
	int a;
	
	printf("O valor de a: ");
	scanf("%d", &a);
	
	if(a > 0) {
	    printf("%d é maior que 0.", a);
	} else {
	    printf("%d não é maior que 0.", a);
	}
	
	return 0;
}
