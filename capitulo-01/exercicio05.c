/*
    Autor: Wanderson Gomes da Costa
    Semestre: 6
    Email: wanderson.gomes.costa05@aluno.ifce.edu.br

    Descricao: 
        Exercicio 05 do Capitulo 1

        Enunciado:
        Dado um programa executavel em um sistema operacional, o que e preciso fazer
        para que tal programa possa ser utilizado em outro sistema operacional?
*/
#include <stdio.h>

int main() {
    printf(
    "Para que um programa executável possa ser utilizado em\
     outro sistema operacional, é preciso ter em mente que\
     cada sistema operacional tem suas próprias peculiaridades\
     e dependências. Isso significa que um programa que foi\
     compilado para um determinado sistema operacional pode\
     não funcionar diretamente em outro sistema operacional\
     sem algum tipo de adaptação.");

    printf(
    "Existem algumas maneiras de fazer com que um programa\
     executável seja compatível com outro sistema operacional:");

    printf(
    "Recompilar o código fonte do programa utilizando uma\
     ferramenta de compilação que é compatível com o sistema\
     operacional desejado.");

    printf(
    "Utilizar uma ferramenta de emulação, que permite que o\
     programa seja executado em um ambiente simulado do sistema\
     operacional original, em cima do sistema operacional alvo.");

    printf(
    "Utilizar uma camada de compatibilidade, como o Wine, que\
     fornece as dependências necessárias para que o programa\
     possa ser executado no sistema operacional alvo.");

    printf(
    "Utilizar uma máquina virtual, que permite que o programa\
     seja executado em um ambiente simulado de um sistema operacional\
    completo, em cima do sistema operacional alvo.");

    return 0;
}