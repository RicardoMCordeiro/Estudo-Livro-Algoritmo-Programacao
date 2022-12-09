/*
    Autor: João Pedro Araújo Arruda 
    Semestre: 1º Semestre
    Email: jpedroaraujo2004@gmail.com
    Descricao: 
        Exercicio 03 do Capitulo 3
        Enunciado: Faça um algoritmo que leia um número inteiro e 
        diga se este número é par ou ímpar
        */
#include <stdio.h>

int main()
{
    int num;
    scanf("%d\n", &num);

    if(num%2==0){    
    printf("o número é par");
    }
    else if(num%2!=0){
        printf("o número é ímpar");
    }

    return 0;
}
