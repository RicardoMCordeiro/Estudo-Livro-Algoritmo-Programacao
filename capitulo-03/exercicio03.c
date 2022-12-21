/*
    Autor: Joao Pedro Araujo Arruda 
    Semestre: 1º Semestre
    Email: jpedroaraujo2004@gmail.com
   
    Descricao: 
        Exercicio 03 do Capitulo 3
       
        Enunciado: Faca um algoritmo que determine se um dado numero
        e par ou impar (utilize o operador resto: <dividendo> resto <divisor>,
        que retorna o resto da divisao inteira de <dividendo>/<divisor>).
*/
#include <stdio.h>

int main() {
    int num;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {    
        printf("O numero e par.\n");
    }
    else if (num % 2 != 0) {
        printf("O numero e impar.\n");
    }

    return 0;
}
