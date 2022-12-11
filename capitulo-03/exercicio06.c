/*
    Autor: Joao Pedro Araujo Arruda
    Semestre: 1º Semestre
    Email: jpedroaraujo2004@gnail.com
    
    Descricao: 
        Exercicio 06 do Capitulo 3
        
        Enunciado: Faca um algoritmo que leia 3 valores que representam os 
        lados de um triangulo. Primeiramente verifique se e possivel formar 
        um triangulo. Caso possa formar indique se é um triangulo escaleno, 
        isosceles ou equilatero;
*/

#include <stdio.h>

int main()
{
  float lado1, lado2, lado3;
  
  printf("Digite o lado 1: ");
  scanf("%f", &lado1);
  printf("Digite o lado 2: ");
  scanf("%f", &lado2);
  printf("Digite o lado 3: ");
  scanf("%f", &lado3);
  
  if(lado1 + lado2 < lado3 || lado1 + lado3 < lado2 || lado3 + lado2 < lado1){
      printf("nao e possivel formar um triangulo");
  }
  
  if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
      printf("o triangulo e isosceles");
  }
  
  if(lado1 == lado2 && lado2 == lado3){
      printf("o triangulo e equilatero");
  }
  
  if(lado1 != lado2 && lado2 != lado3 && lado3 != lado1){
      printf("o triangulo e escaleno");
  }
    return 0;
}
