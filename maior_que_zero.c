#include <stdio.h>

int main() {
	int a;
	
	printf("O valor de a: ");
	scanf("%d", &a);
	
	if(a > 0) {
	    printf("%d � maior que 0.", a);
	} else {
	    printf("%d n�o � maior que 0.", a);
	}
	
	return 0;
}
