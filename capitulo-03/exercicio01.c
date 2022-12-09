/*
    Autor: João Pedro Araújo Arruda 
    Semestre: 1º Semestre
    Email: jpedroaraujo2004@gmail.com
    
    Descricao: 
        Exercicio 01 do Capitulo 3
        
        Enunciado: Faça um algoritmo que leia um número inteiro diferente de zero e 
        diga se este número é positivo ou negativo
        
        
        */
#include <stdio.h>

int main()
{
    int num;
    scanf("%d\n", &num);

    if(num > 0){    
    printf("o número é positivo\n");
    }else if(num < 0){
        printf("o número é negativo\n");
    }

    return 0;
}
