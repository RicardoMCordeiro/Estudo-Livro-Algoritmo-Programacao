/*
    Autor: Francisco Jonathan Rodrigues Fenandes
    Semestre: 2 semestre
    Email: fernandes.francisco07@aluno.ifce.edu.br
    Descricao: 
        Exercicio 08 do Capitulo 5
        Enunciado: Faca um modulo que retorne o resultado do somatorio a segui, sendo que o N eh o parametro de entrada.
*/
#include <stdio.h>
#include <stdlib.h>
/*
  Somatorio eh uma sequencia de somas de n valores naturais, sendo que esses valores tem que
  seguir uma ordem.
    Exemplo:
      somatorio de 1 ate 4:
        1 + 2 + 3 + 4 = 10.
  Lembrando que pode ser usado o somatorio junto com funcoes, que eh o caso desse 
  programa.
*/
int somatorio(int num_somatorio); //formula fornecida pela questao (5 * i^2 + 2 * i + 8).

int main(void) {
  int num_somatorio;
  printf("Informe o numero que passara pelo somatorio: ");
  scanf("%i", &num_somatorio);
  
  if(num_somatorio < 0){ //Estrutura de decisão que ira verificar se o numero pertence ao conjunto natural.
    printf("ERROR: Valor inserido nao faz parte do conjunto natural.");
    exit(0);
  }else{
    if(num_somatorio == 0){ //OBS: A questao ja implica que o valor inicial do somatorio eh 0.
    printf("ERROR: Valor inserido eh inferior ao caso inicial do somatorio.");
    exit(0);
    }
  }

  printf("O resultado do numero %i no somatorio eh: %i", num_somatorio, somatorio(num_somatorio));
  
  return 0;
}

int somatorio(int num_somatorio){
  int Somatorial = 0;
  for(int i = 1; i <= num_somatorio; i++){ //Laco de repeticao que ira se repetir ate chegar no valor inserido pelo usuario.
    Somatorial += (5 * (i * i) + 2 * i + 8); //Operacao que ira somar e atualizar a funcao do somatorio.
  }
  return Somatorial;
}
