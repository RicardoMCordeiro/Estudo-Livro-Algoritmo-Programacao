/*
    Autor: Manuel Carlos Gomes de Sousa
    Semestre: 2º
    Email: manuel.sousa06@aluno.ifce.edu.br

    Descricao: 
        Exercicio 10 do Capitulo 4

        Enunciado:
        Faca um algoritmo que encontre o n-esimo termo da serie de Fibonacci. A serie
        de Fibonacci e dada por:
        
        fib(n) = fib(n - 1) + fib(n - 2) para n > 1;

        Para n = 0 e n = 1, o valor e dado por definicao: fib(0) = 0 e fib(1) = 1.

        Exemplos:
        
        fib(0) = 0
        fib(1) = 1
        fib(2) = fib(1) + fib(0) = 1 + 0 = 1
        fib(3) = fib(2) + fib(1) = 1 + 1 = 2
        fib(4) = fib(3) + fib(2) = 2 + 1 = 3
        fib(5) = fib(4) + fib(3) = 3 + 2 = 5
        fib(6) = fib(5) + fib(4) = 5 + 3 = 8
*/
#include <stdio.h>

int main() {
    //dados
    int termo,
        fib,
        n1 = 0,
        n2 = 1;
    
    //leitura
    do {
        printf("Informe o termo que deseja saber da serie de fibonacci: ");
        scanf("%d", &termo);
        //error
        if (termo < 0)
            puts("ERROR: termo invalido! Tente novamente.");
    } while (termo < 0);


    //processamento
    if (termo == 0) fib = n1;
    else if (termo == 1) fib = n2;
    else {
        for (int i = 2; i <= termo; i++) {
            fib = n2 + n1;
            n1 = n2;
            n2 = fib;
        }
    }

    //saida
    printf("fib(%d) = %d\n", termo, fib);

    return 0;
}