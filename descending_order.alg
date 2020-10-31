Algoritmo dor_de_cabeca;

var n1,n2,n3,n4,n5,x,i,temp,num: inteiro;

INICIO
  Escrever("Nº1: ");
  Ler(n1);
  Escrever("Nº2: ");
  Ler(n2);
  Escrever("Nº3: ");
  Ler(n3);
  Escrever("Nº4: ");
  Ler(n4);
  Escrever("Nº5: ");
  Ler(n5);
  num <- {n1,n2,n3,n4,n5};
  Para i = 0; i < 5; Fazer
    Para x = i + 1; x < 5; x += 1 Fazer
      Se num[i] < num[x] Fazer
        temp <- num[i];
        num[i] <- num[x];
        num[x] <- temp;
      FimSe
    FimPara
  FimPara
  Para i = 0; i < 5; i += 5 Fazer
    Escrever("%d | ", num[i]);
  FimPara
FIM
