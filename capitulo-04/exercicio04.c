/*
    Autor: Manuel Carlos Gomes de Sousa
    Semestre: 2º
    Email: manuel.sousa06@aluno.ifce.edu.br

    Descricao: 
        Exercicio 04 do Capitulo 4

        Enunciado:
        Faca um algoritmo que calcule a soma dos numeros primos entre 1 e 100.
*/

#include <stdio.h>
#include <math.h>

int main() {
    //dados
    int soma_primos = 2,
        numero = 0,
        raiz = 0,
        flag_primo;

    //processamento
    for (int numero = 3; numero < 100; numero += 2) {
        raiz = sqrt(numero);

        flag_primo = 1;
        for (int j = 2; j <= raiz; j++) {
            if (numero % j == 0)
                flag_primo = 0;
        }

        if (flag_primo) soma_primos += numero;
    }

    //saida
    printf("Soma dos primos entre 1 e 100: %d\n", soma_primos);


    return 0;
}