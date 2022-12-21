/*
    Autor: Joao Pedro Araujo Arruda 
    Semestre: 1º Semestre
    Email: jpedroaraujo2004@gmail.com
   
    Descricao: 
        Exercicio 02 do Capitulo 3
       
       Enunciado: Faça um algoritmo que leia um número inteiro e 
        diga se este e positivo, negativo ou zero. Utilize
        a sequencia de comandos se encadeados.      
*/
#include <stdio.h>

int main() {
    int num;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    if (num > 0) {    
        printf("O numero e positivo.\n");
    }
    else if (num < 0) {
        printf("O numero e negativo.\n");
    }
    else {
        printf("O numero e zero.\n");
    }

    return 0;
}
