/*
    Autor: Manuel Carlos Gomes de Sousa
    Semestre: 2º
    Email: manuel.sousa06@aluno.ifce.edu.br

    Descricao: 
        Exercicio 05 do Capitulo 4

        Enunciado:
        Dada a definicao de MMC: "dados dois numeros inteiros a e b nao nulos, define-
        se o minimo multiplo comum (MMC) como sendo o menor inteiro positivo,
        multiplo comum de a e b", faca um algoritmo que leia dois numeros e encontre o
        minimo multiplo comum (MMC). Esse algoritmo deve utilizar o seguinte metodo
        para calcular o MMC: "multiplicar os dois numeros e dividir pelo MDC (maximo
        divisor comum)".
*/
#include <stdio.h>

int main() {
    int numero_a, numero_b, maior, mdc, mmc;
    
    do {
        printf("Digite o numero A: ");
        scanf("%d", &numero_a);
        
        //error
        if (numero_a == 0)
            printf("ERRO: numero nulo\n");

    } while (numero_a == 0);

    do {
        printf("Digite o numero B: ");
        scanf("%d", &numero_b);
        //error
        if(numero_b == 0)
            printf("ERRO: numero nulo\n");
        
    } while (numero_b == 0);

    //realiza logo a multiplicacao, pois os dois numeros serao modificados
    mmc = numero_a * numero_b; 

    while (numero_b != 0) {
        int temp = numero_a % numero_b;
        numero_a = numero_b;
        numero_b = temp;
    }
    mdc = numero_a;

    mmc = mmc/mdc;

    printf("MMC = %d\n", mmc);
    
    return 0;
}