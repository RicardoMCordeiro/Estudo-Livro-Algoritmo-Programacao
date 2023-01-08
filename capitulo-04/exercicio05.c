/*
    Autor: Manuel Carlos Gomes de Sousa
    Semestre: 2º
    Email: manuel.sousa06@aluno.ifce.edu.br

    Descricao: 
        Exercicio 05 do Capitulo 4

        Enunciado:
        Dada a definicao de MDC: "dados dois numeros inteiros a e b nao nulos, define-
        se o maximo divisor comum (MDC) como sendo o maior inteiro que divide 
        simultaneamente a e b", faca um algoritmo que leia dois numeros e, a partir deles, 
        descubra o maximo divisor comum (MDC).
*/
#include <stdio.h>

int main() {
    int numero_a, numero_b, maior, mdc;
    
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

    while (numero_b != 0) {
        int temp = numero_a % numero_b;
        numero_a = numero_b;
        numero_b = temp;
    }
    mdc = numero_a;

    printf("MDC = %d\n", mdc);
    
    return 0;
}