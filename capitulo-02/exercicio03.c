/*
    Autor: Lucas de Sousa Silva
    Semestre: 1º Semestre
    Email: lucas.sousa07@aluno.ifce.edu.br
    
    Descricao: 
        Exercicio 03 do Capitulo 2
        
        Enunciado: Faca um algoritmo que calcule a media de
        quatro numeros introduzidos pelo usuario.
*/

#include <stdio.h>

int main() {

    double numero_1, numero_2, numero_3, numero_4, media;

    printf("Digite a sua 1 Nota: ");
    scanf("%lf", &numero_1);

    printf("Digite a sua 2 Nota: ");
    scanf("%lf", &numero_2);

    printf("Digite a sua 3 Nota: ");
    scanf("%lf", &numero_3);

    printf("Digite a sua 4 Nota: ");
    scanf("%lf", &numero_4);
    
    media = (numero_1 + numero_2 + numero_3 + numero_4) / 4;

    printf("A sua Media e: %.2lf", media);
    
    return 0;
}