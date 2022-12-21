/*
    Autor: Joao Pedro Araujo Arruda
    Semestre: 1º Semestre
    Email: jpedroaraujo2004@gnail.com
    
    Descricao: 
        Exercicio 06 do Capitulo 3
        
        Enunciado: Faca um algoritmo que leia tres valores que representam os 
        lados de um triangulo. Primeiramente, verifique se os lados podem formar 
        um triangulo (a soma de dois lados nao pode ser menor que o terceiro lado). 
        Caso possa formar um triangulo, indique se este é equilatero, isosceles ou escaleno.
*/

#include <stdio.h>

int main() {
    float lado1, lado2, lado3;
    
    printf("Digite o comprimento do lado 1: ");
    scanf("%f", &lado1);
    printf("Digite o comprimento do lado 2: ");
    scanf("%f", &lado2);
    printf("Digite o comprimento do lado 3: ");
    scanf("%f", &lado3);
    
    if (lado1 + lado2 < lado3 || lado1 + lado3 < lado2 || lado3 + lado2 < lado1)
        puts("Nao e possivel formar um triangulo.");
    else { 
        if (lado1 == lado2 && lado2 == lado3)
            puts("O triangulo e equilatero.");
        else if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1)
            puts("O triangulo e isosceles.");
        else
            puts("O triangulo e escaleno.");
    }
    
    return 0;
}
