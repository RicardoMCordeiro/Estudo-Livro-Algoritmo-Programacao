/*
    Autor: Manuel Carlos Gomes de Sousa
    Semestre: 2º
    Email: manuel.sousa06@aluno.ifce.edu.br

    Descricao: 
        Exercicio 02 do Capitulo 4

        Enunciado:
        Considerando que a potenciaçao e o resultado de varias multiplicacoes e
        que a multiplicacao pode ser expressa por meio de adicoes, implemente 
        um algoritmo que realize a potenciacao apenas por meio de adicoes.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    //dados
    int base, 
        expoente,
        resultado,
        tmp;
    
    //leitura
    printf("Digite uma base: ");
    scanf("%d", &base);

    do {
        printf("Digite um expoente nao negativo: ");
        scanf("%d", &expoente);
        //error
        if (expoente < 0)
            puts("ERROR: expoente invalido! Tente novamente.");
    } while (expoente < 0);

    //processamento
    if (expoente == 0) 
        resultado = 1;
    else {
        resultado = base;

        for (int i = 1; i < expoente; i++) {
            tmp = 0;

            for (int j = 0; j < base; j++)
                tmp += resultado;
            
            resultado = tmp;
        }
    }
    
    printf("Resultado: %d\n", resultado);
    
    return 0;
}