/*
    Autor: Wanderson Gomes da Costa
    Semestre: 6
    Email: wanderson.gomes.costa05@aluno.ifce.edu.br

    Descricao: 
        Exercicio 03 do Capitulo 1

        Enunciado:
        Explique como um programa e executado em um computador.
*/
#include <stdio.h>

int main() {
    printf(
    "Para executar um programa em um computador,"
    " o programa deve ser carregado da memória secundária,"
    " como um disco rígido ou uma unidade flash, para a memória"
    " principal do computador. A memória principal é onde o "
    "programa é executado pelo processador do computador.");

    printf(
    "Antes de um programa ser executado, ele geralmente é convertido"
    " em código de máquina pelo sistema operacional. O código de máquina"
    " é uma série de instruções que o processador do computador pode"
    " entender e executar diretamente.");
    
    printf(
    "Quando o programa é carregado na memória principal e convertido "
    "em código de máquina, o processador do computador começa a executar"
    " o programa, começando pela primeira instrução e avançando "
    "sequencialmente através das instruções restantes.");

    printf(
    "Enquanto o programa estiver sendo executado, o processador pode "
    "precisar acessar outros recursos do computador, como a memória "
    "secundária, a rede, ou dispositivos de entrada/saída, para ler "
    "ou gravar dados. Quando o programa chega ao final, o processador"
    " para de executá-lo e o programa é encerrado.");

    return 0;
}