/*
    Autor: Joao Pedro Araujo Arruda
    Semestre: 1º Semestre
    Email: jpedroaraujo2004@gnail.com
    
    Descricao: 
        Exercicio 07 do Capitulo 3
        
        Enunciado: Dado um ano d.C. (depois de Cristo), identifique se este e um
        ano bissexto ou nao. Considere que para o ano ser bissexto basta que seja
        divisivel por 400. Caso contrario, este precisara ser divisivel por 4 e nao 
        divisivel por 100.
*/

#include <stdio.h>

int main() {
    int ano;
    
    do {
        printf("Digite o ano d.C (depois de Cristo): ");
        scanf("%d", &ano);

        //error
        if (ano < 1)
            puts("ERROR: ano invalido! Tente novamente.");
    } while (ano < 1);
    
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
        puts("O ano e bissexto.");
    else
        puts("O ano nao e bissexto.");
  
    return 0;
}
