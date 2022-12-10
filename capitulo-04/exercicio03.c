/*
    Autor: Manuel Carlos Gomes de Sousa
    Semestre: 2º
    Email: manuel.sousa06@aluno.ifce.edu.br

    Descricao: 
        Exercicio 03 do Capitulo 4

        Enunciado:
            Faca um algoritmo que calcule a divisao
            inteira de dois numeros, por exemplo, 10
            div 3 = 3, utilizando o operador de adicao
            ou subtracao.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int dividendo, divisor, acumulador_divisao = 0, aux;
    
    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);
    aux = dividendo;

    do {
        if(divisor <= 0)
            printf("ERRO: Divisor causa indefinicao\n");

        printf("Digite o divisor: ");
        scanf("%d", &divisor);
        
    }while(divisor <= 0);

    while(aux >= divisor) {
        acumulador_divisao += 1;
        aux -= divisor;
    }
    
    printf("Divisao inteira entre %d e %d = %d\n", dividendo, divisor, acumulador_divisao);
    
    system("pause");
    return 0;
}