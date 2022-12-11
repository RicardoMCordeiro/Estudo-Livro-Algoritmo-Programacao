/*
    Autor: Joao Pedro Araujo Arruda
    Semestre: 1º Semestre
    Email: jpedroaraujo2004@gnail.com
    
    Descricao: 
        Exercicio 04 do Capitulo 3
        
        Enunciado: Faca um algoritmo que simule uma calculadora com
        as quatro operacoes basicas. O algoritmo deve socilitar ao 
        usuario dois operandos e de uma operacao a ser executada na
        forma de menu
*/

#include <stdio.h>

int main()
{
    float num1, num2, resultado;
    char operacao;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    printf("Digite a operacao a ser executada: ");
    printf("+ para soma, - para subtracao, * para multiplicacao e / por divisao\n");
    scanf("%s", &operacao);
    
    switch(operacao){
        case '+': resultado = num1 + num2; break;
        case '-': resultado = num1 - num2; break;
        case '*': resultado = num1 * num2; break;
        case '/': if(num2 == 0){
            printf("Nao e possivel dividir por zero");
        }
            resultado = num1 / num2; break;
    }
    
    printf("O resultado do calculo e %.2f", resultado);
    return 0;
}
