/*
    Autor: Manuel Carlos Gomes de Sousa
    Semestre: 2º
    Email: manuel.sousa06@aluno.ifce.edu.br

    Descricao: 
        Exercicio 08 do Capitulo 4

        Enunciado:
        Otimize o algoritmo do exercicio 7 considerando que os numeros candidatos ao
        MMC devem ser multiplos do maior dos dois numeros. Portanto, teste apenas
        seus multiplos (somando nao 1, mas o valor do maior dos dois numeros), dentro
        do laco para encontrar o MMC.
*/
#include <stdio.h>

int main() {
    int numero_a, 
        numero_b, 
        maior, 
        mmc;
    
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

    //realiza logo a multiplicacao, pois os dois numeros serao modificados
    maior = (numero_a > numero_b) ? numero_a : numero_b;

    while (1) {
        mmc += maior;
        
        if ((mmc % numero_a == 0) && (mmc % numero_b == 0)) break;
    }

    printf("MMC = %d\n", mmc);
    
    return 0;
}