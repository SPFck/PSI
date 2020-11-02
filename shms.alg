Algoritmo asdqwd;

var t,h,m,s: inteiro;

INICIO
	Escrever("Insira o tempo em segundos: ");
	Ler(t);
	h = t/3600;
	m = h*60;
	s = m*60;
	Escrever("Horas: %.2f\nMinutos: %.2f\nSegundos: %.2f\n", h, m, s);
FIM
