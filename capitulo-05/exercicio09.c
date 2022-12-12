/*
    Autor: Francisco Jonathan Rodrigues Fenandes
    Semestre: 2 semestre
    Email: fernandes.francisco07@aluno.ifce.edu.br
    Descricao: 
        Exercicio 09 do Capitulo 5
        Enunciado: faca um modulo que faca a rotacao de tres numeros. Tais numeros precisam ser passados como parametro, por
        referencia. Por exemplo, se o modulo receber os valores 5, 8 e 9, nessa ordem, os valores de saida nessas variaveis
        serao, 8, 9 e 5, respectivamente.
*/
#include <stdio.h>
/*
  A troca de valores por referencia faz uso de ponteiros para armazenar o endereco de memoria
  em que os dados estao armazenados, isso nos permite fazer alteraçoes permanentes, dentro   
  de funcoes, desses valores, ja que estaremos manipulando os dados diretamente. Mas no caso 
  da manipulacao por valor, nos alteramos apenas uma copia dos dados, copia essa feita pelo  
  computador, isso significa que em uma manipulacao por valor so ira alterar os valores das  
  copias enquanto a funcao estiver em execucao, depois disso, a copia eh destruida e o valor 
  original nao foi alterado.
*/

// Utiizamos void, pois nao iremos retornar nada, ja que as alteracoes serao por referencia.
void Trocar_valor_por_referencia(int *valor_1, int *valor_2, int *valor_3);

int main(void) {
  int valor_1, valor_2, valor_3;
  
  printf("Insira o primeiro valor: ");
  scanf("%i", &valor_1);
  printf("Insira o segundo valor: ");
  scanf("%i", &valor_2);
  printf("Insira o terceiro valor: ");
  scanf("%i", &valor_3);
  printf("\n");
  //Na alteracao por referencia nos utilizamos o operador & para enviar o endereco onde os dados estao armazenados na memoria.
  Trocar_valor_por_referencia(&valor_1, &valor_2, &valor_3); 

  printf("O primeiro valor eh: %i\n", valor_1);
  printf("O segundo valor eh: %i\n", valor_2);
  printf("O terceiro valor eh: %i\n", valor_3);
  return 0;
}

//No prototipo e na função em si, trocamos o & por um *.
void Trocar_valor_por_referencia(int *valor_1, int *valor_2, int *valor_3){
  int troca_por_referencia;

  //E aqui eh feita a alteração dos valores.
  troca_por_referencia = *valor_3;
  *valor_3 = *valor_1;
  *valor_1 = *valor_2;
  *valor_2 = troca_por_referencia;
  
}
