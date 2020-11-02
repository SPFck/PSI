Algoritmo ayy;

var s1,s2: inteiro;
var res: float;

INICIO
	Escrever(“Salário Nº1: ”);
	Ler(s1)
	Escrever(“Salário Nº2: “);
	Ler(s2);
	res <- (s1+s2)/2;
	Se s1 > s2 Então
		Escrever("Salário Maior: %d\nSalário Menor: %d", s1, s2);
	SeNão
		Escrever("Salário Maior: %d\nSalário Menor: %d", s2, s1);
	FimSe
FIM
