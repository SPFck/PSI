Algoritmo uejuads;

var a_c,raio,per,PI: float;

INICIO
	PI <- 3.14159265358979323846;
	Escrever(“Introduza o raio: ”);
	Ler(raio)
	a_c <- PI*(raio*raio);
	Escrever("Área de uma circunferência: %f\n", a_c);
	per <- 2*PI*raio;
	Escrever("Perímetro: %f\n", per); 
FIM
