/*
    Autor: Francisco Jonathan Rodrigues Fenandes
    Semestre: 2 semestre
    Email: fernandes.francisco07@aluno.ifce.edu.br
    Descricao: 
        Exercicio 02 do Capitulo 5
        Enunciado: Faca um algoritmo que receba dois numeros e descubra seu MMC. 
        A identificacao do MMC deve ser feita dentro de um modulo que retorne tal 
        valor. A leitura e a escrita dos dados, alem da ativacao do modulo MMC, 
        devem ficar no modulo principal.
*/
#include <stdio.h>

int calcularMMC(int num1, int num2);

int main(void) {
/*
  Ao calcular o MDC poderemos utilizar uma propriedade que diz:
  “Sejam A e B dois ou mais números naturais não nulos temos que MMC de A e B * MDC de A e B = A * B.”
  Ajustando a operacao, temos que o:
  MMC de A e B = (A * B) / MDC de A e B
*/
  int num1, num2;
  printf("Informe os dois numeros que deseja calcular o MMC: ");
  scanf("%d", &num1);
  scanf("%d", &num2);
  printf("O MMC de %d e %d e igual a: %d\n", num1, num2, calcularMMC(num1, num2));
  
  return 0;
}

int calcularMMC(int num1, int num2){
  int resto, num_a, num_b, mmc;
  num_a = num1;
  num_b = num2;
  
  do {
      resto = num_a % num_b;
      num_a = num_b;
      num_b = resto;
  } while (resto != 0);
  
  mmc = (num1 * num2) / num_a;
  
  return mmc;
}
