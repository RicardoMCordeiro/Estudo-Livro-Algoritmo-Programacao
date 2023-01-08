/*
    Autor: Lucas de Sousa Silva
    Semestre: 1º Semestre
    Email: lucas.sousa07@aluno.ifce.edu.br
    
    Descricao: 
        Exercicio 05 do Capitulo 2
        
        Enunciado: Faca um algoritmo que leia um numero de 4 digitos e escreva-o invertido. 
        Por exemplo, se o numero lido for 2548, o resultado será 8452.
*/

#include <stdio.h>

int main() {

    int numero, numero_invertido;

    do {
        printf("Digite um numero inteiro com 4 digitos: ");
        scanf("%d", &numero);
        //error
        if (numero < 1000 || numero > 9999)
            puts("ERROR: o numero precisa ter 4 digitos (zeros a esquerda nao valem)!");
    } while (numero < 1000 || numero > 9999);

    int milhar = numero / 1000;

    int centena = numero % 1000 / 100;

    int dezena = numero % 1000 % 100/ 10;

    int unidade = numero % 1000% 100 % 10;

    numero_invertido = (unidade * 1000) + (dezena * 100) + (centena * 10) + milhar;

    printf("O numero invertido de %d e igual a %d.\n", numero, numero_invertido);

    return 0;
}