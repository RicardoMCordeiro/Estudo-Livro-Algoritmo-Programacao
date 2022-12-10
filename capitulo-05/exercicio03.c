/*
    Autor: Francisco Jonathan Rodrigues Fenandes
    Semestre: 2 semestre
    Email: fernandes.francisco07@aluno.ifce.edu.br
    Descricao: 
        Exercicio 03 do Capitulo 5
        Enunciado: Faca um algoritmo que calcule a somo dos N primeiros numeros primos, sendo N definido pelo usuario no 
        modulo principal. O algoritmo ainda devera ter os madulos Soma_Primos e Primos, sendo que o primeiro sera responsavel
        pela soma dos numeros que forem primos e o segundo sera responsavel por verificar se o numero em quetão eh primo.
        
*/
#include <stdio.h>
/*
    um numero primo eh um numero maior que um, que pertence ao conjunto dos numeros natural e eh divisivel apenas por um e por
    ele mesmo. Sendo que a divisao nao pode resultar em restos ou o resultado ser um numero que fuja do conjunto dos naturais.
*/
int Soma_Primos(int num);
int Primo(int num);

int main(void) {
  int num, somaPrimos;
  printf("Informe o numero para verificar se eh primo:\n");
  scanf("%i", &num);

  if(Primo(num) == 2){
    printf("O numero inserido eh primo!\n");
  }else{
    printf("O numero inserido nao eh primo!\n");
  }
  somaPrimos = Soma_Primos(num);
  printf("A soma dos numeros primos de 1 ate %i eh: %i\n", num, somaPrimos);
  return 0;
}

int Primo(int num){
  int qtd = 0;
  for(int i = 1; i <= num; i++){
    num / i;
    if(num % i == 0)
      qtd++;
  }
  return qtd;
}

int Soma_Primos(int num){
  int qtd = 0, somaPrimos = 0; 
  for(int i = 1; i <= num; i++){
    qtd = 0;
    for(int j = 1; j <= i; j++){
      i / j;
      if(i % j == 0)
      qtd++;
    }
    if(qtd == 2){
      somaPrimos += i;
    }
  }
  return somaPrimos;
}
