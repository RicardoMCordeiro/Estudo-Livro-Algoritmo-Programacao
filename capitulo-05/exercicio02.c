/*
    Autor: Francisco Jonathan Rodrigues Fenandes
    Semestre: 2 semestre
    Email: fernandes.francisco07@aluno.ifce.edu.br
    Descricao: 
        Exercicio 02 do Capitulo 5
        Enunciado: Faca um algoritmo que receba dois numeros e descubra seu MMC. A identificacao do MMC deve ser feita dentro
        de um modulo que retorne tal valor. A leitura e a escrita dos dados, alem da ativacao do modulo MMC, devem ficar no
        modulo principal.
        
*/
#include <stdio.h>

int MMC_de_dois_numeros(int num1, int num2);

int main(void) {
/*
  Ao calcular o MDC poderemos utilizar uma propriedade que diz:
  “Sejam A e B dois ou mais números naturais não nulos temos que MMC de A e B * MDC de A e B = A * B.”
  Ajustando a operacao, temos que o:
  MMC de A e B = (A * B) / MDC de A e B
*/
  int num1, num2;
  scanf("%i%i", &num1, &num2);
  printf("%i", MMC_de_dois_numeros(num1, num2));
  
  return 0;
}

int MMC_de_dois_numeros(int num1, int num2){
  int resto, num_a, num_b, MMC;
  num_a = num1;
  num_b = num2;
  
  do{
      resto = num_a % num_b;
      num_a = num_b;
      num_b = resto;
  }while (resto != 0);
  
  MMC = (num1 * num2) / num_a;
  
  return MMC;
}
