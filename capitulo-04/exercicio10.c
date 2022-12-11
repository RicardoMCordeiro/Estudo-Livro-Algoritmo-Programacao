/*
    Autor: Manuel Carlos Gomes de Sousa
    Semestre: 2º
    Email: manuel.sousa06@aluno.ifce.edu.br

    Descricao: 
        Exercicio 10 do Capitulo 4

        Enunciado:
            Faca um algoritmo que encontre o n-esimo
            termo da serie de Fibonacci.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor_fatorial, a = 0, b = 1, c, aux;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &valor_fatorial);

    aux = valor_fatorial;

    while(aux - 2 >= 0) {
        // c (novo termo) é a soma dos anteriores (a+b)
        c = a + b;
        /*
            a   b   c(a+b)
            0   1   1
            <----
            a   b   c(a+b novos)
            1   1   2
        */
        a = b;
        b = c;
        // diminui o número de repetições até chegar ao caso base F(2) = 1
        aux -= 1;
    }

    printf("Fibonacci(%d) = %d\n", valor_fatorial, c);

    system("pause");
    return 0;
}