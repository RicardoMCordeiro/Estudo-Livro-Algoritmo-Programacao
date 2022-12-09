/*
    Autor: João Pedro Araújo Arruda 
    Semestre: 1º Semestre
    Email: jpedroaraujo2004@gmail.com
    Descricao: 
        Exercicio 02 do Capitulo 3
        Enunciado: Faça um algoritmo que leia um número inteiro e 
        diga se este número é positivo, negativo ou zero. Utilize
        a sequência de se encadeado
        */
#include <stdio.h>

int main()
{
    int num;
    scanf("%d\n", &num);

    if(num>0){    
    printf("o número é positivo");
    }
    else if(num<0){
        printf("o número é negativo");
    }
    else{
        printf("o número é zero");
    }
    return 0;
}
