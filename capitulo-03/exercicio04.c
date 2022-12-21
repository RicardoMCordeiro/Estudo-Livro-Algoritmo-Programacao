/*
    Autor: Joao Pedro Araujo Arruda
    Semestre: 1º Semestre
    Email: jpedroaraujo2004@gnail.com
    
    Descricao: 
        Exercicio 04 do Capitulo 3
        
        Enunciado: Faca um algoritmo que simule uma calculadora com
        as quatro operacoes basicas (+, -, *, /). O algoritmo deve socilitar ao 
        usuario dois operandos e de uma operacao a ser executada na
        forma de menu. Dependendo da opcao escolhida, deve ser executada
        a operacao solicitada e escrito seu resultado. Utilize uma variavel
        caractere para armazenar a operacao e utilize o comando caso para
        escolher a operacao a ser executada a partir do operador.
*/

#include <stdio.h>

//FUNCOES
void limparBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

//PROGRAMA PRINCIPAL
int main() {
    float num1, num2, resultado;
    char operacao;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    do {
        limparBuffer();
        puts("=== MENU===");
        puts("[+] - soma.");
        puts("[-] - subtracao.");
        puts("[*] - multiplicacao.");
        puts("[/] - divisao");
        printf("Operacao escolhida: ");
        scanf("%c", &operacao);

        //error
        if (operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/')
            puts("ERROR: operacao nao reconhecida! Tente novamente.");
    } while (operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/');
    
    switch (operacao) {
        case '+': 
            resultado = num1 + num2; 
            printf("O resultado do calculo e %g\n", resultado);
            break;
        case '-': 
            resultado = num1 - num2; 
            printf("O resultado do calculo e %g\n", resultado);
            break;
        case '*': 
            resultado = num1 * num2; 
            printf("O resultado do calculo e %g\n", resultado);
            break;
        case '/': 
            if (num2 == 0)
                puts("AVISO: Nao e possivel dividir por zero!");
            else {
                resultado = num1 / num2;
                printf("O resultado do calculo e %g\n", resultado);
            }
            break;
    }
    
    return 0;
}
