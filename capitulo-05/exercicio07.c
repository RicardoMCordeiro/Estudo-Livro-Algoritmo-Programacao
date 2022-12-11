/*
    Autor: Francisco Jonathan Rodrigues Fenandes
    Semestre: 2 semestre
    Email: fernandes.francisco07@aluno.ifce.edu.br
    Descricao: 
        Exercicio 07 do Capitulo 5
        Enunciado: Faca um modulo que calcule o n-esimo termo da serie de Fibonacci. O cabecalho do modulo sera
        Fibonacci(n: inteiro): inteiro. Para mais informacoes sobre a serie de Fibonacci, veja o exercicio 10 da pagina 84.
*/
#include <stdio.h>
#include <stdlib.h>

/*
  A sequencia de Fibonacci, eh uma sequencia de numeros inteiros, começando normalmente por 0 e
  1, na qual cada termo subsequente corresponde a soma dos dois anteriores,sendo tambem uma
  sequencia infinita.
  Exemplo:
    numeros naturais:
    0, 01, 02, 03, 04, 05, 06, 07, 08, 09, 10, 11, 12...

    numeros representados na sequencia de Fibonacci:
    0, 01, 01, 02, 03, 05, 08, 13, 21, 34, 55, 89, 144...
*/

int num_para_Fibonacci(int num_Fibonacci);

int main(void) {
  int num_Fibonacci;
  
  printf("Informe o valor que deseja passar para a sequencia de Fibonacci: ");
  scanf("%i", &num_Fibonacci);

  if(num_Fibonacci < 0){  // Verificacao caso o numero inserido seja menor que 0.
    printf("O numero inserido nao faz parte da sequencia de Fibonacci");
    exit(0);
  }

  if(num_Fibonacci < 2 
    && num_Fibonacci >= 0){ // Verificacao caso o numero inserido seja 1 ou 0.
    printf("O termo %i da equencia de Fibonacci equivale a: %i", num_Fibonacci, num_Fibonacci);
    exit(0);
  }else{                    // Implementacao da funcao caso o numero inserido seja maior que 1.
    printf("O termo %i da equencia de Fibonacci equivale a: %i", num_Fibonacci,num_para_Fibonacci(num_Fibonacci));
  }
  return 0;
}

int num_para_Fibonacci(int num_Fibonacci){
  int fibonacci, aux1_fibonacci = 0, aux2_fibonacci = 1; // Variaveis que irao guardar o valor de Fibonacci, o penultimo e antepenultimo valor.

  for(int i = 2; i <= num_Fibonacci; i++){ // Laco de repeticao que ira fazer as contas e atualizacao das variaveis
    fibonacci = aux1_fibonacci + aux2_fibonacci;
    aux1_fibonacci = aux2_fibonacci;
    aux2_fibonacci = fibonacci;
  }
  return fibonacci;
}
