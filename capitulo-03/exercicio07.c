/*
    Autor: Joao Pedro Araujo Arruda
    Semestre: 1º Semestre
    Email: jpedroaraujo2004@gnail.com
    
    Descricao: 
        Exercicio 07 do Capitulo 3
        
        Enunciado: Dado um ano depois de Cristo, identifique se este e um
        ano bissexto, considere que para ser considerado ano bissexto basta
        ser divisivel por 400, caso contrario, divisivel por 4 e nao divisivel
        por 100
*/

#include <stdio.h>

int main()
{
    int ano;
    
    printf("Digite o ano: ");
    scanf("%d", &ano);
    
    if(ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0){
        printf("o ano e bissexto");
    }
    else{
        printf("o ano nao e bissexto");
    }
  
    return 0;
}
