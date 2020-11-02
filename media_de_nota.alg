Algoritmo kakakak;

var n1,n2,n3,n4,mp: inteiro;

INICIO
Escrever("Nota Nº1: ");
Ler(n1);
Escrever("Nota Nº2: ");
Ler(n2);
Escrever("Nota Nº3: ");
Ler(n3);
Escrever("Nota Nº4: ");
Ler(n4);
Se n1 > 20 || n1 < 0 || n2 > 20 || n2 < 0 || n3 > 20 || n3 < 0 || n4 > 20 || n4 < 0 Então
      		Escrever("Notas 0/20!");
	FimSe
	mp <- ((n1*3)+(n2*4)+(n3*2)+(n4*2))/11;
	Se mp >= 0 && mp <= 9 Então
Escrever("Insuficiente");
SeNão Se mp >= 9 && mp < 13 Então
      		Escrever("Satisfatório");
     	SeNão Se mp >= 13 && mp <= 17 Então
      		Escrever("Bom");
    	SeNão Se mp >= 17 && mp <= 20 Então
      		Escrever("Muito Bom");
	FimSe
FIM
