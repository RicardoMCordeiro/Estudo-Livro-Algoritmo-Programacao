/*
    Autor: Manuel Carlos Gomes de Sousa
    Semestre: 2º
    Email: manuel.sousa06@aluno.ifce.edu.br

    Descricao: 
        Exercicio 01 do Capitulo 4

        Enunciado:
        Da mesma forma que a multiplicacao pode ser expressa como o resultado 
        de varias adicoes, a potenciacao pode ser representada por uma serie 
        de multiplicacoes. Faca um algoritmo que calcule a potenciacao utilizando
        o operador "*". Depois, faca o teste de mesa para garantir que o exercicio 
        esta correto.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int base, expoente, acumulador_resultado = 1;

    printf("Digite uma base: ");
    scanf("%d", &base);

    do {
        printf("Digite um expoente nao negativo: ");
        scanf("%d", &expoente);
        //error
        if (expoente < 0)
            puts("ERROR: expoente invalido! Tente novamente.");
    } while (expoente < 0);

    if (expoente != 0) {
        for(int i = 0; i < expoente; i++)
            acumulador_resultado *= base;
    }

    printf("%d^%d = %d\n", base, expoente, acumulador_resultado);

    return 0;
}