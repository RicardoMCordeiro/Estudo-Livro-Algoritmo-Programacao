/*
    Autor: Joao Pedro Araujo Arruda
    Semestre: 1º Semestre
    Email: jpedroaraujo2004@gnail.com
    
    Descricao: 
        Exercicio 05 do Capitulo 3
        
        Enunciado: Faca um algoritmo que leia 3 respostas de questoes de
        multipla escolha, em seguida leia o gabarito, e compare as respostas dadas
        com o gabarito, e indique quais estao corretas
*/

#include <stdio.h>

int main()
{
    char resposta1, resposta2, resposta3, gabarito;
    int certas = 0;
    
    printf("Digite sua resposta: ");
    scanf("%s", &resposta1);
    printf("Digite a resposta do gabarito: ");
    scanf("%s", &gabarito);
    
    if(resposta1 == gabarito){
        certas++;
    }
    
    printf("Digite sua resposta: ");
    scanf("%s", &resposta2);
    printf("Digite a resposta do gabarito: ");
    scanf("%s", &gabarito);
    
    if(resposta2 == gabarito){
        certas++;
    }
    
    printf("Digite sua resposta: ");
    scanf("%s", &resposta3);
    printf("Digite a resposta do gabarito: ");
    scanf("%s", &gabarito);
    
    if(resposta3 == gabarito){
        certas++;
    }
    
    printf("a quantidade de respostas certas e %d", certas);
    return 0;
}
