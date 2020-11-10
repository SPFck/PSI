#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,par,sair;
	
	par = 2;
	sair = 1;
	
	do {
	    system("cls");
	    for(i = 1; i <= 10; ++i) {
	        printf("%d\n", par);
	        par += 2;
	    }
	    printf("(0 = Sair) | Deseja continuar? ");
	    scanf("%d", &sair);
	}
	while(sair != 0);
}
