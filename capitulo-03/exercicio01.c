/*
    Autor: Joao Pedro Araujo Arruda 
    Semestre: 1º Semestre
    Email: jpedroaraujo2004@gmail.com
    
    Descricao: 
        Exercicio 01 do Capitulo 3
        
        Enunciado: Faça um algoritmo que leia um número inteiro diferente de zero e 
        diga se este numero e positivo ou negativo.        
*/
#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num > 0) {    
        printf("O numero e positivo.\n");
    } else if (num < 0) {
        printf("O numero e negativo.\n");
    }

    return 0;
}
