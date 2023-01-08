/*
    Autor: Manuel Carlos Gomes de Sousa
    Semestre: 2º
    Email: manuel.sousa06@aluno.ifce.edu.br

    Descricao: 
        Exercicio 03 do Capitulo 4

        Enunciado:
        Faca um algoritmo que calcule a divisao inteira de dois numeros, por exemplo, 
        10 div 3 = 3, utilizando o operador de adicao ou subtracao. Depois, faca o teste
        de mesa para garantir que o exercicio esta correto.

        Para auxiliar na resolucao deste exercicio, observe que a operacao de divisao segue
        o raciocinio similar ao da multiplicacao, porem de forma inversa. Ou seja, o numero
        de vezes que se subtraindo o dividendo (operando1) pelo divisor (operando2) chegar
        a 0 e o quociente procurado.

        Vejamos o exemplo: 12 div 3.

        Operando1: 12

        Operando2: 3

        Quociente: 4

        Se calcularmos 12 - 3 - 3 - 3 - 3 = 0 (12 subtraido 4 vezes (quociente) por 3 e igual a 0).

        Caso o quociente nao seja exato, e preciso verificar que a proxima subtracao tera um resultado
        negativo:

        13 div 3 -> 13 - 3 - 3 - 3 - 3 = 1.

        Subtraindo-se mais uma vez, teremos -2. Portanto, o resultado procurado e 4.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //dados
    int operando1,
        operando2,
        somador,
        quociente = 0;
    
    //leitura
    printf("Informe o operando1: ");
    scanf("%d", &operando1);

    do {
        printf("Informe o operando2: ");
        scanf("%d", &operando2);
        //error
        if (operando2 == 0)
            puts("ERROR: o operando 2 e invalido! Tente novamente.");
    } while (operando2 == 0);

    //processamento
    somador = ( (operando1 > 0 && operando2 < 0) ||
                (operando1 < 0 && operando2 > 0) ) ? -1 : 1;

    operando1 = (operando1 > 0) ? operando1 : -operando1;
    operando2 = (operando2 > 0) ? operando2 : -operando2;

    while (operando1 >= operando2) {
        quociente += somador;
        operando1 -= operando2;
    }

    printf("Quociente: %d\n", quociente);

    return 0;
}