/*
    Autor: Joao Pedro Araujo Arruda 
    Semestre: 1º Semestre
    Email: jpedroaraujo2004@gmail.com
   
    Descricao: 
        Exercicio 03 do Capitulo 3
       
        Enunciado: Faça um algoritmo que leia um numero inteiro e 
        diga se este numero e par ou impar
*/
#include <stdio.h>

int main() {
    int num;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {    
        printf("O numero e par.\n");
    }
    else if (num % 2 != 0) {
        printf("O numero e impar.\n");
    }

    return 0;
}
