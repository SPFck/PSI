Algoritmo aksjak;

var x,y,temp: inteiro;

INICIO
	Escrever(“Nº1: ”);
	Ler(x);
	Escrever(“Nº2: ”);
	Ler(y);
	Escrever("Valor de x: %d\nValor de y: %d\nTrocando...\n", x, y);
	temp <- x;
	x <- y;
	y <- temp;
	Escrever("Sucesso!\nValor de x: %d\nValor de y: %d\n", x, y);
FIM
