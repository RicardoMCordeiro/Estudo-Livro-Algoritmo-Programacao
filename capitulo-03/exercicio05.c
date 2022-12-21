/*
    Autor: Joao Pedro Araujo Arruda
    Semestre: 1º Semestre
    Email: jpedroaraujo2004@gnail.com
    
    Descricao: 
        Exercicio 05 do Capitulo 3
        
        Enunciado: Faca um algoritmo que leia as respostas de tres questoes de
        multipla escolha ('a', 'b', 'c', 'd'). Em seguida, leia o gabarito dessas 
        respostas, ou seja, as respostas corretas. Depois, compare as respostas dadas
        com as do gabarito e indique quantas respostas estao corretas.
*/
#include <stdio.h>

//FUNCOES
void limparBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

//PROGRAMA PRINCIPAL
int main() {
    char resposta1, resposta2, resposta3;
    char gabarito1, gabarito2, gabarito3;
    int certas = 0;
    

    //leitura das respostas
    do {
        printf("Informe a resposta da primeira questao (a, b, c, d): ");
        scanf("%c", &resposta1);
        limparBuffer();

        //error
        if (resposta1 != 'a' && resposta1 != 'b' && resposta1 != 'c' && resposta1 != 'd')
            puts("ERROR: resposta invalida! Tente novamente.");
    } while (resposta1 != 'a' && resposta1 != 'b' && resposta1 != 'c' && resposta1 != 'd');

    do {
        printf("Informe a resposta da segunda questao (a, b, c, d): ");
        scanf("%c", &resposta2);
        limparBuffer();

        //error
        if (resposta2 != 'a' && resposta2 != 'b' && resposta2 != 'c' && resposta2 != 'd')
            puts("ERROR: resposta invalida! Tente novamente.");
    } while (resposta2 != 'a' && resposta2 != 'b' && resposta2 != 'c' && resposta2 != 'd');

    do {
        printf("Informe a resposta da terceira questao (a, b, c, d): ");
        scanf("%c", &resposta3);
        limparBuffer();

        //error
        if (resposta3 != 'a' && resposta3 != 'b' && resposta3 != 'c' && resposta3 != 'd')
            puts("ERROR: resposta invalida! Tente novamente.");
    } while (resposta3 != 'a' && resposta3 != 'b' && resposta3 != 'c' && resposta3 != 'd');
    
    //leitura dos gabaritos
    do {
        printf("Informe o gabarito da primeira questao (a, b, c, d): ");
        scanf("%c", &gabarito1);
        limparBuffer();

        //error
        if (gabarito1 != 'a' && gabarito1 != 'b' && gabarito1 != 'c' && gabarito1 != 'd')
            puts("ERROR: gabarito invalido! Tente novamente.");
    } while (gabarito1 != 'a' && gabarito1 != 'b' && gabarito1 != 'c' && gabarito1 != 'd');

    do {
        printf("Informe o gabarito da segunda questao (a, b, c, d): ");
        scanf("%c", &gabarito2);
        limparBuffer();

        //error
        if (gabarito2 != 'a' && gabarito2 != 'b' && gabarito2 != 'c' && gabarito2 != 'd')
            puts("ERROR: gabarito invalido! Tente novamente.");
    } while (gabarito2 != 'a' && gabarito2 != 'b' && gabarito2 != 'c' && gabarito2 != 'd');

    do {
        printf("Informe o gabarito da terceira questao (a, b, c, d): ");
        scanf("%c", &gabarito3);
        limparBuffer();

        //error
        if (gabarito3 != 'a' && gabarito3 != 'b' && gabarito3 != 'c' && gabarito3 != 'd')
            puts("ERROR: gabarito invalido! Tente novamente.");
    } while (gabarito3 != 'a' && gabarito3 != 'b' && gabarito3 != 'c' && gabarito3 != 'd');


    if (resposta1 == gabarito1) certas++;    
    if (resposta2 == gabarito2) certas++;    
    if (resposta3 == gabarito3) certas++;
    
    printf("A quantidade de respostas certas e %d.\n", certas);

    return 0;
}
