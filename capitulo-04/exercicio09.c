/*
    Autor: Manuel Carlos Gomes de Sousa
    Semestre: 2º
    Email: manuel.sousa06@aluno.ifce.edu.br

    Descricao: 
        Exercicio 09 do Capitulo 4

        Enunciado:
            Faca um algoritmo para a resolucao do somatorio 
            a seguir, sendo n definido pelo usuario e 
            maior que 5;
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor_n, acumulador_somatorio = 0;

    do {
        if(valor_n <= 5)
            printf("ERRO: Digite um valor maior que 5\n");
        
        printf("Digite um valor maior que 5: ");
        scanf("%d", &valor_n);
        
    }while(valor_n <= 5);

    for(int i = 5; i < valor_n; i++)
        acumulador_somatorio += (2 * (i * i) + (5 * i) + 1);
    
    printf("Resultado do somatorio = %d\n", acumulador_somatorio);

    system("pause");
    return 0;
}