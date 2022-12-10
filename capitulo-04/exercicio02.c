/*
    Autor: Manuel Carlos Gomes de Sousa
    Semestre: 2º
    Email: manuel.sousa06@aluno.ifce.edu.br

    Descricao: 
        Exercicio 01 do Capitulo 4

        Enunciado:
            Considerando que a potenciaçao e o resultado de varias multiplicacoes e
            que a multiplicacao pode ser expressa por
            meio de adicoes, implemente um algoritmo
            que realize a potenciacao apenas por meio
            de adicoes.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int base, expoente, acumulador_resultado = 0;
    printf("Digite uma base: ");
    scanf("%d", &base);

    printf("Digite um expoente: ");
    scanf("%d", &expoente);

    if(expoente == 0)
        acumulador_resultado = 1;
    else {
        acumulador_resultado = 0;
        // falta desenvolver a soma
    }
    
    printf("Resultado: %d\n", acumulador_resultado);
    
    system("pause");
    return 0;
}