/*
    Autor: Manuel Carlos Gomes de Sousa
    Semestre: 2º
    Email: manuel.sousa06@aluno.ifce.edu.br

    Descricao: 
        Exercicio 07 do Capitulo 4

        Enunciado:
        Faca um novo algoritmo para calculo do MMC de dois numeros, mas que em vez
        de utilizar a fatoracao, parta do seguinte principio: "o MMC e o menor numero
        maior ou igual ao maior dos dois numeros escolhidos e que e divisivel pelos dois
        numeros iniciais." Portanto, parta do maior dos dois numeros e verifique, dentro
        do laco, se o numero e o MMC testando sua divisibilidade pelos dois numeros.
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