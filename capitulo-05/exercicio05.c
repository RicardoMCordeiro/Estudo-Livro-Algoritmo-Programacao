/*
    Autor: Francisco Jonathan Rodrigues Fenandes
    Semestre: 2 semestre
    Email: fernandes.francisco07@aluno.ifce.edu.br
    Descricao: 
        Exercicio 05 do Capitulo 5
        Enunciado: Faca um algoritmo que calcule a media aritmetica de todas as turmas de uma escola. Considere como entradas
        o numero de turmas e o numero de alunos de cada turma. A media aritmetica de cada turma deve ser apresentada, alem
        da media geral, que sera o resultado da media das turmas. O algoritmo devera ter os madulos Media_Turma e Media_Escola.
        O usuario entrara, dentro do modulo principal, com a quatidade de turmas e, dentro do modulo Media_Escola, com o numero
        de alunos de cada turma. Esta eh a adaptacao do problema 17.
*/
#include <stdio.h>

/*
  Uma media aritmetica sera feita quando a soma de todos os valores for dividida
  pela quantidade de valores existentes.
  Ex: 
    A media dos valores 2, 5 e 7 seria 6, pois:
    2 + 5 + 7 = 14.
    como temos tres valores, dividimos 14 por 3, que eh igual a 6.
*/
float Media_Escola(int qtd_turmas);
float Media_Turma(int qtd_de_aluno_turma);

int main(void) {
	int qtd_turmas;

	do {
		printf("Informe a quantidade de turmas existentes na escola: ");
		scanf("%d", &qtd_turmas);
		//error
		if (qtd_turmas <= 0)
			printf("ERROR: quantidade invalida! Tente novamente.\n");
	} while (qtd_turmas <= 0);
	
	printf("-> A media aritmetica da escola eh: %.1f\n", Media_Escola(qtd_turmas));
	
	return 0;
}

float Media_Escola(int qtd_turmas){
	int qtd_de_aluno_turma;
	
	float media_turmas[qtd_turmas], media_escola = 0.0;
	
	for(int i = 1; i <= qtd_turmas; i++){
		printf("Informe a quantidade de alunos da turma %d: ", i);
		scanf("%i", &qtd_de_aluno_turma);
		media_turmas[i] = Media_Turma(qtd_de_aluno_turma);
	}

	for(int i = 1; i <= qtd_turmas; i++){
		printf("-> A media aritmetica da turma %i eh: %.1f\n", i, media_turmas[i]);
	}
	
	for(int i = 1; i <= qtd_turmas; i++){
		media_escola += media_turmas[i];
	}
	
	media_escola /= qtd_turmas;
	
	return media_escola;
}

float Media_Turma(int qtd_de_aluno_turma){
	float nota_aluno, media_turma = 0.0;
	
	for(int i = 1; i <= qtd_de_aluno_turma; i++){
		printf("Insira a nota do aluno %i: ", i);
		scanf("%f", &nota_aluno);
		media_turma += nota_aluno;
	}

	media_turma /= qtd_de_aluno_turma;
	
	return media_turma;
}
