Algoritmo kakaka;

var age: inteiro;

INICIO
	Escrever(“Anos de escola: “);
	Ler(age);

	Se age < 0 || age == 0 Então
Escrever("Ainda tens muito que comer!!");
  	SeNão Se age > 0 && age < 5 Então
Escrever("Você é da primária!");
  	SeNão Se age > 4 && age < 7 Então
 		Escrever("Você é do 2ºCiclo!");
SeNão Se age > 6 && age < 10 Então
Escrever("Você é do 3ºCiclo!");
SeNão Se age > 9 && age < 13 Então
Escrever("Você é do Secundário!");
SeNão Se age > 30 Então
Escrever("Vai masé trabalhar!!!!");
  	SeNão Se age > 12 Então
Escrever("Você é do Superior!");
  	SeNão 
Escrever("\nErro! Idade: %d", age);
  	FimSe
FIM
