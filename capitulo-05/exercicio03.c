/*
    Autor: Francisco Jonathan Rodrigues Fenandes
    Semestre: 2 semestre
    Email: fernandes.francisco07@aluno.ifce.edu.br
    Descricao: 
        Exercicio 03 do Capitulo 5
        Enunciado: Faca um algoritmo que calcule a soma dos N primeiros numeros primos, 
        sendo N definido pelo usuario no modulo principal. O algoritmo ainda devera ter 
        os modulos Soma_Primos e Primo, sendo que o primeiro sera responsavel pela soma 
        dos numeros que forem primos e o segundo sera responsavel por verificar se o numero 
        em questao eh primo.
*/
#include <stdio.h>
/*
    um numero primo eh um numero maior que um, que pertence ao conjunto dos numeros natural e eh divisivel apenas por um e por
    ele mesmo. Sendo que a divisao nao pode resultar em restos ou o resultado ser um numero que fuja do conjunto dos naturais.
*/
int Soma_Primos(int num);
int Primo(int num);

int main(void) {
    int num, somaPrimos;

    do {
        printf("Informe o numero inteiro positivo: ");
        scanf("%d", &num);
        //error
        if (num <= 0)
            printf("ERROR: valor negativo ou nulo! Tente novamente.\n");
    } while (num <= 0);

    somaPrimos = Soma_Primos(num);

    printf("A soma dos numeros primos de 1 ate %d eh: %d\n", num, somaPrimos);
    
    return 0;
}

int Primo(int num){
    int qtd = 0;
    
    for(int i = 1; i <= num; i++){
        if(num % i == 0)
            qtd++;
    }

    return (qtd == 2) ? 1 : 0;
}

int Soma_Primos(int num){
    int somaPrimos = 0; 

    for(int i = 2; i <= num; i++){
        if (Primo(i))
            somaPrimos += i;
    }

    return somaPrimos;
}
