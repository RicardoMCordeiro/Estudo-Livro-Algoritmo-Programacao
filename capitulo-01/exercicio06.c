/*
    Autor: Wanderson Gomes da Costa
    Semestre: 6
    Email: wanderson.gomes.costa05@aluno.ifce.edu.br

    Descricao: 
        Exercicio 06 do Capitulo 1

        Enunciado:
        Explique por que um codigo Java e portavel em varios
        sistemas operacionais.
*/
#include <stdio.h>

int main() {
    printf(
    "O Java é uma linguagem de programação que foi desenvolvida \
     com o objetivo de ser portável em diversos sistemas operacionais \
     e plataformas de hardware. Isso é possível devido ao fato de que \
     o código Java é compilado para uma máquina virtual, chamada de Java \
     Virtual Machine (JVM), em vez de ser compilado diretamente para código \ 
     nativo de um processador específico.");

    printf(
    "Dessa forma, o código Java pode ser executado em qualquer sistema \ 
     operacional que possua uma implementação da JVM. A JVM é responsável \
     por interpretar o código Java e traduzi-lo para as instruções específicas \
     de hardware do sistema operacional em que está sendo executado. Isso torna o \
     código Java independente da plataforma de hardware e do sistema operacional, \ 
     permitindo que ele seja executado em qualquer lugar onde haja uma JVM instalada.");

    return 0;
}