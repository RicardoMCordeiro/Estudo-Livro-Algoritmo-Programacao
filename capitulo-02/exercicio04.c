/*
    Autor: Lucas de Sousa Silva
    Semestre: 1º Semestre
    Email: lucas.sousa07@aluno.ifce.edu.br
    
    Descricao: 
        Exercicio 04 do Capitulo 2
        
        Enunciado: Faca um algoritmo que receba a temperatura em graus Celsius e apresente-a 
        em graus Fahrenheit, de acordo com a formula °F = (1.8 °C) + 32.
*/

#include <stdio.h>

int main() {

    double graus_celsius, graus_fahrenheint;

    printf("Digite a Temperatura em Graus Celsius: ");
    scanf("%lf", &graus_celsius);

    graus_fahrenheint = (1.8 * graus_celsius) + 32;

    printf("A temperatura %.2lf Graus Celsius em Fahrenheit, e igual a %.2lf!", graus_celsius, graus_fahrenheint);

    return 0;
}