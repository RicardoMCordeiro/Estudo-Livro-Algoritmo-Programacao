/*
    Autor: Manuel Carlos Gomes de Sousa
    Semestre: 2º
    Email: manuel.sousa06@aluno.ifce.edu.br

    Descricao: 
        Exercicio 05 do Capitulo 4

        Enunciado:
            Dada a definicao de MDC: "dados dois numeros
            inteiros a e b nao nulos, define-se o maximo
            divisor comum (MDC) como sendo o maior inteiro
            que divide simultaneamente a e b", faca um
            algoritmo que leia dois numeros e, a partir 
            deles, descubra o maximo divisor comum (MDC).
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero_a, numero_b, maior, mdc;
    
    do {
        if(numero_a == 0)
            printf("ERRO: numero nulo\n");

        printf("Digite o numero A: ");
        scanf("%d", &numero_a);

    }while(numero_a == 0);

    do {
        if(numero_b == 0)
            printf("ERRO: numero nulo\n");

        printf("Digite o numero B: ");
        scanf("%d", &numero_b);
        
    }while(numero_b == 0);

    if(numero_a > numero_b)
        maior = numero_a;
    else
        maior = numero_b;

    for(int i = 0; i < maior; i++) {
        if(numero_a % i == 0 && numero_b % i == 0)
            mdc = i;
    }

    printf("MDC(%d,%d) = %d\n", numero_a, numero_b, mdc);
    
    system("pause");
    return 0;
}